# Dmenu

A generic menu for X.

## Table of Contents

* [Patches](#patches) 
* [Installation](#installation) 
  * [AUR](#aur)
  * [Manual](#manual)

## Patches

* [allow color font](https://tools.suckless.org/dmenu/patches/allow-color-font) 
* [center](https://tools.suckless.org/dmenu/patches/center) 
* [border](https://tools.suckless.org/dmenu/patches/border) 
* [fuzzymatch](https://tools.suckless.org/dmenu/patches/fuzzymatch) 
* [fuzzyhighlight](https://tools.suckless.org/dmenu/patches/fuzzyhighlight) 
* [xresources alt](https://tools.suckless.org/dmenu/patches/xresources-alt) 
* [lines below prompt](https://tools.suckless.org/dmenu/patches/lines-below-prompt) 

## Installation

### AUR

In case of yay:

```sh
yay --sync "utilyre-dmenu-git"
```

### Manual

Clone the repository and hop into it:

```sh
git clone "https://github.com/utilyre/dmenu.git"
cd "./dmenu"
```

Then build and install the package:

```sh
makepkg --syncdeps --rmdeps --install
```
