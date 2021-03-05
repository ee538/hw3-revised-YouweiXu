#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q2_Student, default_cons) {
  Point p;

  int actualX = p.GetX();
  int actualY = p.GetY();
  int expectedX = 0;
  int expectedY = 0;
  
  EXPECT_EQ(expectedX, actualX);
  EXPECT_EQ(expectedY, actualY);
}

TEST(Q2_Student, parametered_cons) {
  Point p(3);

  int actualX = p.GetX();
  int actualY = p.GetY();
  int expectedX = 3;
  int expectedY = 0;
  
  EXPECT_EQ(expectedX, actualX);
  EXPECT_EQ(expectedY, actualY);
}

TEST(Q2_Student, copy_cons) {
  //Point p2;
  Point p2(6);
  Point p3 = p2;

  int actualX = p3.GetX();
  int actualY = p3.GetY();
  int expectedX = 6;
  //int expectedX = 0;
  int expectedY = 0;
  
  EXPECT_EQ(expectedX, actualX);
  EXPECT_EQ(expectedY, actualY);
}