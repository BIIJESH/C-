#include <iostream>
using namespace std;

int main (){
int num1=10;
int num2=20;
cout<<" before swap: "<<num1<<" "<<num2<<endl;
num2=num1+num2;
//num2=10+20=30;
num1=num2-num1;
//num1=30-10=20;
num2=num2-num1;
//num2=30-20=10;
cout<<"after swap : "<<num1<<" "<<num2;

    return 0; 
}