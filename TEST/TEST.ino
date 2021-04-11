int enA = 5;
int in1 = 8;
int in2 = 9;
int enB = 6;
int in3 = 12;
int in4 = 13;
int led = 2;
int pushButton2 = 10;
int buttonState2 = 0;
float temp;
int pushButton = 23;
int buttonState = 0;
float roomTemp = 20;

void closeDome(int z)
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(enA, 180);
  delay(z);
  digitalWrite(in2, LOW);
}

void openDome(int x)
{

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 180);
  delay(x);
  digitalWrite(in1, LOW);
}

void airMaint()
{
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(enB, 200);
  
}

void setup()
{
  pinMode (enA, OUTPUT);
  pinMode (in1, OUTPUT);
  pinMode (in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(led, OUTPUT);
  pinMode(pushButton, INPUT);
  pinMode(pushButton2,INPUT);
  Serial.begin(9600);
}
void loop()
{
  

  temp = analogRead(1) * 5 * 100/1024;
  
  if(temp>10);
  {
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
    digitalWrite(led, HIGH);  
  }

  
  if (buttonState == 1)
  {
    openDome(50);
  }
  else{}

  if(buttonState2 == 1)
  {
    closeDome(50);
  }

  if (temp>= 30)
  {
    airMaint();
  }


  
  buttonState = digitalRead(pushButton);
  buttonState2 = digitalRead(pushButton2);
  Serial.println(buttonState);
  Serial.println(buttonState2);
  Serial.println(temp);
  delay(200);
}
