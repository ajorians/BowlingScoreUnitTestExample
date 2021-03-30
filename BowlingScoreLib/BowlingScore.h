#pragma once

#include <Frame.h>

class BowlingScore
{
public:
   void AddFrame( const Frame& frame );

   int GetScore() const;

private:
   Frame _frames[12];
   int _frameCount = 0;
};
