const int InA1 = 9; //Counter_ClockWise Input For the first Set of wheels(Right Side)
const int InA2 = 4; //Counter-Clockwise input for the second set of wheels(Left Side)  
const int InB1 = 3; //Clockwise input for the first set of wheels(Right Side)RED
const int InB2 = 8; //Clockwise input for the Second Set of Wheels(Left Side)WHITE
const int PWM1 = 5; // Speed Input for the first set of wheels(Right Side)
const int PWM2 = 6; // Speed Input for the Second Set Of Wheels(Left Side)

int Trigpin =11 ;
int Echopin = 10;

const int Trigpin1 = 2;
const int Echopin1 = 12;
// Move Forward
int move_forward()// Funtion to drive the Rover Forward
{
  digitalWrite(InA1, HIGH);
  digitalWrite(InA2, HIGH);
  digitalWrite(InB1, LOW);
  digitalWrite(InB2, LOW);
  analogWrite(PWM1, 100);//EFT SIDE//100
  analogWrite(PWM2, 100); //RIGHT SIDE
}
//Move forward slower than <Move Forwar>
void approach_forward()
{
 digitalWrite(InA1, HIGH);
  digitalWrite(InA2, HIGH);
  digitalWrite(InB1, LOW);
  digitalWrite(InB2, LOW);
  analogWrite(PWM1, 60);//EFT SIDE//100
  analogWrite(PWM2, 60); //RIGHT SIDE
}
//Move Forward Faster than <Move Forward>
int gravity_forward()// Funtion to drive the Rover Forward
{
  digitalWrite(InA1, HIGH);
  digitalWrite(InA2, HIGH);
  digitalWrite(InB1, LOW);
  digitalWrite(InB2, LOW);
  analogWrite(PWM1, 180); //LEFT SIDE//120
  analogWrite(PWM2, 180); //RIGHT SIDE
}


// Move in Reverse
int reverse()//Reverse at normal speed
{
  digitalWrite(InA1, LOW);
  digitalWrite(InA2, LOW );
  digitalWrite(InB1, HIGH);
  digitalWrite(InB2, HIGH);
  analogWrite(PWM1, 100); //Set Speed for the RIGHT Side
  analogWrite(PWM2, 100); //Set Speed for the LEFT Side
}
//slow Reverse
int slow_reverse()
{
  digitalWrite(InA1, HIGH);
  digitalWrite(InA2, HIGH);
  digitalWrite(InB1, LOW);
  digitalWrite(InB2, LOW);
  analogWrite(PWM1, 500);//Set Speed for the RIGHT Side
  analogWrite(PWM2, 500);//Set Speed for the LEFT Side
}

//Brake
int brake()
{
  digitalWrite(InA1, LOW);
  digitalWrite(InA2, LOW);
  digitalWrite(InB1, LOW);
  digitalWrite(InB2, LOW);
  analogWrite(PWM1, 0);//Set Speed for the RIGHT Side
  analogWrite(PWM2, 0);//Set Speed for the LEFT Side
}


//Turn LEFT
void turn_left()
{
  digitalWrite(InA1, HIGH);
  digitalWrite(InA2, LOW); //Move the Left side Forward
  digitalWrite(InB1, LOW); //MOve the RIGHT Side in Reverse
  digitalWrite(InB2, HIGH);
  analogWrite(PWM1, 185);//Set Speed for the RIGHT Side
  analogWrite(PWM2, 185);//Set Speed for the LEFT Side
}

void slowturn_left()
{
  digitalWrite(InA1, HIGH);
  digitalWrite(InA2, LOW); //Move the Left side Forward
  digitalWrite(InB1, LOW); //MOve the RIGHT Side in Reverse
  digitalWrite(InB2, HIGH);
  analogWrite(PWM1, 120);//Set Speed for the RIGHT Side
  analogWrite(PWM2, 120);//Set Speed for the LEFT Side
}



void reverse_slowleft()
{
  digitalWrite(InA1, HIGH);
  digitalWrite(InA2, LOW); //Move the Left side Forward
  ///digitalWrite(InB1, LOW); //MOve the RIGHT Side in Reverse
  digitalWrite(InB2, HIGH);
  //analogWrite(PWM1, 180);//Set Speed for the RIGHT Side 180
   analogWrite(PWM2, 180); //Set Speed for the LEFT Side
}


//Turn RIGHT
void turn_right()
{
  digitalWrite(InA1, LOW);
  digitalWrite(InA2, HIGH); //Move the Right side Forward
  digitalWrite(InB1, HIGH); //Move thee Left Side In Reverse
  digitalWrite(InB2, LOW);
  analogWrite(PWM1, 225); //Set Speed for the RIGHT Side
  analogWrite(PWM2, 225);//Set Speed for the LEFT Side
}
void slowturn_right()
{
  digitalWrite(InA1, LOW);
  digitalWrite(InA2, HIGH); //Move the Right side Forward
  digitalWrite(InB1, HIGH); //Move thee Left Side In Reverse
  digitalWrite(InB2, LOW);
  analogWrite(PWM1, 225); //Set Speed for the RIGHT Side
  analogWrite(PWM2, 150);//Set Speed for the LEFT Side
}

float get_range() // get values from the front sonar
{
  digitalWrite(Trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(Trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigpin, LOW);
 int cm = pulseIn(Echopin, HIGH)/58;
float  dist = cm;
  Serial.println(cm);  
  return (dist);
}

float stop_dist()// get distance from the side sonar
{
  digitalWrite(Trigpin1, LOW);
  delayMicroseconds(2);
  digitalWrite(Trigpin1, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigpin1, LOW);
  int cm = pulseIn(Echopin1, HIGH) / 58;
 float sdist = cm;
  Serial.println(cm);
  return (sdist);
}

void setup()
{
  pinMode(InA1, OUTPUT);
  pinMode(InA2, OUTPUT);
  pinMode(InB1, OUTPUT);
  pinMode(InB2, OUTPUT);
  pinMode(PWM1, OUTPUT);
  pinMode(PWM2, OUTPUT);
  pinMode(Echopin, INPUT);
  pinMode(Trigpin, OUTPUT);
}

void loop()
{
}


