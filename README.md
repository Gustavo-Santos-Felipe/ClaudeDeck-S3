# ClaudeDeck S3

<img width="638" height="480" alt="images (1)" src="https://github.com/user-attachments/assets/7349a6db-e038-493d-b298-502bd0999857" />


A custom 3x3 mechanical macropad powered by the ESP32-S3, featuring a 0.91" OLED display and per-key RGB lighting.

## Features
* **Microcontroller:** ESP32-S3-WROOM-1 with Wi-Fi and Bluetooth capabilities.
* **Switches:** 3x3 matrix (9 keys) compatible with standard Cherry MX mechanical switches.
* **Display:** 0.91" I2C OLED screen for real-time status, menus, and feedback.
* **Lighting:** WS2812B RGB LEDs under each switch.
* **Connectivity:** USB-C.

## Why and How I Made It
I built the ClaudeDeck S3 because I needed a dedicated, programmable hardware interface to speed up my workflow in CAD software (like Fusion 360) and programming IDEs. I wanted something fully customizable, from the mechanical feel of the switches to the macros executed by the ESP32-S3. 

**How it was made:**
1. **PCB Design (Week 1):** I designed the schematic and routed the custom PCB using KiCad. I ensured proper trace widths for the power delivery to the WS2812B LEDs and created a compact layout that fits exactly under the 3x3 switch grid.
2. **Enclosure Design (Week 2):** I modeled a custom 6-degree angled ergonomic case in Autodesk Fusion 360, incorporating exact tolerances (0.25mm) for 3D printing and precise cutouts for the OLED screen and USB-C port.

## Hardware Design
Here is the electronic schematic and the PCB layout designed in KiCad:

![Schematic](docs/schematic.png)
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/54e58e2a-63af-4923-a378-c92259f0c9b9" />


![PCB Layout](docs/pcb_layout.png)
<img width="1920" height="1080" alt="image" src="https://github.com/user-attachments/assets/caf8617c-fc3e-415a-98cc-100f02b71582" />


## Bill of Materials (BOM)
Here is the cost breakdown and parts list for the core components:

| Part | Description | Quantity | Estimated Cost (USD) | Supplier Link |
| :--- | :--- | :---: | :---: | :--- |
| **ESP32-S3-WROOM-1** | Main microcontroller | 1 | $17.00 | [Mercado Livre](https://www.mercadolivre.com.br/placa-esp32s3-n16r8-16mb-flash-8mb-psram-wifi-ble/up/MLBU3872815117) |
| **Cherry MX Switches** | Mechanical switches (Pack of 5) | 2 | $10.00 | [Mercado Livre](https://lista.mercadolivre.com.br/switch-mx-cherry) |
| **0.91" OLED I2C** | 128x32 display | 1 | $4.50 | [Mercado Livre](https://www.mercadolivre.com.br/display-oled-128x32-ssd1306-i2c-091-azul-para-arduino/p/MLB2068167145) |
| **WS2812B LEDs** | SMD 5050 RGB LEDs (Pack of 100) | 1 | $6.00 | [Mercado Livre](https://www.mercadolivre.com.br/100-pecas-led-diodo-smd-rgb-5050-ws2812b-cobertura-branca/up/MLBU4616181690) |
