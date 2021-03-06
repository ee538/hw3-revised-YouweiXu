#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
//shallow copy
TEST(Q4_Student, TEST1) {
  Student_shallow a(0);
  Student_shallow b = a;
  Student_shallow c;
  c = a;

  EXPECT_EQ(0, *a.id);
  EXPECT_EQ(0, *b.id);
  EXPECT_EQ(0, *c.id);

  *c.id = 1;

  EXPECT_EQ(1, *a.id);
  EXPECT_EQ(1, *b.id);
  EXPECT_EQ(1, *c.id);
}

//deep copy
TEST(Q4_Student, TEST2) {
  Student_deep d(0);
  Student_deep e = d;
  Student_deep f;
  f = e;

  EXPECT_EQ(0, *d.id);
  EXPECT_EQ(0, *e.id);
  EXPECT_EQ(0, *f.id);

  *e.id = 2;
  *f.id = 1;
  EXPECT_EQ(0, *d.id);
  EXPECT_EQ(2, *e.id);
  EXPECT_EQ(1, *f.id);
}

