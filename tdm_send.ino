
void setup()
{
    Serial.begin(9600);
    pinMode(4,OUTPUT);
    pinMode(5,OUTPUT);
    pinMode(6,OUTPUT);
}

void loop()
{
    digitalWrite(4,HIGH);
    delay(5);
    digitalWrite(4,LOW);
    delay(5);
    digitalWrite(4,HIGH);
    delay(10);
    digitalWrite(4,LOW);
    delay(40);
    
    digitalWrite(5,HIGH);
    delay(5);
    digitalWrite(5,LOW);
    delay(5);
    digitalWrite(5,HIGH);
    delay(20);
    digitalWrite(5,LOW);
    delay(40);
    
    digitalWrite(6,HIGH);
    delay(5);
    digitalWrite(6,LOW);
    delay(5);
    digitalWrite(6,HIGH);
    delay(30);
    digitalWrite(6,LOW);
    delay(40);
}
