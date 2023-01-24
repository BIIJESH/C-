#include <iostream>
using namespace std;
int main (){
    int a, b;
    char op;
    cout<<"enter a number: ";
    cin>>a;
    cout<<"enter a operator: "<<endl;
    cin>>op;
    cout<<"enter a number: ";
    cin>>b;
    if (op== '+')
    {
        cout<<"the sum is:"<<a+b;
    }
    else if (op=='-')
    {
        cout<<"the substraction is: "<<a-b;
    }
 else
 {
    cout<<"invalid request sorry";
 }
 
    
    
    
    return 0;

}