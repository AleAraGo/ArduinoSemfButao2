#define leds 4
#define butao 15
int roxinho[leds]= {2,0,16,5};
int rozinha[leds]= {19,21,22,23};

void setup() {
  for(int i=0;i<leds;i++){
    pinMode(roxinho[i], OUTPUT);
    pinMode(rozinha[i], OUTPUT);
  }
pinMode(butao, INPUT_PULLUP);
}

void loop() {
  
  while(digitalRead(butao) == HIGH){
    int i =0;
    while(i<leds){
      digitalWrite(roxinho[i], HIGH);
      digitalWrite(rozinha[leds -1-i],HIGH);
      delay(250);
      digitalWrite(roxinho[i], LOW);
      digitalWrite(rozinha[leds -1-i],LOW);
    i++;  
    }    
  }
  while(digitalRead(butao)==LOW){
     int i =0;
      while(i<leds){
      digitalWrite(roxinho[i],HIGH);
      digitalWrite(rozinha[i],HIGH);
      delay(250);
      digitalWrite(roxinho[i],LOW);
      digitalWrite(rozinha[i],LOW); 
      i++; 
    }
  }
}
