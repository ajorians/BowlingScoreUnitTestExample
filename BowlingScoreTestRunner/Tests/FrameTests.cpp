#include <Frame.h>

#include <gtest/gtest.h>

using namespace testing;

class FrameTests : public testing::Test {};

TEST_F( FrameTests, Constructor_NoArguments_FirstRollZero )
{
   constexpr Frame f;

   static_assert( f.FirstRoll() == 0, "Default constructed should have first roll of 0 :(" );
}

TEST_F( FrameTests, Constructor_NoArguments_SecondRollZero )
{
   constexpr Frame f;

   static_assert( f.SecondRoll() == 0, "Default constructed should have second roll of 0 :("  );
}

TEST_F( FrameTests, Constructor_FirstRollTwo_FirstRollTw0 )
{
   constexpr Frame f( 2, 4 );

   static_assert( f.FirstRoll() == 2, "Constructed with first roll of 2 should have first roll of 2 :(" );
}

TEST_F( FrameTests, Constructor_SecondRollFour_SecondRollFour )
{
   Frame f( 2, 4 );

   ASSERT_EQ( f.SecondRoll(), 4 );
}