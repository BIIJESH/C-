#include<iostream>

using namespace std;

//int c= 45;

int main(){
//int a, b, c;
//cout<<"enter the value of a:"<<endl;
//cout<<"enter the value of b:"<<endl;

//cout<<" enter the value of a:"<<endl;
//cin>>a;
// cin>> funtion is to take input from user
//cout<<"enter the value of b:"<<endl;
//cin>>b;

// c= a + b;
// cout<<"the value of c is: "<<c<<endl;

// :: to take  global variable
//cout<<"the global c is "<<::c;
// f = float , l = long double

//********* float double and long double literals********
//float f = 34.4;
//long double e =34.4;
//cout<<"the size of f is "<<sizeof(f)<<endl;
//cout<<"the size of e is "<<sizeof(e)<<endl;

//******* reference variables*************
//float x =455;
//float & y =x;
//cout<<x<<endl;
//cout<<y<<endl;

//**********type casting***********
int a = 45;
float b = 45.68;
cout<<"the value of a is : "<<(float)a<<endl;
cout<<"the value of a is : "<<(float)a<<endl;

cout<<"the value of b is : "<<(int)b<<endl;
cout<<"the value of b is : "<<(int)b<<endl;

int c = int(b);

cout<<"the expression is "<<a + b<<endl;
cout<<"the expression is "<<a +int(b)<<endl;
cout<<"the expression is "<<a +(int)b<<endl;

return 0;


}