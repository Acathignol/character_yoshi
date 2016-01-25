#include <cstdlib> 
#include <iostream>
#include <stdio.h>
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Character.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================
  float Character:: nb_instance =0;
  
// ===========================================================================
//                                Constructors
// ===========================================================================
Character::Character() {
  speed_     = 0.;
  max_speed_ = 10.;
  Character::nb_instance ++;
  std::cout <<nb_instance<<std::endl;
}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Character::~Character() {
  Character::nb_instance --;
  std::cout <<nb_instance<<std::endl;
}

// ===========================================================================
//                               Public Methods
// ===========================================================================
void Character::Accelerate() {
  if (speed_ == 0.) speed_ = 0.1;
  else speed_ *= 1.1;

  if ( speed_ > max_speed_ ) speed_ = max_speed_;
}

void Character::Break() {
  if (speed_ < 0.1) speed_ = 0.;
  else speed_ *= 0.9;
}

//void WhatAmI(){
//	std::cout<<"Yoshi"<<std::endl;
//}
	
// ===========================================================================
//                              Protected Methods
// ===========================================================================
