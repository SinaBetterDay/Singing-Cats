#pragma once
#include "PlayableCharacter.h"
class Jeff : public PlayableCharacter
{
public:
  // A constructor specific to Bob
  Jeff::Jeff();
  // The overriden input handler for Bob
  bool virtual handleInput();
};
