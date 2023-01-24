#include <iostream>
using namespace std;

double bij(){
    double a, b;
    cout<<"enter a number :";
    cin>>a;
    cout<<"enter number 2 :";
    cin>>b;
    if (!(a<b)){
        cout<<"true"<<endl;
    }
    else 
    {
        cout<<"false"<<endl;
    }
    return 0;
}
int main(){

string name;
cout<<"enter your name"<<endl;
getline (cin ,name);
cout<<"your name is: "<<name<<endl;
bij();
bij();

    return 0;
}