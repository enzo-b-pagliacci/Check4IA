<h1 align="center">
    Checkpoint 4
</h1>
<h3 align="center"> 
	Integrantes:
</h3>
<h3 align="center"> 
	Enzo Bense Pagliacci - Rm87203
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

<img alt="Arquitetura" height="390px" width="390px" title="Arquitetura" src="https://github.com/enzo-b-pagliacci/Check4IA/blob/main/midias/r2.png" />

Para atender aos requisitos, o sistema é capaz de coletar a identificação da TAG RFID com o Arduino (ARDUINO1) e envia utilizando formato JSON para um fluxo Node-Red que realiza duas funções: - publica em um tópico utilizando o protocolo MQTT ; - Notifica o usuário via telegram. Um segundo fluxo Node-Red subscreve o tópico e exibe o valor da TAG em um DASHBOARD. O sistema então se comunica com o arduino (ARDUINO2) no formato JSON para realizar o sistema de posição do servo motor, esta posição é controlado pelo DASHBOARD com um botão setando 180° e outro setando 0°.



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
