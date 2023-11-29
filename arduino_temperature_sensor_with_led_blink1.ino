void setup()
{
  pinMode(A0,INPUT);// The LM35 connected to pin A0 in Arduino.
  pinMode(13, OUTPUT);//LED connected to the pin 13.
  Serial.begin(9600);//Boudrate(speed of data transmission)
}

void loop()
{
  int sensorValue = analogRead(A0);
  double tempCelsius = sensorValue * (4.88/10) - 50; 
Serial.println(tempCelsius);
  
  if(tempCelsius<30){                      //If the temperature is less then 30 degrees celsius
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(13, HIGH);
  delay(250); // Wait for 250 millisecond(s)
  // turn the LED off by making the voltage LOW
  digitalWrite(13, LOW);
  delay(250); 
  }
  else if(tempCelsius>30){                       //If the temperature is more than 30 degrees celsuis
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);// Wait for 500 millisecond(s)
  }
}
