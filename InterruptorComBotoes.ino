int ledVerde = 9, ledLaranja = 10, ledAmarelo = 11;
int botaoEsq = 3, botaoDir = 2;

void setup()
{
  pinMode(ledVerde, OUTPUT);
  pinMode(ledLaranja, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  
  pinMode(botaoEsq, INPUT);
  pinMode(botaoDir, INPUT);
}

void loop()
{
  if(digitalRead(botaoEsq) == HIGH){
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledLaranja, HIGH);
    digitalWrite(ledVerde, HIGH);
  }
  else if(digitalRead(botaoDir) == HIGH){
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledLaranja, LOW);
    digitalWrite(ledVerde, LOW);
  }
  
  delay(100);
}
