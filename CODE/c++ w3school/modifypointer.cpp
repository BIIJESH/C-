#include <iostream>
#include <string>

using namespace std;
int main(){
string food="pizza";
string* ptr=&food; //& is for printing the memory address of a food
//outputs the value of food (pizza) 
cout<<food<<endl;

//outputs the memory address of food
cout<<&food<<endl;

//access the memory address of food and output its value (pizza)
cout<<*ptr<<endl;

// changed the value of the pointer 
*ptr="hamburger";

//outputs the value of the pointer (hamburger)
cout<<*ptr<<endl;

//outputs the new value of the food variable (hamburger)
    cout<<food;
    return 0;

}