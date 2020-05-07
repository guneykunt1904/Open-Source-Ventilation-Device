 // Coded By Nadir Güney KUNT 2020  version 1.0.0//

int respiratory_rate ;         // Breath times in a minute
int tidal_volume ;            // volume of each breath //It determines the compression.
                  

int MAX_breath_num = 17   ;        // Variable for max breath time in a minute it can be changed
int MIN_breath_num = 9   ;         // Variable for minimum breath time in a minute  It can be changed.But these values are recomended
unsigned long timebreak = 200 ;               //delay time between inhilation and exhalation in milliseconds
int stepp_num ;                     //step number for compressing the BWM.
unsigned long delaytime ;          // time of each breath 
unsigned long total_time;        // represents total time of each breath 

#define rate_pot A0       //By changing the value of potentiometer we can change the num of breath times in a minute
#define volume_pot A1     //10-15 ml/kg // In this poteniometer user gives the valu of each breath in ml.
#define  peep_pot A2    // to determine the peep value // 0-5 cm H2O
#define dirr  4           // give voltage to determine the direction of stepMotor It will connected to CW+ of TB6560
#define stepp 3          // Give the pulse to create steps    It will connected to CLK+ of TB6560


int step_counter(int tidalvolume){           //This function determines the step amount according to tidal volume amount by c changing compression amount
  int steppnum = map(tidalvolume,450,1200,4500,7000);     // 100 and 200 values can be changed depends on the system motor and the other factors.
  
  return steppnum;
}

 unsigned long total_timer(int resp_rate){          // This function calculates the total time of each breath cycle in milliseconds according to the respiration rate in a minute
  unsigned long total_time = 60000/resp_rate;

  return total_time;
  
 }
 
 unsigned long compute_delaytime(int step_num,unsigned long total_time, unsigned long timebreak){     // This function calculates the delay time to fix the time of breath
total_time=total_time*1000;
timebreak=timebreak*1000;
unsigned long delay_time = ((total_time - (2*timebreak)))/(4*step_num);

return delay_time;

  
 }
void setup() {
 Serial.begin(9600);

 pinMode(rate_pot,INPUT);
 pinMode(volume_pot,INPUT);
 pinMode(peep_pot,INPUT);
 pinMode(dirr,OUTPUT);
 pinMode(stepp,OUTPUT);

  digitalWrite(stepp,LOW);
  digitalWrite(dirr,LOW);

}

void loop() {
  
  respiratory_rate=map(analogRead(rate_pot),0,1023,MIN_breath_num,MAX_breath_num);
  tidal_volume = map(analogRead(volume_pot),0,1023,450,1200);
  stepp_num  = step_counter(tidal_volume);
  total_time = total_timer(respiratory_rate);
  Serial.print("Respiratory Rate: ");
  Serial.println(respiratory_rate);
  Serial.print("Tidal Volume");
  Serial.println(tidal_volume);
  
delaytime =compute_delaytime(stepp_num,total_time,timebreak);
  
  
digitalWrite(dirr,LOW);                          
 
  for(int i =1; i<=stepp_num;i++){            //Inhalation //We are creating pulses to create steps stepp_num variable gives us step number that will be the last step.

      digitalWrite(stepp,HIGH);
      delayMicroseconds(delaytime);
      digitalWrite(stepp,LOW);
      delayMicroseconds(delaytime);
      
}

delay(timebreak);

digitalWrite(dirr,HIGH);                  // Exhalation //Changing the step motor's direction  

     for (int j =1; j<=stepp_num ; j++){


  digitalWrite(stepp,HIGH);
  delayMicroseconds(delaytime);
  digitalWrite(stepp,LOW);
  delayMicroseconds(delaytime);
}
   
   
   delay(timebreak);
  



}
