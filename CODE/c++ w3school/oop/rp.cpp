#include <iostream>
using namespace std;
class teacher{
public:
string name;
int idn;
void show (string n, int id){
this->name=n;
this->idn=id;
cout<<"the name is "<<n<<endl;
cout<<"your id is "<<id<<endl;

}


};
//object bata matra access lina milcha class ko method haru 
int main(){
    teacher h1;
h1.show("bijesh",10);

    return 0;
}