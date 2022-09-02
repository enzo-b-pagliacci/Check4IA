<h1 align="center">
    Checkpoint 4
</h1>
<h3 align="center"> 
	Integrantes:
</h3>
<h3 align="center"> 
	Enzo Bense Pagliacci - Rm87203 |
  Gustavo Lopes Carlin - Rm87339
</h3>

💻 Conteúdos
===================
<p align="center">
 <a href="#-sobre-o-projeto">Sobre o projeto</a> •
 <a href="#-tecnologias">Tecnologias</a> • 
<a href="#-contribuitors">Contribuidores</a>
</p>

### 💻 Sobre o projeto

<img alt="Arquitetura" height="390px" width="780px" title="Arquitetura" src="https://github.com/enzo-b-pagliacci/Check4IA/blob/main/midias/r2.png" />

Para atender aos requisitos, o sistema é capaz de coletar a identificação da TAG RFID com o Arduino (ARDUINO1) e envia utilizando formato JSON para um fluxo Node-Red que realiza duas funções: - publica em um tópico utilizando o protocolo MQTT ; - Notifica o usuário via telegram. Um segundo fluxo Node-Red subscreve o tópico e exibe o valor da TAG em um DASHBOARD. O sistema então se comunica com o arduino (ARDUINO2) no formato JSON para realizar o sistema de posição do servo motor, esta posição é controlado pelo DASHBOARD com um botão setando 180° e outro setando 0°.


### 📋 How to

#### Primeiro Passo:
Baixe o node-red no seu ambiente. Abra o CMD e digite: node-red. Isso fará o node-red subir num localhost, abra-o e dentro dele importe o arquivo "cp4.json", talvez alguns nós não apareçam, se isso acontecer baixe no "manage pallets", as seguintes libs: node-red-node-serialport; node-red-contrib-telegrambot; node-red-dashboard dashboard. Ele deve aparecer como na seguinte imagem: 

<img alt="Arquitetura" height="390px" width="690px" title="Arquitetura" src="https://github.com/enzo-b-pagliacci/Check4IA/blob/main/midias/flow1.PNG" />
<img alt="Arquitetura" height="390px" width="690px" title="Arquitetura" src="https://github.com/enzo-b-pagliacci/Check4IA/blob/main/midias/flow1-2.PNG" />

Obs: Os nós Serial In e Out devem estar conectados na mesma porta do Arduino. No nó de Telegram Sender deverá ser inserido o nome e o Token do bot criado através do telegram <a href="https://canaltech.com.br/apps/como-criar-um-bot-no-telegram-botfather/#:~:text=Digite%20o%20comando%20%E2%80%9C%2Fnewbot%E2%80%9D,%E2%80%9Cbot%E2%80%9D%2C%20sem%20espa%C3%A7os." target="_blank">bot father</a>. Nos nós de MQTT in e out deverá ser inserido o tópico desejado.

#### Segundo Passo:
Baixe o Arduino no seu ambiente. Enquanto instala monte seu arduino com conexão de Tag RFID e servo motor segundo a imagem: 

<img alt="Arquitetura" height="690px" width="390px" title="Arquitetura" src="https://github.com/enzo-b-pagliacci/Check4IA/blob/main/midias/rfid-arduino-img4-atual.png" />
<img alt="Arquitetura" height="390px" width="390px" title="Arquitetura" src="https://github.com/enzo-b-pagliacci/Check4IA/blob/main/midias/img01_como_usar_com_arduino_micro_servo_motor_sg90_9g_robo_mercatronica_carrinho_uno_mega_leonardo_nano.jpg" />

Obs: conectar o servo motor na porta 5 para ficar igual ao código.

#### Terceiro Passo:
Agora baixe o arquivo "cp4.ino", nele está contido o código para realizar as funções do arduino, abra-o na IDE. Após isso vá em Tools e depois em Manage Library, pesquise por MFRC522 e instale, depois por ArduinoJson e instale. Após essas duas bibliotecas instaladas vá em Tools -> Port -> e selecione a porta referente ao arduino. Agora é só apertar no botão de upload como na imagem abaixo: 

<img alt="Arquitetura" height="590px" width="490px" title="Arquitetura" src="https://github.com/enzo-b-pagliacci/Check4IA/blob/main/midias/upload.PNG" />

### 🛠 Tecnologias

As seguintes tecnologias foram usadas na construção do projeto:

- Node-Red
- Arduino (Tag RFID & Servo Motor)
- Json
- MQTT Broker
- Telegram Bot
- Ui Dashboard


## 👥 Contribuitors
<table>
	<tr>  
		<td align="center"><a href="https://github.com/enzo-b-pagliacci"><img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/u/80040708?v=4" width="100px;" alt=""/><br /><sub><b>enzo-b-pagliaci</b></sub></a><br /><a href="https://github.com/enzo-b-pagliacci" title="enzo-b-pagliaci">🚀💻</a></td>
    		<td align="center"><a href="https://github.com/Gustavo-Lopes-Carlin-fiap"><img style="border-radius: 50%;" src="https://github.com/JhoctanTeixeira/GlobalSolution/blob/main/img/Gustavo.png" width="100px;" alt=""/><br /><sub><b>Gustavo-Lopes-Carlin-fiap</b></sub></a><br /><a href="https://github.com/Gustavo-Lopes-Carlin-fiap" title="Gustavo">🚀💻</a></td>
	</tr>
</table>
