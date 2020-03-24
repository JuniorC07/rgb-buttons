//--------     Outputs    --------
int redOutput = 4, greenOutput = 2, blueOutput = 3;

//--------     Inputs     --------
int redInput = 13, greenInput = 12, blueInput = 11;

//--------     Values     --------
int redValue = 0, greenValue = 0, blueValue = 0;

//--------     Auxiliaries --------
long long int time, beforeTime = 0;

int interval = 300;

void setup()
{
  time = millis();
  pinMode(redInput, INPUT);
  pinMode(greenInput, INPUT);
  pinMode(blueInput, INPUT);
  
  pinMode(redOutput, OUTPUT);
  pinMode(greenOutput, OUTPUT);
  pinMode(blueOutput, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  redValue = digitalRead(redInput);
  greenValue = digitalRead(greenInput);
  blueValue = digitalRead(blueInput);
  
  if(time > beforeTime + interval){
    if(redValue == 0)
      digitalWrite(redOutput, HIGH);
    else
      digitalWrite(redOutput, LOW);

    if(greenValue == 0)
      digitalWrite(greenOutput, HIGH);
    else
      digitalWrite(greenOutput, LOW);

    if(blueValue == 0)
      digitalWrite(blueOutput, HIGH);
    else
      digitalWrite(blueOutput, LOW);
  }
  
  time = millis();
}


