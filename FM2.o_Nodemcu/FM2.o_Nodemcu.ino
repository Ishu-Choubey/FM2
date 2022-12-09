#include <Servo.h> // Library for Servo Motor
#include <ESP8266WiFi.h> // Library for NodeMcu
#include <FirebaseESP8266.h> // For google firebase
                          
#define FIREBASE_HOST "fm2o-79fe6-default-rtdb.firebaseio.com"    //Your Firebase Project URL goes here without "http:" , "\" and "/"
#define FIREBASE_AUTH "RNw2ofme6aip7o03b8ZgQ9dJonN7alt4r8NkCYC1" //Your Firebase Database Secret goes here

#define WIFI_SSID "YuiM21"                                               //your WiFi SSID for which yout NodeMCU connects
#define WIFI_PASSWORD "Yui@2503"                                      //Password of your wifi network 
Servo servo1,servo2;   // Variable for servo motor

// Declare the Firebase Data object in the global scope
FirebaseData firebaseData;

// Declare global variable to store value
int sval1=0;// Servo1 Status Value
int sval2=0;// Servo1 Status Value
int tval=0; // Timer value


void setup() {

  Serial.begin(115200);  //Baud rate                                                    // Select the same baud rate if you want to see the datas on Serial Monitor
  servo1.attach(2); // coonnected to D4
  servo2.attach(4); // coonnected to D2
  
  servo1.write(0); // Moves shaft to 0 degree
  servo2.write(90); // Moves shaft to 0 degree

  Serial.println("Serial communication started\n\n");  
           
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);                                     //try to connect with wifi
  Serial.print("Connecting to ");
  Serial.print(WIFI_SSID);


  
  while (WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
    delay(500);
  }

  
  Serial.println();
  Serial.print("Connected to ");
  Serial.println(WIFI_SSID);
  Serial.print("IP Address is : ");
  Serial.println(WiFi.localIP());                                            //print local IP address
  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);   // connect to firebase

  Firebase.reconnectWiFi(true);
  delay(1000);
}

void loop() {


// Firebase Error Handling And Reading Data From Specified Path ****************

if (Firebase.getInt(firebaseData, "/servo1value")) {                           // On successful Read operation, function returns 1  

    if (firebaseData.dataType() == "int") {                            // print read data if it is integer

      sval1 = firebaseData.intData();
      servo1.write(sval1);
      Serial.println("\nThe Value recieved for the servo"); 
      Serial.println(sval1);
     
      
    }

  } else {
    Serial.println(firebaseData.errorReason());
  }
  if (Firebase.getInt(firebaseData, "/servo2value")) {                           // On successful Read operation, function returns 1  

    if (firebaseData.dataType() == "int") {                            // print read data if it is integer

      sval2 = firebaseData.intData();
      servo2.write(sval2);
      Serial.println("\nThe Value recieved for the servo"); 
      Serial.println(sval2);
     
      
    }

  } else {
    Serial.println(firebaseData.errorReason());
  }
//  if (Firebase.getInt(firebaseData, "/ScheduleTime")) {                           // On successful Read operation, function returns 1  
//
//    if (firebaseData.dataType() == "int") {                            // print read data if it is integer
//
//      tval = firebaseData.intData();
//      Serial.println("\n Timer Value Recieved from the firebase and timer has been set for"); 
//      Serial.println(tval);
//      Serial.println("Hours"); 
////       while(tval>0)
////       {
////        if(amp>150){
////         servo.write(180)
////        }
//      //tval++
//        
////       }
//      
//    }
//
//  } else {
//    Serial.println(firebaseData.errorReason());
//  }
 }


/* NOTE:
 *  To read value, command is ===> Firebase.getInt(firebaseData, "path"); variable = firebaseData.intData();
 *  
 *  Example                   ===>  Firebase.setInt(firebaseData, "/data", val); val = firebaseData.intData();
 */
