
// ===========================================================================
//                                  Includes
// ===========================================================================
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

#include <vector>
#include <list>

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
  Yoshi*       character1 = new Yoshi(0,Yoshi::BLUE);
  Yoshi*       character2 = new Yoshi(0,Yoshi::GREEN);
  Mario*       character3 = new Mario(0,Mario::BLUE);
  Mario*       character4 = new Mario(2,Mario::RED);

  
  //std::vector<Character*>

  std::vector<Character*> v;
  // vector v manipulant des entiers(type Character*)
  v.push_back(character1); // Empile l'entier 1
  v.push_back(character2); 
  v.push_back(character3); 
  v.push_back(character4); 
  
  for (int i=0; i<5; i++) {
    std::cout << "Address in Vector: "<<v[i] << endl; 
  }
  
  
  printf("\n" );  
  printf("What Am I? with Iterator for the Vector : \n");
  std::vector<Character*>::iterator it1 = v.begin();
  for (it1 = v.begin(); it1!=v.end(); it1++){
  (*it1)->WhatAmI(); 
  }
  
  
  printf("\n" );  
  printf("What Am I? with \'range-based for\' for the Vector : \n");
  for (Character* d : v) { d->WhatAmI(); } // syntaxe de base
  for (auto d : v) { cout << "Address with \'auto\': " << d << endl;}
   // utilisation du mot clé auto

   
  std::list<Character*> l;
  l.push_back(character1); // Empile l'entier 1
  l.push_back(character2); 
  l.push_back(character3); 
  l.push_back(character4);
  
  printf("\n" );  //for (i) doesn't work for list !
  printf("What Am I? with Iterator for the List : \n");
  std::list<Character*>::iterator it = l.begin();
  for (it = l.begin(); it!=l.end(); it++){
  (*it)->WhatAmI(); 
  }
  
  printf("\n" );  
  printf("What Am I? with \'range-based for\' for the List : \n");
  for (Character* d : l) { d->WhatAmI(); } // syntaxe de base
  for (auto d : l) { cout << "Address with \'auto\': " << d << endl;}
   // utilisation du mot clé auto


 
 
 
  /*for (int i=0; i<5; i++) {
    std::cout << l[i] << endl; 
  }*/

  ofstream fichier("Speed.txt", ios::out | ios::trunc); 
// ouverture en écriture avec effacement du fichier ouvert

  if (fichier) {
    for (int i=0; i<11; i++){
      character1->Accelerate();
      character2->Accelerate();
      character3->Accelerate();
      character4->Accelerate();
      fichier << "Char1 : " << character1->speed()<< " - Char2 : "
        <<character2->speed()<<" - Char3 : "<< character3->speed()<<
        " - Char4 : "<< character4->speed()<< endl;
    }
    for (int i=0; i<11; i++){
      character1->Break();
      character2->Break();
      character3->Break();
      character4->Break();
      fichier << "Char1 : " << character1->speed()<< " - Char2 : "
        <<character2->speed()<<" - Char3 : "<< character3->speed()<<
        " - Char4 : "<< character4->speed()<< endl;    }
    fichier.close();
  }
  else
    cerr << "Impossible d'ouvrir le fichier !" << endl;

  printf("Character 1 speed : %f\n", character1->speed());
  printf("Character 2 speed : %f\n", character2->speed());
  printf("Character 3 speed : %f\n", character3->speed());
  printf("Character 4 speed : %f\n", character4->speed());
  printf("\n" );  

  character1->WhatAmI();
  character2->WhatAmI();

  delete character1;
  delete character2;
  delete character3;
  delete character4;


  return 0;
}
