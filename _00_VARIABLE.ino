// PARAMETRES
// - EXECUTION DU PROGRAMME
int INIT = 0;  // 1 = Initialisation a 0 des sorties
int DEBUG = 0; // 1 = Mode Debugage
// - MISE A ECHELLE DES E_ANALOGIQUE/S_PWM 
#define MAPECL_1 0
#define MAPECL_2 1023 
#define MAPECL_3 80
#define MAPECL_4 255 
// ENTREE --------------------------------------------------------
// - MANU/AUTO ---------------------------------------------------
int E_MAECL = 0;
int E_MATHT = 0;
int E_MAMIDI = 0;
// - BOUTON POUSSOIR ---------------------------------------------
int E_BPTHT = 0;
int E_BPGAZ = 0;
// - POTENTIOMETRE -----------------------------------------------
int E_POTECL = 0;
// SORTIE --------------------------------------------------------
// - DIGITAL -----------------------------------------------------
int S_THT = 0;
// - PWM ---------------------------------------------------------
int S_ECL = 0;
// PROGRAMATIONS -------------------------------------------------
// _DEBUG --------------------------------------------------------
long Tempo_DEBUG = 1000; // [ms] tempo de la THT
long Millis_DEBUG = 0;
// _05_THT -------------------------------------------------------
long Tempo_THT = 50; // [ms] tempo de la THT
long Millis_THT = 0;
int k;
#define BPM 11
int SEIZ=3600/(BPM*16);
int MESUREA[]= {
  1, 1, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 1, 1, 0, 1};
int MESUREB[]= {
  0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1, 1, 1, 0, 0};
int MESUREC[]= {
  1, 1, 1, 1, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0};
int MESURED[]= {
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0};
//ECLATEUR ---------------------------------------------------------
int ECLAUTO = 155;
//------------------------------------------------------------------

