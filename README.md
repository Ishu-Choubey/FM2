<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
<!-- PROJECT LOGO -->
<br />
<p align="center">
  <a href="https://github.com/Ishu-Choubey/FM2/blob/main/FM2.0%20logo.png" alt="Logo" width="355.630965006" height="160">
 <h2 align="center">FM2.0</h2><br>
## 📄 Abstract
India is mostly an agricultural nation. Agriculture is the primary source of income for the majority of Indian families. Agriculture accounts for around 16% of the overall GDP and 10% of total exports in India. Profitability in production farming is dependent on making the proper and timely operational choice based on current conditions and previous records. Controlling and monitoring machines remotely has become an interesting subject of study for all researchers in recent years.
The problems faced by Indian farmers inspired the idea of this project. It turns out that the grain fields are usually far from the farmer's home. Farmers have to travel long distances to reach their fields. Irrigation is an important part of agriculture. As you know, this has to be done every day, so farmers have to visit their fields every day to turn on the irrigation system and water their crops, regardless of the distance between them. This daily trip to the grain fields has some drawbacks. It wastes time, money, and most of all energy. Irrigation may be omitted due to the carelessness of farmers. For this reason we came up with an automated irrigation system which is a computerized method of watering the farm that saves labor and time over manual watering, hence we chose to work online rather than travelling. In this article, we have come up with an automated irrigation system using a NodeMCU, ESP8266 Wifi module, servo motors, and an Arduino IDE. The irrigation can be monitored and handled via an Android application which will be installed on the smartphones of the farmers. The data pertaining to the crop irrigation will be stored and fetched from Google Firebase Cloud Service.


## 🗒️Introduction
               

Agriculture is an important source of income for most Indians and has a significant impact on the country's economy. Irrigation becomes difficult in dry areas and areas with little rainfall. Maintaining agricultural production, ensuring food security, and boosting economic growth in the face of climate variability, a shrinking labour force, and changing soil conditions along with fluctuation in electricity in rural India need agricultural innovation. Agriculture in India accounts for 18% of the country's GDP and employs more than 50% of the workforce. This has been confirmed by the statistics represented in Fig.1.1 according to 2009 data. Despite these contributions, the sector is under stress, and the Indian government's recent economic review highlighted the need to extract "more produce per drop," which means utilizing technology and good practises to increase production per drop of water. While this is mostly dependent on the irrigation system, new technological advancements are being hailed as remedies. 
This technology helps automate proper yields and is controlled remotely for farmer safety. Rising energy costs and decreasing water supplies emphasize the need for good water management. High yields and high incomes for farmers, including small producers, in both developed and developing countries is one of the advantages of modern agriculture.
  
    fig 1.1 : Labour force distribution in India(2009)               fig 1.2: State wise un electrification rate in India
Irrigation management is a complex decision-making process that determines when and how much water is needed to grow crops according to agricultural land specifications. One of the most important things to note is that electricity is still unevenly distributed in many areas of villages across India. This means that there is no guarantee that the village will be supplied and will continue to flow when power is applied at the set time. If power is supplied during the daytime, it is thought that a farmer can handle power failures by himself, but problems arise when power is supplied at night. Many farmers sleep at night, but in this state, they turn on the power pump, assume that the power is stable, and go home. put away. And this farmer has to get up in the middle of the night and go to the field to turn on this motor pump. This takes a lot of manpower and puts a lot of mental strain on the farmer because he just had his sleep interrupted. There is no guarantee that this motor will not lose power again. Therefore, we changed the pump starter to allow farmers to manually manage the pump from anywhere and easily adjust the harvest time so that the motor would automatically turn on when the power was turned off and on again.

## Advantages of Smartphone-Based Agriculture Motor Control:
1.	Simple and easy to install and configure.
2.	Saving time, energy and resources, so that it can be utilized in the proper way and amount.
3.	Farmers would be able to smear the right amount of water at the right time by automating farm or nursery irrigation from a remote location.
4.	Avoiding irrigation at the wrong time of day, reduces runoff from overwatering saturated soils which will improve crop performance.
5.	Automated irrigation system uses valves to turn the motor ON and OFF. Motors can be automated easily by using controllers and no need of labour to turn the motor ON and OFF by going to the field.
6.	It is a precise method for irrigation and a valuable tool for accurate soil moisture control in highly specialized greenhouse vegetable production.
7.	It is time-saving, the human error elimination in adjusting available soil moisture levels.



## 📚 Advantages of SmartPhone Based Agriculture Motor Control
- It will save farmers time and money
- Farmers can control land moisture from a remote location
- Increases productivity
- Farmers can invest time in other vital tasks
- It is very easy to design and implement

## 🔖 Working of Smart Irrigation System
The Arduino is connected to the NodeMcu. The NodeMcu will get a message from the farmer instructing him to turn on the motor. The NodeMcu then sends this message as a signal to the Esp8266 board, which will switch on the servo motors and the starter button on the board, which will start the pump, and so our smart irrigation system will begin to give water to crops.
When it comes to turning off the motor, the technique is the same. This time, the farmer will send a message to switch off the motor, and the relay output will be set to LOW, causing the water pump to shut off.

## 💫Tech Stack

### Stack Softwares Required 
- Arduino Ide
- Android Studio
- Figma
- Google Firebase

### Hardware Required 
1.	NodeMCU(ESP8266)
2.	Motor Starter Relay(220V)
3.	Servo Motors 
4.	Connecting wires
5.	Power Supply Board
BLOCK DIAGRAM

 
## WORKING

The Arduino is connected to the NodeMcu. The NodeMcu will get a message from the farmer instructing him to turn on the motor. The NodeMcu then sends this message as a signal to the Esp8266 
board, which will switch on the servo motors and the starter button on the board, which will start the pump, and so our smart irrigation system will begin to give water to crops. When it comes to turning off the motor, the technique is the same. This time, the farmer will send a message to switch off the motor, and the relay output will be set to LOW, causing the water pump to shut off.

## HARDWARE IMPLEMENTATION

The microcontroller used in our project is the NodeMcu (ESP8266) with an in-built Wi-Fi module. There are two servo motors connected to the pins of the NodeMcu. There is a relay module connected to the motor. The servo motors are used to switch the relay on and off. The relay consists of two pins NC and NO. The relay has a switch that is connected to these two pins. NO stands for normally open which indicates that the circuit is turned on. NC stands for normally closed which indicates that the circuit is turned off. All the above-mentioned methods use a separate communication module or use some sort of complicated communication protocol to transmit and receive the data from the sensors
                    Fig 1.7: Hardware setup                                           Fig 1.8 On-off button on relay                                                            

When the switch toggles to NO, the motor is turned on and when the switch is toggled to NC, the motor is turned off. These are used for the working of the motor.


                   Fig 1.9: Microcontroller setup                                       Fig 1.10: Left side of hardware

                  Fig 1.11: Right side of hardware                                 Fig 1.12: Top side of hardware

We have represented the hardware set up and connections from all side, i.e. left (Fig 1.10) , right (Fig 1.11) and top (Fig 1.10). The microcontroller set up consisting of ESP8266(NodeMCU), power supply board and breadboard have been represented in Fig 1.9. We have used Arduino IDE for the coding of ESP8266. The Arduino Integrated Development Environment - or Arduino Software (IDE) - contains a text editor for writing code, a message area, a text console, a toolbar with buttons for common functions and a series of menus. It connects to the Arduino hardware to upload programs and communicate with them. Programs written using Arduino Software (IDE) are called sketches. 





## SOFTWARE IMPLEMENTATION

We have also developed an application for turning the motor ON/OFF. This is shown in Fig. 1.13 and Fig. 1.14:

Fig 1.13: Servo Motor angle of rotation values (80,100) in firebase (OFF)                       Fig 1.13: Servo Motor angle of rotation values (0, 140) in firebase (ON)


For the software implementation we used Android Studio and firebase. Android Studio is the official integrated development environment for Google's Android operating system, built on JetBrains' IntelliJ IDEA software and designed specifically for Android development, hence it has been used for FM 2.0 App development. Google Firebase is a Google-backed application development software that enables developers to develop iOS, Android, and Web apps. Firebase provides tools for tracking analytics, reporting, and fixing app crashes, and creating marketing and product experiment. 

When the farmer sends the signal to turn the motor on via our application, the app sends some values specifying the angle of rotation of the servo motors to the firebase.

 Here, we have used firebase because if we directly send the values to the NodeMcu via Bluetooth or Wi-Fi We'll be restricted to a particular range but if we use firebase range restriction is eradicated. Now the NodeMcu fetches the values from the firebase. Furthermore, it sends the values to the servo motors. The values specify the angle which each of the servo motor must turn to switch the relay in ON/OFF position. The servo motor then turns itself to the angle specified by the fetched values and switches the relay to the NO pin which will turn the motor ON, and it will start the irrigation system. For turning the motor OFF, the process is same except now the values sent to the firebase would be different which would turn the relay to the NC pin which further, turns the motor OFF.

## The algorithm used to automate the irrigation system are:

Step 1: Farmer sends the signal from the application to   turn the motor ON
Step 2: Data is updated in the Firebase
Step 3: NodeMcu fetches the data from the Firebase
Step 4: NodeMcu sends the data to the servo motor
Step 5: Servo motor rotates at a specific angle and turns toggles the relay’s switch to on position
Step 6: Motor is turned on and watering starts
Step 7: Farmer sends the signal to turn the motor OFF.
Step 8: Data is again updated in the Firebase
Step 9: NodeMcu fetches the data from the Firebase and sends it to the servo motor causing the relay to turn the motor OFF.

## INSTRUCTIONS TO USE THE APP

Step 1: Download the APK of the app
Step 2: Login to get started
Step 3: Choose the Button accordingly
Step 4: The Switch activity is used to switch on or off the motor
Step 5: The Timer Activity lets you set the date and the timer for how much time you want your motor to run
Step 6: The Crop Health data activity shows you the history of the irrigation data.









## GUI OF APP



















HOME PAGE










        LOGIN PAGE                                MAIN PAGE                            MOTOR OFF





                                    


              

         MOTOR ON                         SCHEDULING TIME                       STORES CROP
                                               DURATION FOR IRRIGATION              HEALTH DATA
 
## RESULT AND DISCUSSION

Here are some advantages of the proposed idea: 
•	Studies show that up to 50% of water usage for landscape irrigation can be saved with cloud-based Smart Irrigation systems. As a result, Smart systems typically pay for themselves in water savings within two years.
•	Smart Irrigation is not only cost-effective, but also the responsible thing to do. Not only in these times of drought, but as we strive to conserve our finite and dwindling water sources and protect our environment and leave our world a better place for future generations to come.
•	This will also save time and energy, as well as minimize energy loss. With the use of sensors whose cost is low and with simple circuitry this experiment aims in low-cost solution, which can be bought even by a poor farmer, and it is also easy to implement.
•	Farmers can control land moisture from a remote location.
•	Increases productivity.
•	Farmers can invest time in other vital tasks.
•	It is very easy to design and implement.
•	It will save farmers time and money.

Here are some disadvantages of the proposed idea: 
•	In India, we face massive internet latency issues because of which there can be a lag in the switching ON/OFF the servo motors, as the data passing to the NodeMCU from the app takes time.
•	Instead of using a Wi-Fi module, a GSM module should be used to avoid the need for Internet. 
•	Servo motors are light-weight fragile devices which can get damaged very easily.
Following are some improvements that can be made in the proposed method:
•	This project can be made furthermore innovative by adding - controlling and monitoring the sprinkles, checking the faults in the irrigation network and correcting them remotely and visualization the live working of integrated system in field area by pc/mobile.
•	Instead of using a Wi-Fi module a GSM module must be used to mitigate the use of Wi-Fi.
•	The project can be made into an intelligent system, wherein the system predicts user actions, rainfall pattern, time to harvest and many more features which will make the system independent of human operation. Systems can all be upgraded to Real Time systems, such that users receive real time updates and status of condition of the field. Thereby, enabling the user to take immediate action in case of any problems.


## CONCLUSIONS

Traditional irrigation systems are pre-set manually to turn on and off using a timer. It doesn’t matter if an unexpected downpour occurs on a scheduled day or the soil deep beneath the ground surface where the eye can’t see has become oversaturated. That timer is pre-set to water on each scheduled day, rain, or shine. Clearly, this isn’t the most efficient or cost-effective way to manage landscape irrigation.
Studies show that 70% of water consumption around the world is used for irrigation, and half of that is wasted due to inefficient, traditional irrigation practices. The optimal way to manage irrigation and nurture your landscape would be to know how much hydration plant roots deep need on any given day or if they’re getting too much-scheduled watering. 
We have successfully designed and implemented a smart irrigation system using the concept of the Internet of Things. This automated irrigation system is easily controlled using a mobile app. It behaves as an intelligent switching system that detects the health of the crop and irrigates the plant according to the motor.  Using a mobile phone app, turn on and off the motor. We can specify how long the motor should run. Farmers can control land moisture from a remote location, increases productivity, farmers can invest time in other vital tasks. 
The project concludes that automation of irrigation systems will become easy and comfortable for farmers to operate the irrigation at remote locations i.e., from home. This will save time and avoid the problem of continuous vigilance.




