
byte l_m_p = 2;  //left motor positive
byte l_m_n = 3;  //left motor negative
byte r_m_p = 4;  //right motor positive
byte r_m_n = 5;  //right motor negative



void setup() {
  // put your setup code here, to run once:
pinMode(l_m_p, OUTPUT);
pinMode(l_m_p, OUTPUT);
pinMode(r_m_p, OUTPUT);
pinMode(r_m_n, OUTPUT);

Serial.begin(9600); // this initializes the serial port with a baud rate of 9600.

}

void loop() {
// put your main code here, to run repeatedly:
while(Serial.available()){ // this Serial.available() function checks
// if there is data available or not at serial port.
char data = Serial.read(); // the incomming data from serial port is stored in the variable "data".
  Serial.print(data);  // to print the incomming data.
 if(data == 'f'){  // if the incomming data is "f" then excute the forward function
  forward();
 }
 if(data == 'b'){    // if the incomming data is "b" then excute the back function
  back();
 }
 if(data == 'r'){    // if the incomming data is "r" then excute the right function
  right();
 }
 if(data == 'l'){    //  if the incomming data is "l" then excute the left function
  left();
 }
 if(data == 's'){    // if the incomming data is "s" then excute the stop function
  Stop();
 }

}
}

void forward(){
  digitalWrite(l_m_p,HIGH);
  digitalWrite(l_m_n,LOW);
  digitalWrite(r_m_p,HIGH);
  digitalWrite(r_m_n,LOW);
  Serial.println("forward");
}

void back(){
  digitalWrite(l_m_p,LOW);
  digitalWrite(l_m_n,HIGH);
  digitalWrite(r_m_p,LOW);
  digitalWrite(r_m_n,HIGH);
  Serial.println("back");
}

void left(){
  digitalWrite(l_m_p,LOW);
  digitalWrite(l_m_n,LOW);
  digitalWrite(r_m_p,HIGH);
  digitalWrite(r_m_n,LOW);
  Serial.println("left");
}

void right(){
  digitalWrite(l_m_p,HIGH);
  digitalWrite(l_m_n,LOW);
  digitalWrite(r_m_p,LOW);
  digitalWrite(r_m_n,LOW);
  Serial.println("right");
}
void Stop(){
  digitalWrite(l_m_p,LOW);
  digitalWrite(l_m_n,LOW);
  digitalWrite(r_m_p,LOW);
  digitalWrite(r_m_n,LOW);
  Serial.println("stopped");
}
