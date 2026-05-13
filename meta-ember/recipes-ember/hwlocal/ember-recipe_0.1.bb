SUMMARY = "Ember recipe"

DESCRIPTION = "This is my custom recipe - uses local source files"

LICENSE = "MIT"

LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://ember-cli.cc"

S = "${UNPACKDIR}"

do_compile() {
	${CXX} ${LDFLAGS} ember-cli.cc -o ember-cli
}

do_install() {
	install -d ${D}${bindir}
	install -m 0755 ember-cli ${D}${bindir}
}