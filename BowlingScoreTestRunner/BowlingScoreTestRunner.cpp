#include <gmock/gmock.h>

int main( int argc, char* argv[] )
{
   ::testing::InitGoogleTest( &argc, argv );

   int result = RUN_ALL_TESTS();

#ifdef _DEBUG
   std::cout << "\nPress enter to continue...";
   std::cin.get();
#endif

   return result;
}
