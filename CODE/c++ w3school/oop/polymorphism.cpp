#include <iostream>
using namespace std;
class poly
{
public:
string name;
int id;
    void bijesh (string n){
    this->name=n;
    cout<<name<<endl;
    }
//void bijesh is the same function but with different programs this is polymorphism
void bijesh(int idn){
    this->id=idn;
    cout<<id;
}
};
//inorder to access the class first we need to create an object than use the class with function
int main(){
poly h1;
h1.bijesh("biejsh");
    return 0;
}