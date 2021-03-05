#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q6_Student, CheckValidExpression_test1) {
  CPPLib cpplib;
  std::string a = "(a+b)";
  
  bool expected = 1;
  bool actual = cpplib.CheckValidExpression(a);
  EXPECT_EQ(expected, actual);
}

TEST(Q6_Student, CheckValidExpression_test2) {
  CPPLib cpplib;
  std::string a = "(a+b)[c*d]{5g+h}";
  
  bool expected = 1;
  bool actual = cpplib.CheckValidExpression(a);
  EXPECT_EQ(expected, actual);
}

TEST(Q6_Student, CheckValidExpression_test3) {
  CPPLib cpplib;
  std::string a = "(7h+[5c)+7]";
  
  bool expected = 0;
  bool actual = cpplib.CheckValidExpression(a);
  EXPECT_EQ(expected, actual);
}