#include <iostream>
#include <string>
using namespace std;
int main(){
string food ="pizza"; //food a variable of type string
string* ptr=&food;//a pointer variable, with the name ptr, that stores the address of food
cout<<food<<endl;//outputs the value of food
cout<<&food<<endl;//outputs the memory address of food
cout<<ptr<<endl;

// to declare pointer variables  string* mystring;
 


    return 0;
}