#include "BowlingScore.h"

void BowlingScore::AddFrame( const Frame& frame )
{
   _frames[_frameCount++] = frame;
}

int BowlingScore::GetScore() const
{
   int result = 0;
   for ( int i = 0; i < _frameCount; i++ )
   {
      if ( i >= 10 )
         break;

      result += _frames[i].FirstRoll();
      result += _frames[i].SecondRoll();

      bool addNextRoll = _frames[i].IsStrike();

      if ( addNextRoll )
      {
         bool rolledAnotherRoll = ( i + 1 ) < _frameCount;
         if ( rolledAnotherRoll )
         {
            result += _frames[i + 1].FirstRoll();
            result += _frames[i + 1].SecondRoll();

            bool nextRollWasStrike = _frames[i + 1].IsStrike();
            if ( nextRollWasStrike && ( ( i + 2 ) < _frameCount ) )
            {
               result += _frames[i + 2].FirstRoll();
            }
         }
      }
   }

   return result;
}
