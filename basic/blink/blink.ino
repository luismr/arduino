/*
 * File ........: blink.c
 * Description .: able arduino board blink embedded led with a different approach
 *                to make a clean code
 * Hardware ....: Arduino Uno r3
 * Author ......: Luis Machado Reis <luis.reis@singularideas.com.br>
 * Date ........: 27 abr 2013
 * URL .........: http://github.com/luismr
 */

/* Constants */
static int LED = 13;             // PIN associated to LED
static int DEFAULT_DELAY = 100;  // Default Delay in Msecs  

/* Standard method to configure environment when is turned on or reseted */
void setup() {                
  pinMode(LED, OUTPUT);         // tell to Arduino that pin LED is to OUTPUT
}

/* Standard method to run such as Java's public static void main */
void loop() {
  turnLedOn();                 // Turn led on with DEFAULT_DELAY
  turnLedOff();                // Turn led off with DEFAULT_DELAY
}

/* Method to turn on led with standard delay */
void turnLedOn() {
  turnLedOn(DEFAULT_DELAY);
}

/* 
 * Method to turn on led with a delay
 * Args:
 *   int delayInMsecs - delay in Msecs
 */
void turnLedOn(int delayInMsecs) {
  sendLedAction(delayInMsecs, HIGH);
}

/* Method to turn off led with standard delay */
void turnLedOff() {
  turnLedOff(DEFAULT_DELAY);
}

/* 
 * Method to turn off led with a delay
 * Args:
 *   int delayInMsecs - delay in Msecs
 */
void turnLedOff(int delayInMsecs) {
  sendLedAction(delayInMsecs, LOW);
}

/* 
 * Method to send a specific command to LED
 * Args:
 *   int delayInMsecs - delay in Msecs
 *   int density - should be LOW or HIGH
 */
void sendLedAction(int delayInMsecs, int density) {
  digitalWrite(LED, density);      // here you write on LED port 
  delay(delayInMsecs);             // here you force a delay
}
