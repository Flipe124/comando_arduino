// SELECIONANDO AS PORTAS DIGITAIS.
byte portaLed[] = {2,4,6,8,10,12}; 
// VARIÁVEL QUE IDENTIFICA QUAL LED DEVE SER LIGADO/DESLIGADO.
int i;
  
void setup(){
// CONFIGURA A PORTA ESPECIFICA.  
  pinMode(portaLed[i], OUTPUT);
}
void loop(){
  
// PARA INTERCALAR ENTRE A SEQUENCIA DIREITA PARA ESQUERDA
// E, ESQUERA PARA A DIREIRA.
// HIGH = LED LIGADO.
// LOW = LED DESLIGADO.  
  for(int d=0; d<=1; d++){
    if(d==0){
      for( i=2; i<=12; i+=2){// DIREITA ESQUERDA.
        digitalWrite(i, HIGH);
        delay(130);
        digitalWrite(i, LOW);
      }
    }
    else{
      for(i=12; i>=2; i-=2){// ESQUERDA DIREITA.
        digitalWrite(i, HIGH);
        delay(130);
        digitalWrite(i, LOW);
      }
    }
  }  
}