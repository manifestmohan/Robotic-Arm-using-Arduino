//Robotic Arm 

  //Analog
   
   const int xaxis=A0;
   const int yaxis=A1;
   
   //Digital
   
   int key=2;
   
   int in1=3;
   int in2=4;
   int in3=5;
   int in4=6;

   int x;
   int y;
   
void setup() {
  // put your setup code here, to run once:

   pinMode(in1,OUTPUT);
   pinMode(in2,OUTPUT);
   pinMode(in3,OUTPUT);
   pinMode(in4,OUTPUT);

   Serial.begin(9600);
  

}

void loop() 
{
  // put your main code here, to run repeatedly:

  

  if(analogRead(yaxis)>750)
  {
      while(analogRead(yaxis)>750)
      {
        Serial.print("clockwise");
        digitalWrite(in1,HIGH); //in1=1;
        digitalWrite(in2,LOW); //in2=0;
   
        y=analogRead(yaxis);
        if((y>250)&&(y<750))
        {
           digitalWrite(in1,HIGH); //in1=1;
           digitalWrite(in2,HIGH); //in2=1;

        }
       
      }
      
  }
  
  if(analogRead(yaxis)<250)
  {
      while(analogRead(yaxis)<250)
      {
        Serial.print("Anticlockwise");
        digitalWrite(in1,LOW);//in1=0;
        digitalWrite(in2,HIGH);//in2=1;
        
         y=analogRead(yaxis);
        if((y>250)&&(y<750))
        {
           digitalWrite(in1,HIGH); //in1=1;
           digitalWrite(in2,HIGH); //in2=1;

        }
      }
  }

 if(analogRead(xaxis)>750)
 {
      while(analogRead(xaxis)>750)
      {
         Serial.print("clock");
         digitalWrite(in3,HIGH);//in3=1;
         digitalWrite(in4,LOW);//in4=0;
         
          x=analogRead(xaxis);
        if((x>250)&&(x<750))
        {
           digitalWrite(in3,HIGH); //in1=1;
           digitalWrite(in4,HIGH); //in2=1;

        }
      }
 }

if(analogRead(xaxis)<250)
{
      while(analogRead(xaxis)<250)
      {
         Serial.print("anticlock");
         digitalWrite(in3,LOW);//in3=0;
         digitalWrite(in4,HIGH);//in4=1;
         
          x=analogRead(xaxis);
        if((x>250)&&(x<750))
        {
           digitalWrite(in3,HIGH); //in1=1;
           digitalWrite(in4,HIGH); //in2=0;

        }
      }
}



}

