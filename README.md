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
Here is the complete parts list and cost breakdown for the ClaudeDeck S3:

| Item | Qty | Supplier | Cost/item | Total Cost | Link |
| :--- | :---: | :--- | :---: | :---: | :--- |
| **ESP32-S3-WROOM-1 / ESP32-S3 N16R8 Dev Board** | 1 | Mercado Livre BR | $16.00 | $16.00 | [View Item](https://www.mercadolivre.com.br/esp32s3-n16r8-com-16mb-flash-8mb-psram--brinde-cabo-usb/up/MLBU3759855210?pdp_filters=item_id:MLB4444095515#polycard_client=cart_list&wid=MLB4444095515&sid=cart) |
| **Switches** | 1 | Mercado Livre BR | $6.00 | $6.00 | [View Item](https://www.mercadolivre.com.br/p/MLB2091173212?pdp_filters=item_id%3AMLB2655745171&sid=cart#polycard_client=cart_list&wid=MLB2655745171&sid=cart) |
| **OLED Display 0.91 inch I2C (128x32)** | 1 | Mercado Livre BR | $11.50 | $11.50 | [View Item](https://produto.mercadolivre.com.br/MLB-4553164164-display-oled-128x32-pixel-091-polegadas-4-pinos-i2c-_JM?sid=cart&variation=180159447384#polycard_client=cart_list&sid=cart) |
| **WS2812B SMD 5050 RGB LEDs** | 4 | Mercado Livre BR | $5.00 | $20.00 | [View Item](https://www.mercadolivre.com.br/kit-100-unidades-chip-led-rgb-5050-alto-brilho-chip-rgb/up/MLBU1424762403?pdp_filters=item_id:MLB2732140753#polycard_client=cart_list&wid=MLB2732140753&sid=cart) |
| **USB-C module** | 1 | Mercado Livre BR | $3.00 | $3.00 | [View Item](https://www.mercadolivre.com.br/conector-usb-c-31-16-pin-femea-modulo-para-soldagem-pcb/up/MLBU3682374993#polycard_client=search-desktop&be_origin=backend&overlay_label=not_apply&search_layout=grid&position=6&type=product&tracking_id=4e6fd306-2cde-41ae-84a4-90954688069a&wid=MLB6074587522&sid=search) |
| **Encoder** | 1 | Mercado Livre BR | $8.00 | $8.00 | [View Item](https://www.mercadolivre.com.br/10-encoder-rotativo-com-chave-5-terminais-potenciometro-ec11/up/MLBU1466437144?pdp_filters=item_id:MLB4050025882#polycard_client=cart_list&wid=MLB4050025882&sid=cart) |
| **Estimated total shipping** | 1 | - | - | $0.00 | - |
| **TOTAL** | | | | **$64.50** | |
