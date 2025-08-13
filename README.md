# Picomputer
A miniPC-style computer based on the GroundStudio Marble Pico RP2040 board, featuring VGA video output, USB keyboard support and literal Plug-Ins.
## Backstory
This is a **school project** I made for 8th grade. At my school there is a requirement that students make a project on the vacation from 7th to 8th grade, wich includes a min. 5 page essay, and they have to present it in 8th grade to the whole section. So, I saw that many people on the internet make these computers with the Raspberry Pi Pico, and decided to attempt one myself. There's nothing fancy here, many have done better, but as a 14-year old, this is my best.
## Specs
As the main board I'm using the [GroundStudio Marble Pico](https://github.com/GroundStudio/GroundStudio_Marble_Pico), wich is a remake of the RPi Pico with USB-C, 8MB Flash and an SD card slot, but it is **only available in Romania**. For video output it has a **VGA port**, operated by the RP2040's PIO, featuring 8bit color in RGB332 format. Commands are entered via a **USB keyboard**, controlled by TinyUSB in the code. I tried making something innovative in the form of **Plug-Ins**, but they are just fancy USB ports with UART and I2C support (two wire communication). It has 4 Plug-In slots. The could take an **ESP-01 for WiFi**, a **mini OLED screen for displaying status**, or anything else that **communicates over UART or I2C**.

---

On the screen will be a classic **command line**, featuring many known commands, operating in the microSD card's files. I also plan adding a **really nice bootup-screen**, displaying "Picomputer" in some very cool way. As other future features I am thinking about **minigames**, a **text editor** and a **HEX editor**.
## Case
Bare electronics don't look good on their own, and especially because I have to present this Picomputer to a hallful of people, I have to make a case. I decided to **design it in Onshape** and **3D print** it on my Bambu Lab A1 that I have at home. I tried making is so that **the electronics are easy to mount** in the case, with most of the soldering done outside of it. Also, **the main board is removable**, attached with 2.54mm THT pins to a proto-board, so that if something happens, it can be changed easily.
## Programming
For this project I wanted to use the Pico-SDK for coding. First, I tried doing that on Windows, but I found it too complicated to set it up. So, I got my hands on another laptop, and installed Linux Mint on it. Needless to say, it ran the Pico-SDK flawlessly. From then on I almost switched over to Linux entirely.
## Make your own!
If you are interested in making one of these, you can find everything you need in this repo, including [3D print files](/stepfile), the [circuit diagram](/circuit), the [bill of materials](/circuit/README.md) and even a [ready-to-run UF2 file](/uf2). Also, you can find my [Onshape public document](https://cad.onshape.com/documents/6c1ab5033f3325af05f11df7/w/ee589331b2587ebd8b0d8371/e/94cabc4ad99eb9d92a4acf5b).
## Help me develop!
If you find any bug or want to suggest features, please open an issue!