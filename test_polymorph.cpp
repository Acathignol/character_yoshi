
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#
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

  character1.Accelerate();
  character2.Accelerate();
  character3.Accelerate();
  character4.Accelerate();

  printf("Character 1 speed : %f\n", character1.speed());
  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 3 speed : %f\n", character3.speed());
  printf("Character 4 speed : %f\n", character4.speed());


  printf("\n" );

  character1.Break();
  character2.Break();
  character3.Break();
  character4.Break();

  printf("Character 1 speed : %f\n", character1.speed());
  printf("Character 2 speed : %f\n", character2.speed());
  printf("Character 3 speed : %f\n", character3.speed());
  printf("Character 4 speed : %f\n", character4.speed());
  
  character1.WhatAmI();
  character2.WhatAmI();



  return 0;
}
