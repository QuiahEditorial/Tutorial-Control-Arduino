String comando;
int a;
byte puerto = 3;

void setup()
{
Serial.begin(9600);
Serial.println("Ingresa 'Run' + Enter");
}

void loop()
{
if(Serial.available() > 0 )
  {
  comando = Serial.readStringUntil('\n');
  comando.trim();
  if ( comando.equals ("Run"   ) ) play();
  }
delay(200);
}

void play()
{
for (int i=0; i<=10; i++)
  {
  digitalWrite(puerto, HIGH);
  delay(1000);
  digitalWrite(puerto, LOW);
  delay(1000);
  }
}
