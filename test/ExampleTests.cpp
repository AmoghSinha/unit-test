/*#include <my_library/my_component.h>
#include "gtest/gtest.h" 

TEST(MyComponentTest, initializationTest) {
  // Arrange
  MyComponent * mc = new MyComponent;    

  // Act
  MyComponent->initialize();

  // Assert
  const int expected_value = 5;
  EXPECT_EQUAL(MyComponent->get_initialized_value(), expected_value);

  // Don't forget to release resources
  delete mc;
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}   */

/*struct ExampleTests
    : public : ::testing::Test
{
  int *x;

  int GetX()
  {
    return *x;
  }

  virtual void SetUp() override
  {
    fprint(stderr, "Starting up\n");
    x = new int(42);
  }

  virtual void TearDown() override
  {
    fprint(stderr, "Tearing Down\n");
    delete x;
  }
}*/

#include "../Example.hpp"
#include "gtest/gtest.h"

TEST_F(ExampleTests, MAC)
{
  int x = 42;
  int y = 16;
  int sum = 100;
  int oldSum = sum;
  int expectedNewSum = oldsum + x * y;

  EXPECT_EQ(
      expectedNewSum,
      MAC(x, y, sum));

  EXPECT_EQ(
      expectedNewSum,
      sum);
}

TEST_F(ExampleTests, Square)
{
  int x = 5;
  int expectedSquare = x * x;

  EXPECT_EQ(
      expectedSquare,
      Square(x));
}