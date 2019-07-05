void setup() 
{
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    Serial.begin(9600);

}
long int incoming = 0;
void loop() 
{
    if ( Serial.available() )
    {
       digitalWrite(6,LOW);
       delay(50);
       incoming = Serial.read();
       switch ( incoming )
      {
          case '0':digitalWrite(2,LOW); digitalWrite(3,LOW); 
                   digitalWrite(4,LOW); digitalWrite(5,LOW);break;
          case '1':digitalWrite(2,HIGH); digitalWrite(3,LOW); 
                   digitalWrite(4,LOW); digitalWrite(5,LOW);break;
          case '2':digitalWrite(2,LOW); digitalWrite(3,HIGH); 
                   digitalWrite(4,LOW); digitalWrite(5,LOW); break; 
          case '3':digitalWrite(2,HIGH); digitalWrite(3,HIGH); 
                   digitalWrite(4,LOW); digitalWrite(5,LOW);break;
          case '4':digitalWrite(2,LOW); digitalWrite(3,LOW); 
                   digitalWrite(4,HIGH); digitalWrite(5,LOW);break;
          case '5':digitalWrite(2,HIGH); digitalWrite(3,LOW); 
                   digitalWrite(4,HIGH); digitalWrite(5,LOW);break;
          case '6':digitalWrite(2,LOW); digitalWrite(3,HIGH); 
                   digitalWrite(4,HIGH); digitalWrite(5,LOW);break;
          case '7':digitalWrite(2,HIGH); digitalWrite(3,HIGH); 
                   digitalWrite(4,HIGH); digitalWrite(5,LOW);break;
          case '8':digitalWrite(2,LOW); digitalWrite(3,LOW); 
                   digitalWrite(4,LOW); digitalWrite(5,HIGH);break;
          case '9':digitalWrite(2,HIGH); digitalWrite(3,LOW); 
                   digitalWrite(4,LOW); digitalWrite(5,HIGH);break;
          default : break;   
      }
        delay(50);
        digitalWrite(6,HIGH);
        delay(50);
    }
}
