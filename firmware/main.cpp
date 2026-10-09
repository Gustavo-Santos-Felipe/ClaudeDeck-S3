#include <Arduino.h>
#include <Keypad.h>
#include <Keyboard.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <FastLED.h>

// --- CONFIGURAÇÃO DOS PINOS (Atualize com os do seu KiCad depois) ---
const byte ROWS = 3; 
const byte COLS = 3; 
byte rowPins[ROWS] = {1, 2, 3}; // Pinos das linhas (ajustar)
byte colPins[COLS] = {4, 5, 6}; // Pinos das colunas (ajustar)

char keys[ROWS][COLS] = {
  {'1','2','3'},
  {'4','5','6'},
  {'7','8','9'}
};
Keypad macropad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// --- OLED ---
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

// --- LEDs RGB ---
#define LED_PIN     7 // Pino de dados dos LEDs WS2812B
#define NUM_LEDS    9
CRGB leds[NUM_LEDS];

void setup() {
  Serial.begin(115200);
  Keyboard.begin();
  
  FastLED.addLeds<WS2812B, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setBrightness(50);
  
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Falha no OLED"));
  }
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  display.println("ClaudeDeck S3 OK");
  display.display();
}

void loop() {
  char key = macropad.getKey();

  if (key) {
    // Atualiza OLED
    display.clearDisplay();
    display.setCursor(0, 10);
    display.print("Tecla: ");
    display.println(key);
    display.display();

    // Acende LED de feedback
    fill_solid(leds, NUM_LEDS, CRGB::Red);
    FastLED.show();
    
    // Envia o comando USB
    Keyboard.press(key);
    delay(100);
    Keyboard.releaseAll();
    
    // Apaga LED
    fill_solid(leds, NUM_LEDS, CRGB::Black);
    FastLED.show();
  }
}// Código do macropad aqui.
