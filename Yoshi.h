
#ifndef YOSHI_H__
#define YOSHI_H__

// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Character.h"


class Yoshi : public Character {
 public :
 
  enum Colour {RED,GREEN,BLUE};
 
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Yoshi(Colour colour_);

  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Yoshi();

  // =========================================================================
  //                                  Getters
  // =========================================================================

  // =========================================================================
  //                                  Setters
  // =========================================================================

  // =========================================================================
  //                                 Operators
  // =========================================================================

  // =========================================================================
  //                              Public Methods
  // =========================================================================
  virtual void Accelerate();
  void Break();
  virtual void WhatIAm();

 protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
  static float nb_instance; 
  Colour colour_;
};

// ===========================================================================
//                            Getters' definitions
// ===========================================================================

// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================


#endif // YOSHI_H__
