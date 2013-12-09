// GESTION ECLATEUR ----------------------------------------------
// - MODE MANUEL -------------------------------------------------
void MANU_ECL(){
  // VITESSE DE L ECLATEUR ---------------------------------------
  analogWrite(ECL,map(analogRead(POTECL),MAPECL_1,MAPECL_2,MAPECL_3,MAPECL_4));
}
// - MODE AUTOMATIQUE --------------------------------------------
/*void AUTO_ECL(){  
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    analogWrite(ECL,155);
    ECLAUTO=155;
  }
  if(digitalRead(NOTE1)==1 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,225);
    ECLAUTO=225;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==1 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,200);
    ECLAUTO=200;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==1 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,175);
    ECLAUTO=175;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==1 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,155);
    ECLAUTO=155;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==1 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,125);
    ECLAUTO=125;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==1){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,90);
    ECLAUTO=90;
  }
  if(digitalRead(NOTE1)==1 && digitalRead(NOTE2)==1 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,213);
    ECLAUTO=213;
  }
  if(digitalRead(NOTE1)==1 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==1 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,200);
    ECLAUTO=200;
  }
  if(digitalRead(NOTE1)==1 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==1 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,190);
    ECLAUTO=190;
  }
  if(digitalRead(NOTE1)==1 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==1 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,175);
    ECLAUTO=175;
  }
  if(digitalRead(NOTE1)==1 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==1){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,158);
    ECLAUTO=158;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==1 && digitalRead(NOTE3)==1 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,188);
    ECLAUTO=188;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==1 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==1 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,178);
    ECLAUTO=178;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==1 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==1 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,163);
    ECLAUTO=163;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==1 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==1){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,145);
    ECLAUTO=145;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==1 && digitalRead(NOTE4)==1 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,165);
    ECLAUTO=165;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==1 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==1 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,133);
    ECLAUTO=133;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==1 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==1){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,194);
    ECLAUTO=194;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==1 && digitalRead(NOTE5)==1 && digitalRead(NOTE6)==0){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,140);
    ECLAUTO=140;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==1 && digitalRead(NOTE5)==0 && digitalRead(NOTE6)==1){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,123);
    ECLAUTO=123;
  }
  if(digitalRead(NOTE1)==0 && digitalRead(NOTE2)==0 && digitalRead(NOTE3)==0 && digitalRead(NOTE4)==0 && digitalRead(NOTE5)==1 && digitalRead(NOTE6)==1){
    if(E_MATHT==0) digitalWrite(THT,1);
    analogWrite(ECL,108);
    ECLAUTO=108;
  }
}*/
//----------------------------------------------------------------

