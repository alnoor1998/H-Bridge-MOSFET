int button1 =0;
int button2 =0;
void setup()
{
//For the pushbuttons 
  pinMode(3,INPUT);
  pinMode(4,INPUT);
//For the transistors 
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  button1 = digitalRead(4);
  button2 = digitalRead(3);
  //For clockwise movement 
  if ( button1 == HIGH )
  {
    digitalWrite ( 5 , HIGH);
    digitalWrite ( 6 , LOW);
    digitalWrite ( 7 , HIGH);
    digitalWrite ( 8 , LOW);
  }
  //For counterclockwise movement 
  if ( button2 == HIGH )
  {
    digitalWrite ( 5 , LOW);
    digitalWrite ( 6 , HIGH);
    digitalWrite ( 7 , LOW);
    digitalWrite ( 8 , HIGH);
  }
  //Otherwise, motor will stop
  else 
  {
    digitalWrite ( 5 , LOW);
    digitalWrite ( 6 , LOW);
    digitalWrite ( 7 , LOW);
    digitalWrite ( 8 , LOW);
  }
}
    