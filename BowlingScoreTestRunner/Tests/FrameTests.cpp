#include <Frame.h>

#include <gtest/gtest.h>

using namespace testing;

class FrameTests : public testing::Test {};

TEST_F( FrameTests, Constructor_NoArguments_FirstRollZero )
{
   Frame f;

   ASSERT_EQ( f.FirstRoll(), 0 );
}

TEST_F( FrameTests, Constructor_NoArguments_SecondRollZero )
{
   Frame f;

   ASSERT_EQ( f.SecondRoll(), 0 );
}

TEST_F( FrameTests, Constructor_FirstRollTwo_FirstRollTw0 )
{
   Frame f( 2, 4 );

   ASSERT_EQ( f.FirstRoll(), 2 );
}

TEST_F( FrameTests, Constructor_SecondRollFour_SecondRollFour )
{
   Frame f( 2, 4 );

   ASSERT_EQ( f.SecondRoll(), 4 );
}