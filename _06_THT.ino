// GESTION THT ---------------------------------------------------
// - MODE MANUEL -------------------------------------------------
void MANU_THT(){
  digitalWrite(THT,digitalRead(BPTHT));
}
/*void MANU_THT1(){
  if(digitalRead(BPTHT)==1) digitalWrite(THT,1);
  if(digitalRead(BPTHT)==0 && digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0) digitalWrite(THT,0);
}*/
// - MODE AUTOMATIQUE 0 --------------------------------------------
void AUTO_THT(){
  unsigned long Millis1_THT = millis();
  if(Millis1_THT - Millis_THT > SEIZ ){
    Millis_THT = Millis1_THT;   
    k=k+1;
    if(k==15) k=0;  
    if(digitalRead(BPTHT)==1 && digitalRead(BPGAZ)==0) digitalWrite(THT,MESUREA[k]);
    if(digitalRead(BPTHT)==0 && digitalRead(BPGAZ)==0) digitalWrite(THT,MESUREB[k]);
    if(digitalRead(BPTHT)==1 && digitalRead(BPGAZ)==1) digitalWrite(THT,MESUREC[k]);
    if(digitalRead(BPTHT)==0 && digitalRead(BPGAZ)==1) digitalWrite(THT,MESURED[k]);
  }
}
// - MODE AUTOMATIQUE 1 ------------------------------------------
void AUTO_THT1(){
  analogWrite(ECL,ECLAUTO);
  unsigned long Millis1_THT = millis();
  if(Millis1_THT - Millis_THT > SEIZ ){
    Millis_THT = Millis1_THT;   
    k=k+1;
    if(k==15) k=0; 
    if(digitalRead(BPTHT)==1 && digitalRead(BPGAZ)==0) digitalWrite(THT,MESUREA[k]);
    if(digitalRead(BPTHT)==0 && digitalRead(BPGAZ)==0) digitalWrite(THT,MESUREB[k]);
    if(digitalRead(BPTHT)==1 && digitalRead(BPGAZ)==1) digitalWrite(THT,MESUREC[k]);
    if(digitalRead(BPTHT)==0 && digitalRead(BPGAZ)==1) digitalWrite(THT,MESURED[k]); 
  }
}
//----------------------------------------------------------------