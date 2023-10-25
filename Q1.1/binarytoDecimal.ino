int switchinput[]={2,4,6,8};
int bin[4];
int decimal;

void setup(){
  for(int i=0;i<4;i++){
    pinMode(switchinput[i],INPUT);
  }

  Serial.begin(9600);
}

void loop(){
  for(int i=0;i<4;i++){
    bin[i]=digitalRead(switchinput[i]);
  }

  decimal=bin[3]*8+bin[2]*4+bin[1]*2+bin[0];

  Serial.println(decimal);  

  delay(500);
}




