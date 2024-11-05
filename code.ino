// C++ code
//
#include<Servo.h>

int BUTTON_PIN = 12;
int LED_PIN = 13;
Servo s1 ;
Servo s2 ;
Servo s3 ;
Servo s4 ;
Servo s5 ;
Servo s6 ;

void setup()
{
  	pinMode(BUTTON_PIN, INPUT);
  	pinMode(LED_PIN, OUTPUT);
	s1.attach(3); 
	s2.attach(5);
	s3.attach(6);
	s4.attach(11);
	s5.attach(10);
	s6.attach(9);
	randomSeed(analogRead(A0));
	Serial.begin(9600);
}

void loop()
{  
  	int s1_status=0;
	int s2_status=0;
	int s3_status=0;
	int s4_status=0;
	int s5_status=0;
	int s6_status=0;
	long randomNumber;
	int loopEnd  ;
	if(digitalRead(BUTTON_PIN)==1){
		delay(1000);
		if(digitalRead(BUTTON_PIN)==1){
       			digitalWrite(LED_PIN, HIGH);
  				delay(600);
  				digitalWrite(LED_PIN, LOW);
  				delay(600);
      			digitalWrite(LED_PIN, HIGH);
  				delay(600);
          		digitalWrite(LED_PIN, LOW);
  				delay(600);
      			digitalWrite(LED_PIN, HIGH);
  				delay(600);
          		digitalWrite(LED_PIN, LOW);
  				delay(600);
      			digitalWrite(LED_PIN, HIGH);
  				delay(600);
          		
			while (false != loopEnd){
				randomNumber=random(1,7);
              	//digitalWrite(LED_PIN, HIGH);
				if(randomNumber == 1){
					s1.write(180);
					s1_status = 1;
					delay(1000);
				}//randomNumber == 1
				else if(randomNumber == 2){
					s2.write(180);
					s2_status = 1;
					delay(1000);
				}//randomNumber == 2
				else if(randomNumber == 3){
					s3.write(180);
					s3_status = 1;
					delay(1000);
				}//randomNumber == 3
				else if(randomNumber == 4){
					s4.write(180);
					s4_status = 1;
					delay(1000);
				}//randomNumber == 4
				else if(randomNumber == 5){
					s5.write(180);
					s5_status = 1;
					delay(1000);
				}//randomNumber == 5
				else if(randomNumber == 6){
					s6.write(180);
					s6_status = 1;
					delay(1000);
				}//randomNumber == 6
				if((s1_status == 1)&&(s2_status == 1)&&(s3_status == 1)&&(s4_status == 1)&&(s5_status == 1)&&(s6_status == 1)){
					loopEnd=false;
                  	digitalWrite(LED_PIN, LOW);
				}
			}
		}
    delay(1000);
	s1.write(90);
	delay(1000);
	s2.write(90);
	delay(1000);
	s3.write(90);
	delay(1000);
	s4.write(90);
	delay(1000);
	s5.write(90);
	delay(1000);
	s6.write(90);
    digitalWrite(LED_PIN, HIGH);
  	delay(600);
  	digitalWrite(LED_PIN, LOW);
    delay(600);
	}
 
}
