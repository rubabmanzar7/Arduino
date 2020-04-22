#define RED_PIN 8
#define YELLOW_PIN 10
#define GREEN_PIN 12

int red_on = 3000;
int red_yellow_on = 1000;
int green_on = 3000;
int green_blink = 500;
int yellow_on = 1000;

void setup() {
 
// ports to which the LEDs are connected - outputs
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);

}

void loop() {
  // turn on the voltage at the RED_PIN output (red connected there)
  digitalWrite(RED_PIN, HIGH);

  // wait while red is on
  delay(red_on);
  
// turn on the voltage at the YELLOW_PIN output (yellow)
  digitalWrite(YELLOW_PIN, HIGH);
  delay(red_yellow_on);
  
 
// turn off RED_PIN and YELLOW_PIN, turn on GREEN_PIN (green)
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, HIGH);
  delay(green_on);
  digitalWrite(GREEN_PIN, LOW);
  
  
// turn green on and off three times with a loop
  // which has a counter i, which changes according to the specified rule: at each iteration it increases by 1
  // the loop will be executed until the specified condition is true (here: i <3)
  for(int i = 0; i < 3; i = i+1)
  {
    delay(green_blink);
    digitalWrite(GREEN_PIN, HIGH);
    delay(green_blink);
    digitalWrite(GREEN_PIN, LOW);
  }
    //yellow alone
    digitalWrite(YELLOW_PIN, HIGH);
    delay(yellow_on);
    digitalWrite(YELLOW_PIN, LOW); 
 
}
