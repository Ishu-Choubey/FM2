# FM2.0
## 📄 Abstract
India is mostly an agricultural nation. Agriculture is the primary source of income for the majority of Indian families. Agriculture accounts for around 16% of the overall GDP and 10% of total exports in India. Profitability in production farming is dependent on making the proper and timely operational choice based on current conditions and previous records. Controlling and monitoring machines remotely has become an interesting subject of study for all researchers in recent years.
The problems faced by Indian farmers inspired the idea of this project. It turns out that the grain fields are usually far from the farmer's home. Farmers have to travel long distances to reach their fields. Irrigation is an important part of agriculture. As you know, this has to be done every day, so farmers have to visit their fields every day to turn on the irrigation system and water their crops, regardless of the distance between them. This daily trip to the grain fields has some drawbacks. It wastes time, money, and most of all energy. Irrigation may be omitted due to the carelessness of farmers. For this reason we came up with an automated irrigation system which is a computerized method of watering the farm that saves labor and time over manual watering, hence we chose to work online rather than travelling. In this article, we have come up with an automated irrigation system using a NodeMCU, ESP8266 Wifi module, servo motors, and an Arduino IDE. The irrigation can be monitored and handled via an Android application which will be installed on the smartphones of the farmers. The data pertaining to the crop irrigation will be stored and fetched from Google Firebase Cloud Service.


## 🗒️Introduction
               

Agriculture is an important source of income for most Indians and has a significant impact on the country's economy. Irrigation becomes difficult in dry areas and areas with little rainfall. Maintaining agricultural production, ensuring food security, and boosting economic growth in the face of climate variability, a shrinking labour force, and changing soil conditions along with fluctuation in electricity in rural India need agricultural innovation. Agriculture in India accounts for 18% of the country's GDP and employs more than 50% of the workforce. This has been confirmed by the statistics represented in Fig.1.1 according to 2009 data. Despite these contributions, the sector is under stress, and the Indian government's recent economic review highlighted the need to extract "more produce per drop," which means utilizing technology and good practises to increase production per drop of water. While this is mostly dependent on the irrigation system, new technological advancements are being hailed as remedies. 
This technology helps automate proper yields and is controlled remotely for farmer safety. Rising energy costs and decreasing water supplies emphasize the need for good water management. High yields and high incomes for farmers, including small producers, in both developed and developing countries is one of the advantages of modern agriculture.
  
    fig 1.1 : Labour force distribution in India(2009)               fig 1.2: State wise un electrification rate in India
Irrigation management is a complex decision-making process that determines when and how much water is needed to grow crops according to agricultural land specifications. One of the most important things to note is that electricity is still unevenly distributed in many areas of villages across India. This means that there is no guarantee that the village will be supplied and will continue to flow when power is applied at the set time. If power is supplied during the daytime, it is thought that a farmer can handle power failures by himself, but problems arise when power is supplied at night. Many farmers sleep at night, but in this state, they turn on the power pump, assume that the power is stable, and go home. put away. And this farmer has to get up in the middle of the night and go to the field to turn on this motor pump. This takes a lot of manpower and puts a lot of mental strain on the farmer because he just had his sleep interrupted. There is no guarantee that this motor will not lose power again. Therefore, we changed the pump starter to allow farmers to manually manage the pump from anywhere and easily adjust the harvest time so that the motor would automatically turn on when the power was turned off and on again.
Advantages of Smartphone-Based Agriculture Motor Control:
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

### Softwares Required 
- Arduino Ide
- Android Studio
- Figma
- Google Firebase

### Hardware Required 
- Arduino Uno
- Gsm Module
- Servo Motors X 2

