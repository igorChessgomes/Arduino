#define LEDR_PIN 12
#define LEDY_PIN 11
#define LEDG_PIN 10

void setup() {
  pinMode(LEDR_PIN, OUTPUT);
  pinMode(LEDY_PIN, OUTPUT);
  pinMode(LEDG_PIN, OUTPUT);

}

void RED(){
  
  digitalWrite(LEDR_PIN, HIGH);
  delay(5000);
  digitalWrite(LEDR_PIN,LOW);
  
  }
void YELLOW(){
  
  digitalWrite(LEDY_PIN, HIGH);
  delay(2000);
  digitalWrite(LEDY_PIN, LOW);
  
}
void GREEN(){

  digitalWrite(LEDG_PIN, HIGH);
  delay(5000);
  digitalWrite(LEDG_PIN, LOW);

}

void loop() {
  RED();
  YELLOW();
  GREEN();
  
}
  
  
  
