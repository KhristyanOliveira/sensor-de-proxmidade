const int trigger=8; 
const int echo=7; 
float duracao;
float dist;

void setup(){
  Serial.begin(9600);
  pinMode(trigger,OUTPUT);
  pinMode(echo,INPUT);
}
void loop(){

  // Limpa o trigPin configurando-o como LOW: 
  digitalWrite(trigger,LOW);
  delayMicroseconds(5);  
  
  // Aciona o sensor definindo o trigPin alto por 10 microssegundos
  digitalWrite(trigger,HIGH);  
  delayMicroseconds(10);      
  digitalWrite(trigger,LOW); 
  // Leia o echoPin, pulseIn() 
  //retorna a duração (comprimento do pulso) em microssegundos:
  duracao=pulseIn(echo,HIGH);      
  
  dist = duracao *0.017; //ou colocar direto 0.017 ou duracao/58; 
  Serial.print ("Distancia = ");
  Serial.print (dist);         
  Serial.print (" cm\n");         
  //Serial.write (10);            
  delay (200);                
}                             