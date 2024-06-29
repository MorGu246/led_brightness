#define BlueLed 3
void setup() {
  // put your setup code here, to run once:
pinMode(BlueLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(BlueLed,64);//3,5,6,9,10,11 הפינים עליהם עובד אנאלוג:
}
