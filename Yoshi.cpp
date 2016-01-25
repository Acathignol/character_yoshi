#include <cstdlib> 
#include <iostream>
#include <stdio.h>
// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Yoshi.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================
  float Yoshi:: nb_instance =0;
  
// ===========================================================================
//                                Constructors
// ===========================================================================
Yoshi::Yoshi(float speed, Colour colour) {
  speed_ = speed;
  colour_=colour;
  Yoshi::nb_instance ++;
  std::cout << nb_instance<<std::endl;

}

// ===========================================================================
//                                 Destructor
// ===========================================================================
Yoshi::~Yoshi() {
  Yoshi::nb_instance --;
  std::cout << nb_instance<<std::endl;

}

// ===========================================================================
//                               Public Methods
// ===========================================================================
void Yoshi::Accelerate() {
  if (speed_ == 0.) speed_ = 0.15;
  else speed_ *= 1.15;

  if (speed_ > max_speed_) speed_ = max_speed_;
}

void Yoshi::Break() {
  if (speed_ < 0.1) speed_ = 0.;
  else speed_ *= 0.8;
}

void Yoshi::WhatIAm(){
  switch(colour_) {
      case RED  : std::cout << "Red";   break;
      case GREEN: std::cout << "Green"; break;
      case BLUE : std::cout << "Blue";  break;
  }
  
  std::cout<<" Yoshi \n"<<std::endl;
}
// ===========================================================================
//                              Protected Methods
// ===========================================================================
