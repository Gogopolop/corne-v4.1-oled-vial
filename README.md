# Corne V4.1 Firmware with OLED and VIAL (Single Display Fix)

[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![VIAL Enabled](https://img.shields.io/badge/VIAL-Enabled-blue)](https://get.vial.today/)

## 📋 What is this?

This is a pre-built firmware package and a complete set of source files for the **Corne V4.1** split keyboard.


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

1. Download the latest `.uf2` file from the [`/firmware`](firmware/) folder.
2. Disconnect the right half (unplug TRRS cable).
3. Double-tap the **RESET** button on the left half.
4. A USB drive named `RPI-RP2` will appear on your computer.
5. Drag and drop the `.uf2` file onto that drive.
6. The keyboard will reboot automatically. Reconnect the right half.

## ⌨️ Loading Layout into VIAL

1. Open [VIAL](https://get.vial.today/) (Desktop or Web).
2. Go to **File → Load Keymap**.
3. Select the `vial.json` file from the [`/source`](source/) folder in this repository.
4. All 7 layers and layout mapping will be applied automatically.

## 🛠 How to Replace the Animation with Your Own

The animation logic and sprite data are located in the [`source/oled.c`](source/oled.c) file. To add your own custom animation:

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
https://github.com/user-attachments/assets/985150c1-0d78-4ca9-a347-4471919b8457
