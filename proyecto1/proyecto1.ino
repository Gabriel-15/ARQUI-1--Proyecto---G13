int lento = 100;
int rapido = 255; 
int valor;
void setup() {
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

}
void loop() {
adelante(rapido);
delay(2000);
atras(lento);
delay(2000);
parar();
delay(1000);
der(lento);
delay(1000);
izq(rapido);
delay(1000);
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
