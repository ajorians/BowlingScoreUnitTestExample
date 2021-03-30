#include <BowlingScore.h>

#include <gtest/gtest.h>

using namespace testing;

class BowlingScoreTests : public testing::Test {};

BowlingScore CreateScoreWithPerfectGame()
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
   BowlingScore b = CreateScoreWithPerfectGame();
   ASSERT_EQ( b.GetScore(), 300 );
}
