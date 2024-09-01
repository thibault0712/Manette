#IMPORTANT
Ce projet est la v1 de la télécommande connecté désormais ce projet s'appelle revego et plusieurs repo sont disponibles sur mon github plus stable et avec un code plus jolie et "logique"

# Manette
Ce projet est une manette permettant de communiquer sans fil avec une autre carte programmable avec le module nrf24l01 dessus

## ⚙️ Fonctionnalités
- Un pannel web permettant de configurer la télécommande
- Un écran Oled montrant les informations importantes à l'utilisateur
- Une communication sans fil
- Fonctionne sur batterie
- Economisateur de batterie
- Bloquer la télécommande
- Selection du canal de transmission
- Changer de mot de passe de connexion
- Configuration de l'affichage
- Possibilité de rentrer le poids du véhicule pour calculer la vitesse

## 🔌 Branchement
| Composant          | ESP32           | 
|--------------------|-----------------|
| Écran OLED I2C     | SDA - GPIO 21   |
|                    | SCL - GPIO 22   |
| Potentiomètre (A6) | Signal - GPIO 34|
|                    | VCC - 3.3V      |
|                    | GND - GND       |
| Capteur NRF24L01   | MOSI - GPIO 23  |
|                    | MISO - GPIO 19  |
|                    | SCK - GPIO 18   |
|                    | CE - GPIO 4     |
|                    | CSN - GPIO 5    |

## 🌐 Pannel web
### Comment y accéder ?
1- Se connecter au réseau wifi `manette` avec comme mot de passe `test1234`

2- Rentrer dans votre navigateur internet et accéder à l'url suivante : http://192.168.4.1

### Comment modifier le pannel web ?
Tout le code du pannel web est contenu dans le dossier data. Nous utilisons une librairie css (ws3css) pour le pannel. Pour faire communiquer le pannel web et le reste du programme, nous utilisons javaScript pour faire un système de requête http en asynchrone

### Comment sont enregistrés les données dans l'ESP32 ?
Pour enregistrés des données dans l'ESP32, nous utilisons le spiffs de celui-ci. Malheureusement le spiffs a une durée de vie d'eniron 100 000 écriture c'est pour cela que nous limitons au maximum le nombre de fichier dans le dossier data contenant tout ce qui va être envoyé dans le spiffs de la carte programmable

## 📷 Photo
|       Index        | Settings      | 
|--------------------|-----------------|
| ![Logo](https://i.imgur.com/7GDHCyP_d.webp?maxwidth=760&fidelity=grand) | ![logo](https://i.imgur.com/79rw7su.png)

## 🤔 Problèmes possibles 
### Utilisons de platformIo
Il est fort probable que l'utilisation du logiciel arduinoIDE ne puisse fonctionner car tout le code a été rédigé sur platformIo plus d'informations sur https://platformio.org/
