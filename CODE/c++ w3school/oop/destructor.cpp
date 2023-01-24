#include <iostream>
using namespace std;

class polyy
{
public:
string name;
int id;
    void bijesh (string n){
    this->name=n;
    cout<<name<<endl;
    }


~ polyy(){ //this is a destructor which still runs even though it is not called in main function also destructor and class should be of same name
    cout<<"end"<<endl;
}
};
int main(){
polyy t1;
t1.bijesh("hello");
return 0;
}