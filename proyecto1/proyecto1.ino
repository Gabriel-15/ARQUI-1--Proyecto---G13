  const int b1=3;
const int b2=4;
const int derecha =5; int pwm1;
const int izquierda =6; int pwm2;

int boton1;
int boton2;
int potenciometro;
void setup() {
  // put your setup code here, to run once:
pinMode(derecha,OUTPUT);
pinMode(izquierda,OUTPUT);
pinMode(boton1,INPUT);
pinMode(boton2,INPUT);
pinMode(13,OUTPUT);

digitalWrite(derecha,LOW);
digitalWrite(izquierda,LOW);
}

void loop() {
 
 int valPotenciometro;
 
 boton1=digitalRead(b1);
 boton2=digitalRead(b2);

 if(boton1==HIGH){
  valPotenciometro=analogRead(potenciometro);
  pwm1=map(valPotenciometro,0,1023,0,255);
  digitalWrite(13,LOW);
  analogWrite(derecha,pwm1);
  Serial.println(valPotenciometro);
  Serial.println("derecha");
   
  }
  else{
    valPotenciometro=analogRead(potenciometro);
    pwm1 = map(valPotenciometro,0,0,0,0);
digitalWrite(13,HIGH);
    analogWrite(derecha,pwm1);
        
    }
  if(boton2==HIGH){
    valPotenciometro=analogRead(potenciometro);
    pwm2=map(valPotenciometro,0,1023,0,255);
    digitalWrite(13,LOW);
    analogWrite(izquierda,pwm2);
    Serial.println(valPotenciometro);
    Serial.println("izquierda");
    
    }  
    else{
      valPotenciometro=analogRead(potenciometro);
      pwm2=map(valPotenciometro,0,0,0,0);
      digitalWrite(13,HIGH);
      analogWrite(izquierda,pwm2);
      
      }
  

}
