//Inclui as bibliotecas do SPI e do RC522
#include <SPI.h>
#include <MFRC522.h>

//Definição dos pinos de conexão do projeto 
#define PINO_SS 10
#define PINO_RST 9
#include <Servo.h>  //importa a biblioteca do servo motor


//Cria o item para configurar o módulo RC522
MFRC522 mfrc522(PINO_SS, PINO_RST);

#include <ArduinoJson.h>
const int TAMANHO = 50;  //define o tamanho do buffer para o json

Servo myservo1;      // cria o objeto meuservo

void setup() 
{
  // Inicializa a serial
  Serial.begin(9600);
  // Inicializa a comunicação SPI
  SPI.begin();
  // Inicializa o módulo MFRC522
  mfrc522.PCD_Init(); 

  myservo1.attach(5);  // configura o pino 5 do arduino para o servo motor
  

}

void loop() 
{
  StaticJsonDocument<TAMANHO> json; //Aloca buffer para objeto json
  // Aguarda a aproximação do token
  if (!mfrc522.PICC_IsNewCardPresent()) return;
  // Seleciona qual token vai ser utilizado 
  if (!mfrc522.PICC_ReadCardSerial()) return;
  

  //Cria uma variável vazia, do tipo string
  String conteudo= "";

  //Cria uma variável do tipo byte
  byte letra;
  
  for (byte i = 0; i < mfrc522.uid.size; i++) 
  {   

     if(mfrc522.uid.uidByte[i] < 0x10){
        conteudo.concat(String(" 0"));
     }
     else{
        conteudo.concat(String(" "));
     }
     // Concatena a string convertida em hexadecimal
     conteudo.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  //formato de escrita do json
  json["tag"] = conteudo;

  serializeJson(json, Serial);
  Serial.println();
  
  Serial.println();

  if (Serial.available() > 0) {
    //Lê o JSON disponível na porta serial:
    StaticJsonDocument<TAMANHO> json;
    deserializeJson(json, Serial);
    if(json.containsKey("motor")) {
      int valor = json["motor"];
      myservo1.write(valor);
    }
  } 
  
  delay(1000);
}
