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



// Question 5

//q5_0

// implement constructor that takes 2 numbers as input parameters

// implement a copy constructor

// implement an assignment operator

//q5_1 complex++

//q5_2 --complex

//q5_3 complex1 > complex2

//q5_4 complex * (an float number)

//q5_5 complex1 += complex2

//q5_6 complex2 += (an float number)

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
