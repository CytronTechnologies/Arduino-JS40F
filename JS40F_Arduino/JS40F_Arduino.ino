/* This is example sketch for Arduino UNO compatible boards with 
 * JS40F: https://www.cytron.io/p-SN-JS-40F
 * It is a contactless obstacles digital output sensor for sumo robot, with 40cm sensing range and simple interface.
 */
 
int Sensor1 = 5; // Digital sensor connected to D5
int value;  // We define variable for storing sensor output.

void setup() {
pinMode(Sensor1, INPUT); // Sensor1 is declared as input
Serial.begin(9600); // Serial communication started with 9600 bits per second.
}

void loop() {
value = digitalRead(Sensor1); // Sensor is read digitally and reflected to value.
Serial.print("Sensor Output: "); //IT will write Sensor Output to Serial Monitor Screen.
Serial.println(value); // It will write value variable raw value (0 or 1)
delay(100); // We added 100ms Delay for more balanced readings.
}
