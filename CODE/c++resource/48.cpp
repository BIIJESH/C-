#include<iostream>
using namespace std;
int main (){
int num1, num2;
cout<<"enter first num: ";
cin>>num1;
cout<<"enter second num: ";
cin>>num2;
cout<<"before swap: "<<num1<<" "<<num2<<endl;
num2=num1+num2;
num1=num2-num1;
num2=num2-num1;
cout<<"after swap: "<<num1<<" "<<num2;
    return 0;
}