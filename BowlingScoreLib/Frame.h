#pragma once

class Frame
{
public:
   Frame() = default;

   Frame( int firstRoll, int secondRoll );

   int FirstRoll() const;
   int SecondRoll() const;

   bool IsStrike() const;

private:
   int _firstRoll = 0;
   int _secondRoll = 0;
};
