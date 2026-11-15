//   ==================================================
//   REPO    : esp32-c3-super-mini-ultra-pro-max
//   MADE BY : 124LD
//
//   🚨🚨🚨 HARD WARNING — READ BEFORE FLASHING 🚨🚨🚨
//   ==================================================
//   THIS SKETCH IS FOR EDUCATIONAL PURPOSES **ONLY**.
//   USE IT **ENTIRELY AT YOUR OWN RISK**.
//   ⚠️  NO PERMISSION = NO TESTING. NO EXCUSES. ⚠️
//   Do NOT use on equipment, networks, or airwaves
//   you do NOT own or have EXPLICIT written consent
//   to test. The author (124LD) accepts ZERO
//   responsibility for ANY misuse, damage, legal
//   trouble, or interference caused by YOU.
//   YOU break it, YOU own it. ☠️
// ============================================================================



// ============================================
// 📚 NEEDED LIBRARYS
// 🚨 HARD REMINDER: EDUCATIONAL USE ONLY!
//    USE AT YOUR OWN RISK. NO PERMISSION
//    = NO TESTING. YOUR ACTIONS =
//    YOUR CONSEQUENCES. ☠️
// ============================================
#include <Arduino.h>
#include <SPI.h>
#include <nRF24L01.h>
#include <RF24.h>

// ============================================
// 🔌 PINS CONNECTIONS
// 🚨 HARD REMINDER: EDUCATIONAL USE ONLY!
//    USE AT YOUR OWN RISK. NO PERMISSION
//    = NO TESTING. YOUR ACTIONS =
//    YOUR CONSEQUENCES. ☠️ Double-check
//    every wire before powering up!
// ============================================
#define SCK_PIN   4
#define MISO_PIN  5
#define MOSI_PIN  6
#define CE_PIN    20
#define CSN_PIN   21

SPIClass spi(FSPI);  
RF24 radio(CE_PIN, CSN_PIN);


// ============================================
// ⚙️ SETUP
// 🚨 HARD REMINDER: EDUCATIONAL USE ONLY!
//    USE AT YOUR OWN RISK. NO PERMISSION
//    = NO TESTING. YOUR ACTIONS =
//    YOUR CONSEQUENCES. ☠️
// ============================================
void setup() {
  Serial.begin(115200);
  delay(500);

  spi.begin(SCK_PIN, MISO_PIN, MOSI_PIN);

  Serial.println("Initializing nRF24L01+...");

  if (!radio.begin(&spi)) {
    Serial.println("nRF24L01+ initialization failed!");
    while (1);
  }

  Serial.println("nRF24L01+ initialized!");

  radio.setAutoAck(false);
  radio.setRetries(0, 0);
  radio.setPALevel(RF24_PA_MAX, true);
  radio.setDataRate(RF24_2MBPS);
  radio.setCRCLength(RF24_CRC_DISABLED);
  radio.setChannel(0);
  radio.stopListening();
  radio.startConstCarrier(RF24_PA_MAX, 45);

  randomSeed(analogRead(0));
}

// ============================================
// 🔁 MAIN LOOP
// 🚨 HARD REMINDER: EDUCATIONAL USE ONLY!
//    USE AT YOUR OWN RISK. NO PERMISSION
//    = NO TESTING. YOUR ACTIONS =
//    YOUR CONSEQUENCES. ☠️
// ============================================
void loop() {
  byte channel = random(0, 126);
  radio.setChannel(channel);
  delayMicroseconds(random(30, 100));
}


// ============================================================================
//   END OF SKETCH
//   MADE WITH ❤️ BY 124LD
//   🚨 FINAL HARD REMINDER:
//   EDUCATIONAL PURPOSES ONLY.
//   USE AT YOUR OWN RISK.
//   MISUSE = YOUR PROBLEM. ☠️
// ============================================================================
