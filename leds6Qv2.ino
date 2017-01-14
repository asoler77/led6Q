/****************************************
Example Sound Level Sketch for the
Adafruit Microphone Amplifier
****************************************/

#define T1 300
#define T2 5000
#define T3 400
#define T4 2000
#define LED1 5
#define LED2 9
#define LED3 1
#define LED4 2
#define LED5 3
#define LED6 7
#define LED7 11
#define LED8 6
#define LED9 13
#define LED10 12
#define LED11 4
#define LED12 8


void setup()
{
	pinMode(LED1, OUTPUT);
	digitalWrite(LED1, LOW);
	pinMode(LED2, OUTPUT);
	digitalWrite(LED2, LOW);
	pinMode(LED3, OUTPUT);
	digitalWrite(LED3, LOW);
	pinMode(LED4, OUTPUT);
	digitalWrite(LED4, LOW);
	pinMode(LED5, OUTPUT);
	digitalWrite(LED5, LOW);
	pinMode(LED6, OUTPUT);
	digitalWrite(LED6, LOW);
	pinMode(LED7, OUTPUT);
	digitalWrite(LED7, LOW);
	pinMode(LED8, OUTPUT);
	digitalWrite(LED8, LOW);
	pinMode(LED9, OUTPUT);
	digitalWrite(LED9, LOW);
	pinMode(LED10, OUTPUT);
	digitalWrite(LED10, LOW);
	pinMode(LED11, OUTPUT);
	digitalWrite(LED11, LOW);
	pinMode(LED12, OUTPUT);
	digitalWrite(LED12, LOW);
}

void loop()
{
	delay(T4);

	digitalWrite(LED1, HIGH);
	digitalWrite(LED2, HIGH);
	digitalWrite(LED3, HIGH);
	digitalWrite(LED4, HIGH);
	digitalWrite(LED5, HIGH);
	digitalWrite(LED6, HIGH);
	digitalWrite(LED7, HIGH);
	digitalWrite(LED8, HIGH);
	digitalWrite(LED9, HIGH);
	digitalWrite(LED10, HIGH);
	digitalWrite(LED11, HIGH);
	digitalWrite(LED12, HIGH);

	delay(T3);

	digitalWrite(LED1, LOW);
	digitalWrite(LED2, LOW);
	digitalWrite(LED3, LOW);
	digitalWrite(LED4, LOW);
	digitalWrite(LED5, LOW);
	digitalWrite(LED6, LOW);
	digitalWrite(LED7, LOW);
	digitalWrite(LED8, LOW);
	digitalWrite(LED9, LOW);
	digitalWrite(LED10, LOW);
	digitalWrite(LED11, LOW);
	digitalWrite(LED12, LOW);

	delay(T4);

	digitalWrite(LED1, HIGH);
	digitalWrite(LED2, HIGH);
	digitalWrite(LED3, HIGH);
	digitalWrite(LED4, HIGH);
	digitalWrite(LED5, HIGH);
	digitalWrite(LED6, HIGH);
	digitalWrite(LED7, HIGH);
	digitalWrite(LED8, HIGH);
	digitalWrite(LED9, HIGH);
	digitalWrite(LED10, HIGH);
	digitalWrite(LED11, HIGH);
	digitalWrite(LED12, HIGH);

	delay(T3);

	digitalWrite(LED1, LOW);
	digitalWrite(LED2, LOW);
	digitalWrite(LED3, LOW);
	digitalWrite(LED4, LOW);
	digitalWrite(LED5, LOW);
	digitalWrite(LED6, LOW);
	digitalWrite(LED7, LOW);
	digitalWrite(LED8, LOW);
	digitalWrite(LED9, LOW);
	digitalWrite(LED10, LOW);
	digitalWrite(LED11, LOW);
	digitalWrite(LED12, LOW);

	delay(T4);

	digitalWrite(LED1, HIGH);
	digitalWrite(LED2, HIGH);
	digitalWrite(LED3, HIGH);
	digitalWrite(LED4, HIGH);
	digitalWrite(LED5, HIGH);
	digitalWrite(LED6, HIGH);
	digitalWrite(LED7, HIGH);
	digitalWrite(LED8, HIGH);
	digitalWrite(LED9, HIGH);
	digitalWrite(LED10, HIGH);
	digitalWrite(LED11, HIGH);
	digitalWrite(LED12, HIGH);

	delay(T3);

	digitalWrite(LED1, LOW);
	digitalWrite(LED2, LOW);
	digitalWrite(LED3, LOW);
	digitalWrite(LED4, LOW);
	digitalWrite(LED5, LOW);
	digitalWrite(LED6, LOW);
	digitalWrite(LED7, LOW);
	digitalWrite(LED8, LOW);
	digitalWrite(LED9, LOW);
	digitalWrite(LED10, LOW);
	digitalWrite(LED11, LOW);
	digitalWrite(LED12, LOW);

	delay(T4);

	digitalWrite(LED12, HIGH);
	delay(T1);
	digitalWrite(LED11, HIGH);
	delay(T1);
	digitalWrite(LED10, HIGH);
	delay(T1);
	digitalWrite(LED9, HIGH);
	delay(T1);
	digitalWrite(LED8, HIGH);
	delay(T1);
	digitalWrite(LED7, HIGH);
	delay(T1);
	digitalWrite(LED6, HIGH);
	delay(T1);
	digitalWrite(LED5, HIGH);
	delay(T1);
	digitalWrite(LED4, HIGH);
	delay(T1);
	digitalWrite(LED3, HIGH);
	delay(T1);
	digitalWrite(LED2, HIGH);
	delay(T1);
	digitalWrite(LED1, HIGH);
	delay(T2);
	digitalWrite(LED1, LOW);
	digitalWrite(LED2, LOW);
	digitalWrite(LED3, LOW);
	digitalWrite(LED4, LOW);
	digitalWrite(LED5, LOW);
	digitalWrite(LED6, LOW);
	digitalWrite(LED7, LOW);
	digitalWrite(LED8, LOW);
	digitalWrite(LED9, LOW);
	digitalWrite(LED10, LOW);
	digitalWrite(LED11, LOW);
	digitalWrite(LED12, LOW);
	delay(T2);
}
