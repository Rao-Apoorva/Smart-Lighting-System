#define BULB  4  // pin for the RELAY
#define PIR 2   // input pin for Passive InfraRed sensor 

void setup()
{    
	Serial.begin(9600);   //This starts the serial communication 
	pinMode(BULB, OUTPUT); // declare lamp as output
	pinMode(PIR,INPUT); // declare sensor as input 
}

void loop() 
{
  	int ldr = analogRead(A0); //read Light Dependent Resistors value
  	int pir = digitalRead(PIR); // read input value
  	Serial.println(ldr);
  	Serial.println(pir);
 	if((500>ldr) || (pir==HIGH))
    {
       digitalWrite(BULB,1);  // Turn ON the light
       delay(60); // Wait for 60 microsecond
	}
	else 
    {
       digitalWrite(BULB,0); // Turn OFF the light
    }
 }