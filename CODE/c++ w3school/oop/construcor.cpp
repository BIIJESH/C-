#include <iostream>
using namespace std;

class teacher{
public:
string name;
int idn;
void show (string n , int id){
    this->name=n;
    this->idn=id;
cout<<"the name is "<<n<<endl;
cout<<"And your id is "<<id;
}
//this is an constructor where you can pass value directly to class also constructor is made inside a class
teacher(string n , int id){
this->name=n;
this->idn=id;
cout<<name<<endl;
cout<<id;
}
};

 

int main(){
    teacher h1("bijesh",10);
     //name written after class is object
    //object is an implementation or an instance of a class
    
    
    
    return 0;

}