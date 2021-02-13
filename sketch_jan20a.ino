#define sw1 15
#define sw2 16

#define sw3 19/*re*/
int vote1=0;
int vote2=0;

void setup()
{
  pinMode(sw1, INPUT);
  pinMode(sw2,INPUT);
  
  pinMode(sw3,INPUT);
  
  Serial.println("Voting Machine");
  delay(3000);
  digitalWrite(sw1, HIGH);
  digitalWrite(sw2, HIGH);
  digitalWrite(sw3, HIGH);
  
  
  
}
void loop()
{
  Serial.println("BJP");
  Serial.println(vote1);
  Serial.println("INC");
  Serial.println(vote2);
  
  
  if(digitalRead(sw1)==0)
    vote1++;
    while(digitalRead(sw1)==0);
  if(digitalRead(sw2)==0)
    vote2++;
    while(digitalRead(sw2)==0);
  
   if(digitalRead(sw3)==0)
   {
     int vote=vote1+vote2;
     if(vote)
     {
      if(vote1 > vote2)
      {
       Serial.println("BJP Wins");
      }
      else if(vote2 > vote1)
      {
       Serial.println("INC Wins");
      }
      
     
     else if(vote1==vote2)
     {
      Serial.println("Tie");
     }
     
    }      
     else 
     {
      Serial.println("NO voting");
     }
     vote1=0;vote2=0;
     
   }
   
}
