# ⚡ ESP32-C3-SUPER-MINI-ULTRA-PRO-MAX 🏆

<p align="center">
<img src="https://img.shields.io/badge/ESP32--C3-SUPER_MINI-000000?style=for-the-badge&logo=espressif" />
<img src="https://img.shields.io/badge/NRF24L01-WIRELESS-0d6efd?style=for-the-badge" />
<img src="https://img.shields.io/badge/ARDUINO-IDE-00979D?style=for-the-badge&logo=arduino&logoColor=white" />
<img src="https://img.shields.io/badge/SPI-SERIAL-6f42c1?style=for-the-badge" />
<img src="https://img.shields.io/badge/FOR_TESTING-PURPOSES-orange?style=for-the-badge" />
<img src="https://img.shields.io/badge/EDUCATIONAL-USE_AT_YOUR_OWN_RISK-red?style=for-the-badge" />
</p>

<p align="center">
<img src="https://img.shields.io/badge/STATUS-HYPE_TRAIN_DEPARTING-2ea44f?style=for-the-badge" />
</p>

<p align="center">
<b>🚀 SMALL BOARD. <i>ABSURDLY LONG NAME.</i> BIG TEST. 💥</b>
</p>

<p align="center">
<img src="https://img.shields.io/badge/⚠️_WARNING-EDUCATIONAL_USE_ONLY-brightgreen?style=for-the-badge&labelColor=ff0000&color=000000" />
</p>

<p align="center">
<b>🚫 STRICTLY FOR EDUCATIONAL PURPOSES ONLY. 🚫</b><br>
<b>⚠️ USE ENTIRELY AT YOUR OWN RISK. ⚠️</b><br>
<b>☠️ UNAUTHORIZED USE = YOUR PROBLEM, NOT MINE. ☠️</b>
</p>

> 🚨 **HARD WARNING:** Do NOT use this on networks, devices, or airwaves you do not own or have **explicit written permission** to test. The author takes **ZERO responsibility** for anything you do with this. You break it, you own it. 💀

---

## 🧠・WHAT IS THIS BEAST?

Meet the **ESP32-C3-Super-Mini-Ultra-Pro-Max** 👑 — the repo name is 90% marketing, 100% awesome.

This project pairs the pocket-sized **ESP32-C3** with the legendary **NRF24L01** radio transceiver to create a tiny wireless testing rig for experiments, learning, and DIY electronics adventures.

> 🔧 **Flash it. Wire it. Test it. Break it. Fix it. Repeat.** 🔁

### ✨ WHY YOU'LL LOVE IT

- ⚡ **ESP32-C3 Super Mini** — RISC-V muscle in a package smaller than your thumbnail
- 📡 **NRF24L01** — 2.4GHz wireless comms, dirt cheap, endlessly hackable
- 🔌 **SPI interface** — fast, reliable, classic
- 💻 **Arduino IDE** — no fancy toolchains, just hit Upload ▶️
- 🛠️ **Plug & experiment** — perfect for bench tests and learning wireless protocols
- 🚀 **Open hardware spirit** — learn by doing, do by breaking (respectfully 😅)

> 🚨 **HARD REMINDER:** *EDUCATIONAL USE ONLY. USE AT YOUR OWN RISK. NO excuses, no exceptions — if you misuse this, that is 100% on YOU.* ☠️

---

## 🔌・WIRING — LET'S GET PHYSICAL

Time to connect the dots! ⚡ Double-check everything **before** powering up.

### 📡 ESP32-C3 → NRF24L01 Connection Map

| ESP32-C3 | NRF24L01 | Function |
| :---: | :---: | :--- |
| 3V3 | VCC | Power |
| GND | GND | Ground |
| GPIO 21 | CSN | Chip Select |
| GPIO 20 | CE | Chip Enable |
| GPIO 6 | MOSI | SPI Data Out |
| GPIO 4 | SCK | SPI Clock |
| GPIO 5 | MISO | SPI Data In |

<details>
<summary>💡 Pro Wiring Tips — click me!</summary>

- ⚡ Use a **stable 3.3V** power supply — the NRF24L01 is picky!
- 🔍 Double-check pin labels before connecting (trust, but verify 👀)
- 🔗 Keep SPI wires **short and secure**
- 🧂 Add a **10–100 µF capacitor** across VCC and GND near the NRF24L01 — it drinks power in bursts, and brownouts = headaches 😵

</details>

> 🚨 **HARD REMINDER:** *EDUCATIONAL USE ONLY. USE AT YOUR OWN RISK. NO excuses, no exceptions — if you misuse this, that is 100% on YOU.* ☠️

---

## 🖼️・HARDWARE GALLERY

<p align="center">
<b>⚙️ ESP32-C3 WIRING REFERENCE</b>
<br><br>
<img width="90%" src="https://github.com/user-attachments/assets/d510d92a-80ad-47b4-8b13-0a15d355e448" alt="ESP32-C3 wiring reference" />
</p>

<p align="center">
<b>📡 NRF24L01 PINOUT GUIDE</b>
<br><br>
<img width="75%" src="https://github.com/user-attachments/assets/e68c59d4-42cd-4a56-959a-6802cc6a8e9f" alt="NRF24L01 pinout" />
</p>

> 🚨 **HARD REMINDER:** *EDUCATIONAL USE ONLY. USE AT YOUR OWN RISK. NO excuses, no exceptions — if you misuse this, that is 100% on YOU.* ☠️

---

## 📚・LIBS YOU'LL NEED

Get these installed before the magic happens ✨

| Library | What it does |
| --- | --- |
| 🟢 Arduino Core | The dev framework — your ESP32's brain food |
| 🔗 SPI | SPI communication bus |
| 📡 RF24 | The NRF24L01 driver — speaks the radio's language |

### ⚙️ INSTALLATION — 5 EASY STEPS

1. Fire up **Arduino IDE** 🔥
2. Go to `Sketch → Include Library → Manage Libraries`
3. Search for **RF24** 🕵️
4. Hit **Install** ✅
5. Make sure your **ESP32 board package** is installed, select your **ESP32-C3** board, and smash **Compile** ▶️

> 🚨 **HARD REMINDER:** *EDUCATIONAL USE ONLY. USE AT YOUR OWN RISK. NO excuses, no exceptions — if you misuse this, that is 100% on YOU.* ☠️

---

## ⚠️・DISCLAIMER — READ THIS, SERIOUSLY

<blockquote>
<b>🚨 THIS PROJECT IS FOR EDUCATIONAL PURPOSES ONLY. USE IT AT YOUR OWN RISK. PERIOD.</b>
<br><br>
This project exists <b>ONLY</b> for learning, electronics experimentation, and <b>authorized</b> wireless research on <b>your own equipment</b>. Nothing more.
By using any code or information from this repository, <b>you accept FULL and SOLE responsibility for your own actions</b>.
If you do not understand the risks, <b>DO NOT USE THIS</b>. If you do not have permission, <b>DO NOT USE THIS</b>.
</blockquote>

The author is **not** responsible for:

- ❌ Misuse of the provided code
- ❌ Fried boards or broken dreams
- ❌ Unauthorized wireless interference
- ❌ Violations of local laws or regulations

**☠️ This is for educational purposes only. Use it ENTIRELY at your own risk. No permission? NO testing. No responsibility accepted. Your actions, your consequences. 💀**

---

## 🗺️・ROADMAP — WHERE THIS IS HEADED

- [x] 🔌 Basic NRF24L01 communication
- [x] 📺 Channel scanning experiments
- [ ] 📶 Dual-module TX/RX chat
- [ ] 📊 OLED signal monitor
- [ ] 🌐 Web dashboard via WiFi
- [ ] 🧪 More wireless research!

> 🚨 **HARD REMINDER:** *EDUCATIONAL USE ONLY. USE AT YOUR OWN RISK. NO excuses, no exceptions — if you misuse this, that is 100% on YOU.* ☠️

---

## ⭐・SUPPORT THE CHAOS (THE FUN, LEGAL KIND)

If this project made you smile, made you learn, or made your LED blink for the first time... 😍

- ⭐ **Star** this repo — it's free and it fuels me ☕
- 🍴 **Fork** it and go wild
- 🐛 **Report bugs** — I break things so you don't have to (sometimes)
- 💡 **PRs welcome** — bring your best ideas!
- 🔥 **Keep building** cool stuff and share it with the world

> 🚨 **HARD REMINDER:** *EDUCATIONAL USE ONLY. USE AT YOUR OWN RISK. NO excuses, no exceptions — if you misuse this, that is 100% on YOU.* ☠️

---

<p align="center">
<b>━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━</b>
<br>
⚡ <b>BUILD • EXPERIMENT • INNOVATE • REPEAT</b> ⚡
<br><br>
<i>Made with ❤️ and questionable amounts of coffee ☕
<br>
🔬 For the DIY electronics community. For science. For fun. 🔬
<br><br>
© All Rights Reserved.
</p>

> 🚨 **HARD REMINDER:** *EDUCATIONAL USE ONLY. USE AT YOUR OWN RISK. NO excuses, no exceptions — if you misuse this, that is 100% on YOU.* ☠️
