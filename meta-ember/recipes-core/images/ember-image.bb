SUMMARY = "My custom image"

require recipes-core/images/core-image-minimal.bb

IMAGE_INSTALL:append = " \
    ember-recipe \
"
