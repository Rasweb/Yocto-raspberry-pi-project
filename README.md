# Yocto-raspberry-pi-project
This project contains a custom Linux image for Raspberry Pi built using the Yocto Project and Bitbake.

The goal of this project was to learn by creating a custom layer, distro configuration, and application recipe.

---

## Features
- Custom Yocto layer (`meta-ember`)
- Custom Linux distribution
- Custom image based on `core-image-minimal`
- Example C++ application (`ember-cli`)
- Reproducible builds using kas
- Raspberry Pi 5 target support

---

## Build Instructions
To build the project using Docker/Podman
``` bash
kas-container build project-kas.yml
```

---

## Project Structure
`meta-ember/` - Custom Yocto layer
`project-kas.yml` - Build configuration
`meta-ember/recipes-ember` - Custom recipes
`meta-ember/recipes-core/images` - Image definitions

---

## Resources
- [Yocto](https://www.yoctoproject.org/)
- [Yocto docs](https://docs.yoctoproject.org/)
- [Kas](https://github.com/siemens/kas)
- [Bitbake](https://git.openembedded.org/bitbake)
- [Openembedded-core](https://git.openembedded.org/openembedded-core)
- [Meta-yocto](https://git.yoctoproject.org/meta-yocto)
- [Meta-raspberrypi](https://github.com/agherzan/meta-raspberrypi.git)


