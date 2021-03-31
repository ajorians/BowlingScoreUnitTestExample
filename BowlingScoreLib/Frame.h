#pragma once

class Frame
{
public:
   constexpr Frame() = default;

   constexpr Frame( int firstRoll, int secondRoll )
      : _firstRoll( firstRoll )
      , _secondRoll( secondRoll )
   {}

   constexpr int FirstRoll() const { return _firstRoll; }
   constexpr int SecondRoll() const { return _secondRoll; }

   constexpr bool IsStrike() const { return FirstRoll() == 10; }

private:
   int _firstRoll = 0;
   int _secondRoll = 0;
};
