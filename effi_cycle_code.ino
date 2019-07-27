/* Sweep
 by BARRAGAN 
<http://barraganstudio.com>

 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/


#include <Servo.h>


Servo myservo; // create servo object to control a servo

//twelve servo objects can be created on most boards


int
 x=0;

int y=2;

int z=1;

int pos = 180; // variable to store the servo position

void setup() {
  myservo.attach(10);  // attaches the servo on pin 9 to the servo object
  pinMode( y, INPUT);
 
     Serial.begin(9600);
}
 



void loop() {
  
 

              x = analogRead(y);

       //     Serial.print(x);
 
         //   Serial.print("\n\n");

 /* x= map(x, 0 , 1023 , 0 , 180);
  Serial.print(x);
  Serial.print("\n\n");
  myservo.write(x); 
  delay(1000);*/
  

              if (x>=0 && x<100)
{
 
   
                                 
  
                                 if (z==1)
{
      
                                                
                                                 do{
     
    
                                                       z=2;
     
                                                       pos=135;
     
                                                       myservo.write(pos);
     
                                                       Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
                                                       x = analogRead(y);
      
                                                      } 
                                                  while(x<300);
 
  
                                                 }
    
                                  else if (z==2)
 {
      
        do{
      
             z=3;
      
             pos=95;
      
             myservo.write(pos);
      
             Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
      
             x = analogRead(y);
      } 
        while(x<300);
   
  }
   
 
    else if (z==3)
 
   {
      
         do{
      
             z=4;
     
             pos=90;
      
             myservo.write(pos);
              Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
             x = analogRead(y);
  
     
            } 
         while(x<300);
  
  }
   
 else if (z==4)
   
 {
      
         do{
      
z=5;
      
pos=85;
     
 myservo.write(pos);
      
 Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
      
x = analogRead(y);
     
 } while(x<300);
    
}
    
else if (z==5)
   
 {
      
          do{
      
z=6;
      
pos=65;
      
myservo.write(pos);
      
 Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
x = analogRead(y);
  
    } 
while(x<300);
    
}
    
else if (z==6)
    
{
         do{
    
        z=7;
     
 pos=45;
     
 myservo.write(pos);
   
    Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
      
x = analogRead(y);
    
  }
 while(x<300);

    }
 
 }
  
if (x>650 && x<1050)
  
{
     if (z==7)
   
 {
      
do{
     
 z=6;
     
 pos=65;
     
 myservo.write(pos);
     
  Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
  x = analogRead(y);
     
 } while(x>600);
    
}
   
else  if (z==6)
   
 {
     
 do{
     
 z=5;
      
pos=85;
      
myservo.write(pos);
     
  Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
     
 x = analogRead(y);
      
} while(x>600);
 
   }
    
else if (z==5)
    {
 
     do{
     
 z=4;
      
pos=90;
     
 myservo.write(pos);
     
 Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");

 x = analogRead(y);
      
} while(x>600);
   

 }
    
   
 else if (z==4)
    {
     
 do{
      
z=3;
     
 pos=95;
     
 myservo.write(pos);
     
  Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
      
x = analogRead(y);
      } 
while(x>600);
   
 }
    
else if (z==3)
   
 {
      
do{
     
 z=2;
      
pos=135;
     
 myservo.write(pos);
    
   Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
  x = analogRead(y);
    
  } while(x>600);
   
 }
   
 else if (z==2)
  
  {
     
 do{
     
 z=1;
     
 pos=180;
     
 myservo.write(pos);
      
 Serial.print(z);
      
                                                       Serial.print("\n\n");
                                                       Serial.print(x);
                                                       Serial.print("\n\n");
 x = analogRead(y);
      }
 while(x>600);
    }
    

   

    
  }
 
 delay(200);

}



