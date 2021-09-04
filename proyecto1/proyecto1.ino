int lento = 100;
int rapido = 255; 
int valor;
int vel=255;
String test="";
void setup() {
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(9,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(3,OUTPUT);
//leds
pinMode(7,OUTPUT);
pinMode(4,OUTPUT);
pinMode(2,OUTPUT);
Serial.begin(9600);
}
void loop() {
  
  while (Serial.available()){
    delay(10);
    char c = Serial.read();
    test=c;
 }

 if(test.length()>0){
    if (test=="1"){
    adelante(rapido);
  }else if (test=="2"){
    atras(lento);
  }else if (test=="3"){
    izq(rapido);
  }else if (test=="4"){
    der(lento);
  }else if (test=="5"){
    parar();
  }else if (test=="6"){
    
  }else if (test=="7"){
    
  }
  /*adelante(rapido);
delay(2000);
atras(lento);
delay(2000);
parar();
delay(1000);
der(lento);
delay(1000);
izq(rapido);
delay(1000);*/
 }

test="";
}
int adelante(int n){
  
analogWrite(11, n);
digitalWrite(10, LOW);
analogWrite(9, n);
digitalWrite(6, LOW);
analogWrite(5, n);
digitalWrite(3, LOW);
//leds
digitalWrite(7, LOW);
digitalWrite(4, LOW);
digitalWrite(2, LOW);
}
int atras(int n){
  digitalWrite(11, LOW);
analogWrite(10, n);
digitalWrite(9, LOW);
analogWrite(6, n);
digitalWrite(5, LOW);
analogWrite(3, n);
//leds
digitalWrite(7, LOW);
digitalWrite(4, LOW);
digitalWrite(2, LOW);
  }
  void parar(){
digitalWrite(11, LOW);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(3, LOW);
//leds
digitalWrite(7, HIGH);
digitalWrite(4, LOW);
digitalWrite(2, LOW);
  }
  int der(int n){
analogWrite(11, n);
digitalWrite(10, LOW);
digitalWrite(9, LOW);
digitalWrite(6, LOW);
analogWrite(5, n);
digitalWrite(3, LOW);
//leds
digitalWrite(7, LOW);
digitalWrite(4, HIGH);
digitalWrite(2, LOW);
    
    }
    int izq(int n){
digitalWrite(11, LOW);
digitalWrite(10, LOW);
analogWrite(9, n);
digitalWrite(6, LOW);
analogWrite(5, n);
digitalWrite(3, LOW);
//leds
digitalWrite(7, LOW);
digitalWrite(4, LOW);
digitalWrite(2, HIGH);
    
    }
