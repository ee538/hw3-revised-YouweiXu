#include "cpplib.h"
#include "limits"

// Question 2
Point::Point(){
    x = 0;
    y = 0;
} 

Point::Point(int z){
    x = z;
    y = 0;
}

Point::Point(const Point &p){
    x = p.GetX();
    y = p.GetY();
}

Point::~Point(){
    std::cout << "Destructor is called!" << std::endl;
}

// Question 3
std::set<std::set<int>> CPPLib::twoSum(std::vector<int>& input, int sum){
    std::set<int> s; 
    std::set<int> pair;
    std::set<std::set<int>> output; 

    //sort 
    for (const int x : input){
        s.insert(x);
    }   
    
    //use two iterators, one from the front and the other from the end 
    std::set<int> ::iterator it = s.begin();
    std::set<int> ::iterator iter = s.end();
    while(*it < *iter){
        int SUM = *it + *iter;
        if( SUM < sum)
            it++;
        else if( SUM > sum)
            iter--;
        else{
            pair.insert(*it);
            pair.insert(*iter);
                
            output.insert(pair);
            pair.erase(*it);
            pair.erase(*iter);
            it++;
            iter--;
        }
    }
    return output;
}


// Question 4
Student_shallow::Student_shallow(){
    id = new int;
    //*id = 0;
}

Student_shallow::Student_shallow(int i){
    id = new int;
    *id = i;
}

// Student_shallow::Student_shallow(const Student_shallow&s){
//     id = new int;
//     *id = *s.id;
// }

Student_deep::Student_deep(){
    
    //int a = 0;
    //id = &a;

    id = new int;
    //*id = 0;
}

Student_deep::Student_deep(int i){
    //id = &i;
    id = new int;
    *id = i;
}

Student_deep::~Student_deep(){
    delete id;
    std::cout << "Delete Student_deep!" << std::endl;
}

Student_deep::Student_deep(const Student_deep&s){
    id = new int;
    *id = *s.id;
}

Student_deep& Student_deep::operator=(const Student_deep&s){
    return *this;
}


// Question 5
//q5_0
Complex::~Complex(){};

// implement constructor that takes 2 numbers as input parameters
Complex::Complex(float r, float i){
    real = r;
    ima = i;
}
// implement a copy constructor
Complex::Complex(const Complex &cmp){
    real = cmp.real;
    ima = cmp.ima;
}
// implement an assignment operator
Complex& Complex::operator=(const Complex &cmp){
    real = cmp.real;
    ima = cmp.ima;
    return *this;
}

//q5_1 complex++
Complex& Complex::operator++(const int cmp) {
    real = real + 1;
    return *this;
}
//q5_2 --complex 
Complex& Complex::operator--(const int cmp) {
    real = real - 1;
    return *this;
}
//q5_3 complex1 > complex2
bool Complex::operator>(const Complex &cmp2) {
    int sqrt1 = real*real + ima*ima;
    int sqrt2 = cmp2.real * cmp2.real + cmp2.ima * cmp2.ima;

    if(sqrt1>sqrt2)
        return true;
    else
        return false;
}
//q5_4 complex * (an float number)
Complex& Complex::operator*(float n) {
    real = real * n;
    ima  = ima * n;
    return *this;
}
//q5_5 complex1 += complex2
Complex& Complex::operator+=(const Complex &cmp2) {
    real = real + cmp2.real;
    ima  = ima + cmp2.ima;
    return *this;
}
//q5_6 complex2 += (an float number)
Complex& Complex::operator+=(const float n) {
    real = real + n;
    return *this;
}


// Question 6
bool CPPLib::CheckValidExpression(const std::string& a){
   std::stack <char> Stack;

   for(int i=0; i <= a.size()-1; i++){
       if( (a[i] == 40) || (a[i] == 91) || (a[i] == 123) )
            Stack.push(a[i]);
        else{
            if( (a[i] == 41) && (Stack.top() == 40) )
                Stack.pop();
            else if( (a[i] == 93) && (Stack.top() == 91) )
                Stack.pop();
            else if ( (a[i] == 125) && (Stack.top()== 123) )
                Stack.pop();
        }

   }
   if(Stack.empty()) 
       return true;
   else
       return false;
}
