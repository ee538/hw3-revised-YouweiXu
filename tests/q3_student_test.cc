#include "src/lib/cpplib.h"

#include <map>
#include <vector>
#include <set>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q3_Student, twoSum_test1) {
  CPPLib cpplib;
  std::vector<int> input = {2,3,4,5};
  int sum = 7;

  std::set<std::set<int>> expected = {{2,5},{3,4}};
  std::set<std::set<int>> actual = cpplib.twoSum(input,sum);

  EXPECT_EQ(expected, actual);
}

TEST(Q3_Student, twoSum_test2) {
  CPPLib cpplib;
  std::vector<int> input = {2,3,-2,5,0};
  int sum = 0;

  std::set<std::set<int>> expected = {{2,-2}};
  std::set<std::set<int>> actual = cpplib.twoSum(input,sum);

  EXPECT_EQ(expected, actual);
}

TEST(Q3_Student, twoSum_test3) {
  CPPLib cpplib;
  std::vector<int> input = {1,5,4,10};
  int sum = 200;

  std::set<std::set<int>> expected = {};
  std::set<std::set<int>> actual = cpplib.twoSum(input,sum);

  EXPECT_EQ(expected, actual);
}