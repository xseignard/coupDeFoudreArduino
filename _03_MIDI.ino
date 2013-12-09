// GESTION MODE MIDI ----------------------------------------------
#define CHANNEL10 10
#define CHANNEL11 11
void HandleNoteOn(byte channel,byte note,byte velocity){
  if(channel==CHANNEL10){
    digitalWrite(THT,1);
  }
  else if(channel==CHANNEL11){
    analogWrite(ECL,map(note,0,127,80,255));
    digitalWrite(THT,1);
  }
}
void HandleNoteOff(byte channel,byte note,byte velocity){ 
  if(channel==CHANNEL10){
    digitalWrite(THT,0);
  }
  else if(channel==CHANNEL11){  
    digitalWrite(THT,0);
  }
}
void HandleControlChange(byte channel,byte number,byte value){
  if(channel==CHANNEL10){
    analogWrite(ECL,map(value,0,127,80,255));
  }
}
//------------------------------------------------------------------