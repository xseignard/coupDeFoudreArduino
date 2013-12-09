// SETUP ----------------------------------------------------------
void setup(){
  // DECLARATION DES PORTS ----------------------------------------
  pinMode (MAECL,INPUT);
  pinMode (MATHT,INPUT);
  pinMode (BPGAZ,INPUT);
  pinMode (BPTHT,INPUT);
  /*pinMode (NOTE1,INPUT);
  pinMode (NOTE2,INPUT);
  pinMode (NOTE3,INPUT);
  pinMode (NOTE4,INPUT);
  pinMode (NOTE5,INPUT);
  pinMode (NOTE6,INPUT);*/
  pinMode (THT,OUTPUT);
  pinMode (ECL,OUTPUT);
  // INITIALISATION DES SORTIES -----------------------------------
  if(INIT==1) INITIALISATION();
  //if(DEBUG==1) Serial.begin(9600); 
  Serial.begin(9600); 
  LECTURE();
  // DEFINITION DU MODE MIDI -----------------------------------
  /*MIDI.begin(MIDI_CHANNEL_OMNI);
  MIDI.setHandleNoteOn(HandleNoteOn);
  MIDI.setHandleNoteOff(HandleNoteOff);
  MIDI.setHandleControlChange(HandleControlChange);*/
}
//----------------------------------------------------------------