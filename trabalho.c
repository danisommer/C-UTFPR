// Definição dos pinos dos LEDs
const int blueLedPins[] = {13, 11, 9, 7};
const int yellowLedPins[] = {12, 10, 8, 6};
const int redLedPins[] = {A2, A4, 2, 4};
const int greenLedPins[] = {A3, A5, 3, 5};

// Pinos dos botões
const int button1Pin = A0;
const int button2Pin = A1;

// Variáveis para armazenar o estado dos botões
int button1State = 0;
int button2State = 0;

// Variáveis para controlar o estado dos LEDs
int ledState = LOW;

// Função para atualizar o estado dos LEDs
void updateLEDs(int state) {
  for (int i = 0; i < 4; i++) {
    digitalWrite(blueLedPins[i], state);
    digitalWrite(yellowLedPins[i], state);
    digitalWrite(redLedPins[i], state);
    digitalWrite(greenLedPins[i], state);
  }
}

void setup() {
  // Configuração dos pinos dos LEDs como saída
  for (int i = 0; i < 4; i++) {
    pinMode(blueLedPins[i], OUTPUT);
    pinMode(yellowLedPins[i], OUTPUT);
    pinMode(redLedPins[i], OUTPUT);
    pinMode(greenLedPins[i], OUTPUT);
  }
  
  // Configuração dos pinos dos botões como entrada
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
}

void loop() {
  // Leitura do estado dos botões
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

  // Verifica se o botão 1 foi pressionado
  if (button1State == HIGH) {
    ledState = HIGH;
    updateLEDs(ledState);
    delay(500); // Tempo de espera para evitar leituras repetidas
  }
  
  // Verifica se o botão 2 foi pressionado
  if (button2State == HIGH) {
    ledState = LOW;
    updateLEDs(ledState);
    delay(500); // Tempo de espera para evitar leituras repetidas
  }
}
