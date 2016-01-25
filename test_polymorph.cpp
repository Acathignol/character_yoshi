
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#include "Character.h"
#include "Yoshi.h"
#include "Mario.h"


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
  Yoshi       character1 = Yoshi(0,Yoshi::BLUE);
  Yoshi       character2 = Yoshi(0,Yoshi::GREEN);
  Mario       character3 = Mario(0,Mario::BLUE);
  Mario       character4 = Mario(2,Mario::RED);

  ofstream fichier("Speed.txt", ios::out | ios::trunc);  // ouverture en écriture avec effacement du fichier ouvert
  if (fichier) {
    for (int i=0; i<11; i++){
      character1.Accelerate();
      character2.Accelerate();
      character3.Accelerate();
      character4.Accelerate();
      fichier << "Char1 : " << character1.speed()<< " - Char2 : " << character2.speed()<< " - Char3 : " << character3.speed()<<" - Char4 : " << character4.speed()<< endl;
    }
    for (int i=0; i<11; i++){
      character1.Break();
      character2.Break();
      character3.Break();
      character4.Break();
      fichier << "Char1 : " << character1.speed()<< " - Char2 : " << character2.speed()<< " - Char3 : " << character3.speed()<<" - Char4 : " << character4.speed()<< endl;
    }
    fichier.close();
  }
  else
    cerr << "Impossible d'ouvrir le fichier !" << endl;


  printf("Character 1 speed : %f\n", character1.speed());
  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 3 speed : %f\n", character3.speed());
  printf("Character 4 speed : %f\n", character4.speed());
  printf("\n" );  

  character1.WhatAmI();
  character2.WhatAmI();



  return 0;
}
