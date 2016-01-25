
#ifndef CHARACTER_H__
#define CHARACTER_H__

// ===========================================================================
//                                  Includes
// ===========================================================================


class Character {
 public :
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Character();

  // =========================================================================
  //                                Destructor
  // =========================================================================
  virtual ~Character();

  // =========================================================================
  //                                  Getters
  // =========================================================================
  inline float speed() const;

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
  virtual void WhatIAm()=0;

protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
  float speed_;
  float max_speed_;
  static float nb_instance; 
};


// ===========================================================================
//                            Getters' definitions
// ===========================================================================
inline float Character::speed() const {
  return speed_;
}

// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================


#endif // CHARACTER_H__
