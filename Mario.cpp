#include <cstdlib> 
#include <iostream>
#include <stdio.h>
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Mario.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================
  float Mario:: nb_instance =0;
  
// ===========================================================================
//                                Constructors
// ===========================================================================
Mario::Mario(float speed, Colour colour) {
  speed_ = speed;
  colour_=colour;
  Mario::nb_instance ++;
  std::cout << nb_instance<<std::endl;

}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Mario::~Mario() {
  Mario::nb_instance --;
  std::cout << nb_instance<<std::endl;

}

// ===========================================================================
//                               Public Methods
// ===========================================================================
//void Mario::Accelerate() {
//  if (speed_ == 0.) speed_ = 0.15;
//  else speed_ *= 1.15;

//  if (speed_ > max_speed_) speed_ = max_speed_;
//}

void Mario::Break() {
  if (speed_ < 0.1) speed_ = 0.;
  else speed_ *= 1.2;
}

void Mario::WhatAmI(){
  switch(colour_) {
      case RED  : std::cout << "Red";   break;
      case GREEN: std::cout << "Green"; break;
      case BLUE : std::cout << "Blue";  break;
  }
  
  std::cout<<" Mario \n"<<std::endl;
}
// ===========================================================================
//                              Protected Methods
// ===========================================================================
