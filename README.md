# 🍌 Corne V4.1 Firmware with OLED and VIAL (Single Display Fix)

🌐 **Read this in:** [Русский 🇷🇺](./README_RU.md)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![VIAL Enabled](https://img.shields.io/badge/VIAL-Enabled-blue)](https://get.vial.today/)

## 📋 What is this?

This is a pre-built firmware package and a complete set of source files for the **Corne V4.1** split keyboard.

## 📸 OLED Preview

![Dancing Banana on Corne V4.1 OLED](./images/banana-oled-preview.jpg)

*What you'll see on the left display: current layer, active modifier, and the dancing banana animation.*

## ✨ Features

- **Single OLED Display** — Only the left display is physically present on the keyboard.
- **Screen Resolution:** 128x32.
- **Screen Orientation:** Vertical (portrait mode).
- **On-Screen Data:**
    - Current active layer.
    - Active modifier key (Shift, Ctrl, Alt, GUI, Caps).
    - **Dancing Banana Animation** (64x32 sprite).
- **VIAL Support:** Full integration. Change keymaps and macros in real-time without reflashing.
- **Layer Count:** 7 dynamic layers.
- **RGB Backlight:** Disabled by default in the config file (the compiled firmware ships with lights off to save power/prevent distraction).

## 📦 Pre-built Firmware (Easy Install)

1. Go to the **firmware** folder at the top of this repository.
2. Click on the `.uf2` file, then click the **Download** button (or **Raw** button).
3. Disconnect the right half (unplug TRRS cable).
4. Double-tap the **RESET** button on the left half.
5. A USB drive named `RPI-RP2` will appear on your computer.
6. Drag and drop the downloaded `.uf2` file onto that drive.
7. The keyboard will reboot automatically. Reconnect the right half.

## ⌨️ Loading Layout into VIAL

1. Open [VIAL](https://get.vial.today/) (Desktop or Web).
2. Go to **File → Load Keymap**.
3. Navigate to the **source** folder of this repository and select the `vial.json` file.
4. All 7 layers and layout mapping will be applied automatically.

## 🛠 How to Replace the Animation with Your Own

The animation logic and sprite data are located in the `source/oled.c` file. To add your own custom animation:

1. Convert your image/frames to byte arrays using [image2cpp](https://javl.github.io/image2cpp/) or a similar tool.
2. Replace the arrays `banana_right`, `banana_center`, and `banana_left` inside `oled.c` with your generated code.
3. Adjust the settings at the top of `oled.c` if necessary:
   - `BANANA_FRAMES` — Number of frames in the cycle.
   - `BANANA_FRAME_DELAY` — Delay between frames in milliseconds.

## 🔧 Building the Firmware from Source

> ⚠️ **Important Build Note:** This firmware **requires** the VIAL-specific fork of QMK. Compilation will fail with standard QMK Firmware.

1. Install [QMK MSYS](https://msys.qmk.fm/).
2. Clone the VIAL repository:
   ```bash
   git clone https://github.com/vial-kb/vial-qmk.git
   cd vial-qmk
   make git-submodule
