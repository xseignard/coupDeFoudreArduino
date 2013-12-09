// SORTIE --------------------------------------------------------
// - DIGITAL -----------------------------------------------------
#define THT 3   // Pilotage (TIP120) THT
// - PWM ---------------------------------------------------------
#define ECL 8  // 9- variateur 8-irf Pilotage (IRF) MOTEUR 48V VITESSE MOTEUR
// INITIALISATION DES SORTIES
// - MANU/AUTO ---------------------------------------------------
void INITIALISATION(){
  digitalWrite(THT,S_THT);
  analogWrite(ECL,S_ECL);
}
//----------------------------------------------------------------