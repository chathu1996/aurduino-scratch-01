int v1=15;  
int v2=52;

void setup() {
  Serial.begin(9600);
 
}

void loop() {
v1++;
boolean b=v1>20;
if(b){
  Serial.println(v1);
  delay(500);
  }else{
    Serial.println("v1 is less than 21");
    }
  
}
