#include <BowlingScore.h>

#include <gtest/gtest.h>

using namespace testing;

class BowlingScoreTests : public testing::Test {};

constexpr BowlingScore CreateScoreWithPerfectGame()
{
   BowlingScore bowlingScore;
   for( int i=0; i<12; i++)
   {
      bowlingScore.AddFrame( Frame(10, 0) );
   }

   return bowlingScore;
}

TEST_F( BowlingScoreTests, GetScore_PerfectGame_ScoreIs300 )
{
   constexpr BowlingScore b = CreateScoreWithPerfectGame();
   static_assert( b.GetScore() == 300, "Perfect game should have score of 300 :(" );
}
