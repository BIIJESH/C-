#include <iostream>
using namespace std;
void sayhi        (string name ){
     //[funcname] [parameter]
    cout<<"enter your name :";

getline(cin,name);
cout<<"your full name is :"<<name<<endl;    
}
 int main(){
sayhi("name");



    return 0;
}