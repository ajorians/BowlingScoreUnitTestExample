#include "Frame.h"

Frame::Frame( int firstRoll, int secondRoll )
   : _firstRoll( firstRoll )
   , _secondRoll( secondRoll )
{}

int Frame::FirstRoll() const { return _firstRoll; }
int Frame::SecondRoll() const { return _secondRoll; }

bool Frame::IsStrike() const { return FirstRoll() == 10; }
