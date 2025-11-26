int led1 = 13, led2 = 12, led3 = 11, led4 = 10; 
void setup() 
{ 
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
} 
  
void loop() 
{ 
   for(int led=13;led>10;led--){
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
   }
   for(int led=11;led<12;led++){
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    delay(1000);
   }
}
