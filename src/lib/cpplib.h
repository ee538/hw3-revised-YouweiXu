#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>
#include <set>
#include <stack>
#include <unordered_map>
#include <iostream>

using namespace std;

class CPPLib {
 public:
  //q3
  std::set<std::set<int>> twoSum(std::vector<int>& input, int sum);
  //q6
  bool CheckValidExpression(const std::string& a);
};

//q2
class Point{	
private:	
    int x;	
    int y;	
public:	
    Point();	
    Point(int);	
    Point(const Point &p);	
    ~Point();

    int GetX() const {return x;};
    int GetY() const {return y;};
    	 	
};

// q4
class Student_shallow
{
public:
    int* id;
    Student_shallow();
    Student_shallow(int i);
    // Student_shallow(const Student_shallow&s);
};

class Student_deep
{
public:
    int* id;
    Student_deep();
    Student_deep(int i);
    ~Student_deep();
    Student_deep(const Student_deep&s);
    Student_deep& operator=(const Student_deep&s);
};

//q5
class Complex{
 public:

  // default constructor
  Complex():real(0), ima(0){};
  // default destructor
  ~Complex();
  // implement constructor that takes 2 numbers as input parameters
  Complex(float r, float i);
  // implement a copy constructor
  Complex(const Complex &cmp);
  // implement an assignment operator
  Complex& operator=(const Complex &cmp);
  // define real and imaginary part
  float real;
  float ima;

  // below here, we assume complex1, complex2 are instances of Complex.
  // define your functions to enable operator overloadings.

  //q5_1 complex++
  Complex& operator++(const int cmp);
  //q5_2 --complex
  Complex& operator--(const int cmp);
  //q5_3 complex1 > complex2
  bool operator>(const Complex &cmp2);
  //q5_4 complex * (an float number)
  Complex& operator*(float n);
  //q5_5 complex1 += complex2
  Complex& operator+=(const Complex &cmp2);
  //q5_6 complex2 += (an float number)
  Complex& operator+=(const float n);
};

#endif
