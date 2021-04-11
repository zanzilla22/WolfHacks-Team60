//Let it be, i've got another plan
int enA = 5;
int in1 = 8;
int in2 = 9;
float temp;
float roomTemp = 20;

void open(int x)
{

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(enA, 00);
  delay(x);
  digitalWrite(in1, LOW);
}

void setup()
{
  pinMode (enA, OUTPUT);
  pinMode (in1, OUTPUT);
  pinMode (in2, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  open(100);
  while(temp < roomTemp - 100)
  {
    open(100)
    delay(1000);
  }
}
