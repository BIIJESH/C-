#include <iostream>
using namespace std;

int main(){
int num1 ,num2;
char op;
int result;
cout<<"enter first number: ";
cin>>num1;
cout<<"enter a operator: ";
cin>>op;
cout<<"enter second number: ";
cin>>num2;

if (op=='+' )
{
    result =num1+num2;
    cout<<"the sum is: "<<result;
}

else if (op=='-'){
    result =num1-num2;
    cout<<"the subtraction is: "<<result;
}

else if (op=='*'){
result =num1*num2;
cout<<"the multiplication is: "<<result;
}

else{
    cout<<"invalid operator";
}



    return 0;
}