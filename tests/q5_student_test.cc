#include "src/lib/cpplib.h"

#include <map>
#include <vector>
#include<iomanip>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q5_Student, plus) {
  Complex c1(1.5,2);
  c1++;
  Complex c(2.5,2);
    
  std::vector<float> expected = {c.real, c.ima};
  std::vector<float> actual = {c1.real, c1.ima};
    
  EXPECT_EQ(expected, actual);
}

TEST(Q5_Student, miuns) {
  Complex c1(1,2);
  c1--;
  Complex c(0,2);
    
  std::vector<float> expected = {c.real, c.ima};
  std::vector<float> actual = {c1.real, c1.ima};
    
  EXPECT_EQ(expected, actual);
}

TEST(Q5_Student, compare) {
    
  Complex c1(2.2,2);
  Complex c2(3,1.5);
    
  bool expected = false;
  bool actual = (c1 > c2)? true : false;

  EXPECT_EQ(expected, actual);
}

TEST(Q5_Student, mutiply) {

  Complex c1(2,7);
  Complex c2 = c1 * 3;
  Complex c(6,21);

  std::vector<float> expected = {c.real, c.ima};
  std::vector<float> actual = {c2.real, c2.ima};  

  EXPECT_EQ(expected, actual);
}

TEST(Q5_Student, plus_equal) {

  Complex c1(4.7,3.1);
  Complex c2(2.3,1);
  Complex c3 = (c1 += c2);
       
  Complex c(7,4.1);
    
  std::vector<float> expected = {c.real, c.ima};
  std::vector<float> actual = {c3.real, c3.ima};
       
  EXPECT_EQ(expected, actual);
}

TEST(Q5_Student, pluse_qual_float) {

  Complex c1(4.3,3);
  Complex c2 = (c1 += 1);
    
  Complex c(5.3,3);
    
  std::vector<float> expected = {c.real, c.ima};
  std::vector<float> actual = {c2.real, c2.ima};
    
  EXPECT_EQ(expected, actual);
}