static int I[] = {0,0,0};
void setup()
{
    Serial.begin(9600);
    attachInterrupt(digitalPinToInterrupt(2),getI,RISING);
    pinMode(5,INPUT);
 
}
void getI()
{
    int i =0;
    delay(15);
    while(digitalRead(5)== HIGH)
    {
        i++;
        delay(10);
    }
    I[i]=analogRead(A0);
    delay(30);
    Serial.println(I[i]);
}
void loop()
{}
