#define C  6
#define D  5
#define E  4
#define F  3
#define G  2
#define BUTTON  12

byte v = 0;

void setup() {
   pinMode(A, OUTPUT);
   pinMode(B, OUTPUT);
   pinMode(C, OUTPUT);
   pinMode(D, OUTPUT);
   pinMode(E, OUTPUT);
   pinMode(F, OUTPUT);
   pinMode(G, OUTPUT);
   pinMode(BUTTON, INPUT);
}

void loop() {
   digitalWrite(A, HIGH); //цифра нуль
   digitalWrite(B, HIGH);
   digitalWrite(C, HIGH);
   digitalWrite(D, HIGH);
   digitalWrite(E, HIGH);
   digitalWrite(F, HIGH);
   digitalWrite(G, LOW);
   if (digitalRead(BUTTON) == HIGH) { delay(500); v = 1; }

   while (v == 1) {
      digitalWrite(A, LOW); //цифра один
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      if (digitalRead(BUTTON) == HIGH) { delay(500); v = 2; }
   }
   while (v == 2) {
      digitalWrite(A, HIGH); //цифра два
      digitalWrite(B, HIGH);
      digitalWrite(C, LOW);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      if (digitalRead(BUTTON) == HIGH) { delay(500); v = 3; }
   }
   while (v == 3) {
      digitalWrite(A, HIGH); //цифра три
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      if (digitalRead(BUTTON) == HIGH) { delay(500); v = 4; }
   }
   while (v == 4) {
      digitalWrite(A, LOW); //цифра четыре
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      if (digitalRead(BUTTON) == HIGH) { delay(500); v = 5; }
   }
   while (v == 5) {
      digitalWrite(A, HIGH); //цифра пять
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, LOW);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      if (digitalRead(BUTTON) == HIGH) { delay(500); v = 6; }
   }
   while (v == 6) {
      digitalWrite(A, HIGH); //цифра шесть
      digitalWrite(B, LOW);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      if (digitalRead(BUTTON) == HIGH) { delay(500); v = 7; }
   }  
   while (v == 7) {
      digitalWrite(A, HIGH); //цифра семь
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, LOW);
      digitalWrite(E, LOW);
      digitalWrite(F, LOW);
      digitalWrite(G, LOW);
      if (digitalRead(BUTTON) == HIGH) { delay(500); v = 8; }
    }
    while (v == 8) {
      digitalWrite(A, HIGH); //цифра восемь
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, HIGH);
      digitalWrite(G, HIGH);
      if (digitalRead(BUTTON) == HIGH) { delay(500); v = 9; }
    }
    while (v == 9) {
      digitalWrite(A, HIGH); //цифра девять 
      digitalWrite(B, HIGH);
      digitalWrite(C, HIGH);
      digitalWrite(D, HIGH);
      digitalWrite(E, HIGH);
      digitalWrite(F, LOW);
      digitalWrite(G, HIGH);
      if (digitalRead(BUTTON) == HIGH) { delay(500); v = 0; }
    }
}
