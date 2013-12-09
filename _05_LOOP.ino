// LOOP ----------------------------------------------------------
void loop(){
  // MODE THT ----------------------------------------------------
  if(E_MATHT==0 && E_MAECL==0 && E_MAMIDI==0) MANU_THT();
  //if(E_MATHT==0 && E_MAECL==1 && E_MAMIDI==0) MANU_THT1();
  if(E_MATHT==1 && E_MAECL==0 && E_MAMIDI==0) AUTO_THT();
  if(E_MATHT==1 && E_MAECL==1 && E_MAMIDI==0) AUTO_THT1();
  // MODE ECLATEUR -----------------------------------------------
  if(E_MAECL==0 && E_MAMIDI==0) MANU_ECL();
  //if(E_MAECL==1 && E_MAMIDI==0) AUTO_ECL();
  // PRGM --------------------------------------------------------
  LECTURE();
  // MIDI --------------------------------------------------------
  //if(E_MATHT==0 && E_MAECL==0 && E_MAMIDI==1) MIDI.read();
  // TABLETTE --------------------------------------------------------
  if(E_MATHT==0 && E_MAECL==0 && E_MAMIDI==1) TABLETTE();
}
//----------------------------------------------------------------