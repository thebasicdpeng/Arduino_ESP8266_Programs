//This Program is to Control the Relay
int relayInput = 2; // the input to the relay pin
void setup() {

  pinMode(relayInput, OUTPUT); // initialize pin as OUTPUT

}
void loop() {

  digitalWrite(relayInput, HIGH); // turn relay on

  delay(1000);

  digitalWrite(relayInput, LOW); // turn relay off

  delay(1000);

}
