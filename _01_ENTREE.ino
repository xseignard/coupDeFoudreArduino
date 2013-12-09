// ENTREE --------------------------------------------------------
// - MANU/AUTO ---------------------------------------------------
#define MAECL 4    // Entrée (E) 0/1 Manu/Auto) ECLATEUR
#define MATHT 2    // E 0/1 Manu/Auto THT
#define MAMIDI 10  // E 0/1 MIDI
// - BOUTON POUSSOIR ---------------------------------------------
#define BPTHT 5    // E 0/1 BP THT
#define BPGAZ 7    // E 0/1 BP GAZ
//#define NOTE1 10
//#define NOTE2 11
//#define NOTE3 35
//#define NOTE4 37
//#define NOTE5 39
//#define NOTE6 41
// - POTENTIOMETRE -----------------------------------------------
int POTECL = A2; // E ana VITESSE MOTEUR 48V
// LECTURE DES ENTRES
void LECTURE(){
  E_MAECL=digitalRead(MAECL);
  E_MATHT=digitalRead(MATHT);
  E_MAMIDI=digitalRead(MAMIDI);
  E_BPTHT=digitalRead(BPTHT);
  E_POTECL=analogRead(POTECL);
  // - DEBUG -------------------------------------------------------
  if(DEBUG==1){
    unsigned long Millis1_DEBUG = millis();
    if(Millis1_DEBUG - Millis_DEBUG > Tempo_DEBUG ){
      Millis1_DEBUG = Millis_DEBUG;
      Serial.print ("MAECL : ");
      Serial.print(E_MAECL,DEC);
      Serial.print("\t");
      Serial.print ("MATHT : ");
      Serial.print(E_MATHT,DEC);
      Serial.print("\t");
      Serial.print ("MAMIDI : ");
      Serial.print(E_MAMIDI,DEC);
      Serial.print("\t");
      Serial.print ("BPTHT : ");
      Serial.print(BPTHT,DEC);
      Serial.print("\t");
      Serial.print ("BPGAZ : ");
      Serial.print(BPGAZ,DEC);
      Serial.print("\t");
      Serial.print ("POTECL : ");
      Serial.print(E_POTECL,DEC);
      Serial.print("\t");
    } 
  }
}
//----------------------------------------------------------------
