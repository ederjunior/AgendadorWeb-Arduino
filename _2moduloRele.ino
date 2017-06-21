void setup(){
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);
}

int leitura;

void loop(){
  if(Serial.available()){
     leitura = Serial.read();
     
     if(leitura == 49){       
       digitalWrite(6,HIGH);
      }
     if(leitura == 50){       
       digitalWrite(6,LOW);
      } 
    if(leitura == 51){       
       digitalWrite(7,HIGH);
      }
     if(leitura == 52){       
       digitalWrite(7,LOW);
      } 
     if(leitura == 53){       
       digitalWrite(8,HIGH);
      }
     if(leitura == 54){       
       digitalWrite(8,LOW);
      } 
     if(leitura == 55){       
       digitalWrite(9,HIGH);
      }
     if(leitura == 56){       
       digitalWrite(9,LOW);
      }  
     }
     
   }
