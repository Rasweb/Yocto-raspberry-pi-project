# Yocto-raspberry-pi-project
My custom linux image for the raspberry pi using Yocto and Bitbake

## Info links
- [Meta raspberrypi](https://github.com/agherzan/meta-raspberrypi)
- [Yocto medium guide](https://medium.com/nerd-for-tech/build-your-own-linux-image-for-the-raspberry-pi-f61adb799652)
- [Yocto offical custom distro guide](https://docs.yoctoproject.org/dev-manual/custom-distribution.html)
- [Yocto offical creating own layer guide](https://docs.yoctoproject.org/dev-manual/layers.html#creating-your-own-layer)

## Steps taken
Create a new project and a folder in that project, where the work will be done in:
``` bash
# Create main folder
mkdir folder_name
cd folder_name

# Create sources folder
mkdir sources
cd source
```

Clone the necesary repos for the project inside the sources folder
````bash
# Move to sources folder
cd sources

# Bitbake repo - build engine for the Yocto Project
# Core tool that runs the build process
git clone https://git.openembedded.org/bitbake

# Base layer of the Yocto Project
# Provides fundamental building blocks for any image.
git clone https://git.openembedded.org/openembedded-core

# Provides Poky - Yocto's reference distro
# Defines the distro behavior
git clone https://git.yoctoproject.org/meta-yocto

# The hardware support layer (BSP layer) for Raspberry pi boards.
# Required for Yocto with Raspberry pi
git clone git://git.yoctoproject.org/meta-raspberrypi
````

Initialize the build environment and create custom layer
``` bash
cd sources
source openembedded-core/oe-init-build-env rpi-build

#  Create custom layer using bitbake
bitbake-layers create-layer custom_layer_name
```

If locale error: Please make sure locale 'en_US.UTF-8' is available on your system.
After errors is handle and such rerun bitbake-layers command
```bash
export LC_ALL=en_US.UTF-8
export LANG=en_US.UTF-8

# May also be needed if issue persists:
sudo locale-gen en_US.UTF-8
sudo update-locale
```
 
Add layers
``` bash
bitbake-layers add-layer custom_layer_name
bitbake-layers add-layer ../meta-raspberrypi/
```
