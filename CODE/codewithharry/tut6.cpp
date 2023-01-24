#include <iostream>
// there are two types of header files
//1  system header files; it comes with compiler
 //2 user defined header files; it is written by the programmer
 // #include "thi.h" --> this will produce an error if this.h is not present in current directory 

 
using namespace std;

int main(){
int a=4 , b=5;
cout<<"operators in c++:"<<endl;
cout<<"following are the types of opertaors in c++:"<<endl;
// arithmetic operators
cout<<"the value of a + b is "<<a+b<<endl;  
cout<<"the value of a - b is "<<a-b<<endl;
cout<<"the vaue of a * b is "<<a*b<<endl;
cout<<"the value of a / b is "<<a/b<<endl;
cout<<"the value of a % b is "<<a%b<<endl;
cout<<"the value of a ++ is "<<a++<<endl;
cout<<"the value of a -- is "<<a--<<endl;
cout<<"the value of ++a is "<<++a<<endl;
cout<<"the value of --a is "<<--a<<endl;
cout<<endl;

//assignment operators --> used to assign values to variables
// int a=3, b=9;
//char d='abc';

// comparison opertaors (doubt)
cout<<"following are the types of comparison operators in c++"<<endl; 
cout<<"the value of a == b is "<<(a==b)<<endl;
cout<<"the value of a != b is "<<(a!=b)<<endl;
cout<<"the value of a >= b is "<<(a>=b)<<endl;
cout<<"the value of a <= b is "<<(a<=b)<<endl;
cout<<"the value of a < b is "<<(a<b)<<endl;
cout<<"the value of a > b is "<<(a>b)<<endl;

cout<<endl;

// logical operators (doubt)  && both condition must be true
// or means one must be true
cout<<"following are the logical operators in c++"<<endl;
cout<<"the value of this logical and operator ((a=b)) && ((a<b)) is: "<<((a==b) && (a<b))<<endl;
cout<<"the value of this logical or operator ((a==b) || (a,b)) is:"<<((a==b) || (a<b))<<endl;
cout<<"the value of this logical not operator (!(a==b)) is:"<<!(a==b)<<endl;



 
 return 0;


}