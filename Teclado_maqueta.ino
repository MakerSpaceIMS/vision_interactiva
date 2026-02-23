#include <Keyboard.h>// Incluye la librería oficial para emular un teclado USB HID
// Definición de los pines digitales asignados a cada tecla
int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
int pinE = 6;
int pinF = 7;
int pinG = 8;
int pinH = 9;
int pinI = 10;
int pinJ = 11;
int pinK = 12;
int pinL = 13;
int pinM = 14;
int pinN = 15;
int pinO = 16;
int pinP = 17;
int pinQ = 18;
int pinR = 19;

void setup() {
  // Configuración de pines como entradas con resistencia Pull-up interna
  // Esto mantiene el pin en nivel ALTO (5V) hasta que el botón lo conecta a TIERRA (GND)
  pinMode(pinA, INPUT_PULLUP);
  pinMode(pinB, INPUT_PULLUP);
  pinMode(pinC, INPUT_PULLUP);
  pinMode(pinD, INPUT_PULLUP);
  pinMode(pinE, INPUT_PULLUP);
  pinMode(pinF, INPUT_PULLUP);
  pinMode(pinG, INPUT_PULLUP);
  pinMode(pinH, INPUT_PULLUP);
  pinMode(pinI, INPUT_PULLUP);
  pinMode(pinJ, INPUT_PULLUP);
  pinMode(pinK, INPUT_PULLUP);
  pinMode(pinL, INPUT_PULLUP);
  pinMode(pinM, INPUT_PULLUP);
  pinMode(pinN, INPUT_PULLUP);
  pinMode(pinO, INPUT_PULLUP);
  pinMode(pinP, INPUT_PULLUP);
  pinMode(pinQ, INPUT_PULLUP);
  pinMode(pinR, INPUT_PULLUP);
 
 Keyboard.begin();// Inicializa la emulación del teclado
}

void loop() {
  // --- Bloque de detección de pulsaciones ---
  // Se verifica si cada pin está en estado BAJO (presionado)
  if (digitalRead(pinA) == LOW) {
    Keyboard.press('a');// Simula presionar la tecla 'a'
    delay(100);// Pausa para evitar repeticiones múltiples accidentales (Debounce)
    Keyboard.release('a');// Simula soltar la tecla 'a'
  }
  if (digitalRead(pinB) == LOW) {
    Keyboard.press('b');
    delay(100);
    Keyboard.release('b');
  }
  if (digitalRead(pinC) == LOW) {
    Keyboard.press('c');
    delay(100);
    Keyboard.release('c');
  }
  if (digitalRead(pinD) == LOW) {
    Keyboard.press('d');
    delay(100);
    Keyboard.release('d');
  }
  if (digitalRead(pinE) == LOW) {
    Keyboard.press('e');
    delay(100);
    Keyboard.release('e');
  }
  if (digitalRead(pinF) == LOW) {
    Keyboard.press('f');
    delay(100);
    Keyboard.release('f');
  }
  if (digitalRead(pinG) == LOW) {
    Keyboard.press('g');
    delay(100);
    Keyboard.release('g');
  }
  if (digitalRead(pinH) == LOW) {
    Keyboard.press('h');
    delay(100);
    Keyboard.release('h');
  }
  if (digitalRead(pinI) == LOW) {
    Keyboard.press('i');
    delay(100);
    Keyboard.release('i');
  }
  if (digitalRead(pinJ) == LOW) {
    Keyboard.press('j');
    delay(100);
    Keyboard.release('j');
  }
  if (digitalRead(pinK) == LOW) {
    Keyboard.press('k');
    delay(100);
    Keyboard.release('k');
  }
  if (digitalRead(pinL) == LOW) {
    Keyboard.press('l');
    delay(100);
    Keyboard.release('l');
  }
  if (digitalRead(pinM) == LOW) {
    Keyboard.press('m');
    delay(100);
    Keyboard.release('m');
  }
  if (digitalRead(pinN) == LOW) {
    Keyboard.press('n');
    delay(100);
    Keyboard.release('n');
  }
  if (digitalRead(pinO) == LOW) {
    Keyboard.press('o');
    delay(100);
    Keyboard.release('o');
  }
  if (digitalRead(pinP) == LOW) {
    Keyboard.press('p');
    delay(100);
    Keyboard.release('p');
  }
  if (digitalRead(pinQ) == LOW) {
    Keyboard.press('q');
    delay(100);
    Keyboard.release('q');
  }
  if (digitalRead(pinR) == LOW) {
    Keyboard.press('r');
    delay(100);
    Keyboard.release('r');
  }
}
