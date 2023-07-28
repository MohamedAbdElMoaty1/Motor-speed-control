int trig = 3 ;
int echo = 4 ;
int motor = 5 ;
int t = 0 ;
int d = 0 ;
int reading = 0 ;
void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(motor,OUTPUT);
}

void loop()
{

digitalWrite(trig, LOW);
delayMicroseconds(2); 
digitalWrite(trig, HIGH);
delayMicroseconds(10); 
digitalWrite(trig, LOW);
t = pulseIn(echo, HIGH);
d = (t) * 0.0343/2;
  
  if(d<200)
  {
  
    reading=map(d,0,200,255,0);
    analogWrite(motor,reading);
  }
   
  else
  {

     analogWrite(motor,0);
  }
  
 
  
}