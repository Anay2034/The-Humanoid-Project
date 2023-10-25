int switchinput[]={2,4,6,8};
int bin[4];
int decimal;
bool prime=0;
int ledPin=12;

void setup(){
  for(int i=0;i<4;i++){
    pinMode(switchinput[i],INPUT);
  }
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
 
}

void loop(){
  for(int i=0;i<4;i++){
    bin[i]=digitalRead(switchinput[i]);
  }

  decimal=bin[3]*8+bin[2]*4+bin[1]*2+bin[0];

  int k=0;
  for(int i=2;i<decimal/2;i++){
     if(decimal % i ==0){
      k++;
      break;
     }
  }
  if(k>0){
    prime =0;
  }
  else{prime=1;}
  
  if(decimal == 0 || decimal == 1){
  prime =0;
  }
digitalWrite(ledPin, prime);
   Serial.println(bin[0]);
  delay(100); 
}