#include<iostream>
using namespace std;
//defining function outside the class
class myclass //the class
{
public:       //access specifier
void mymethod();//method /function declaration
};

// method fucntion declaration outside the class
void myclass::mymethod(){
    cout<<"hello bijesh";
}

int main (){
myclass myobj;  //create an object

myobj.mymethod();  //call the method

return 0;


}