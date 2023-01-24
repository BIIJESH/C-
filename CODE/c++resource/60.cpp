#include <iostream>
#include <math.h>
using namespace std;

int main (){
long b1 , b2  ;
int i=0 , r=0;
int sum[20];
cout << " Input the 1st binary number: ";
	cin>> b1;
	cout << " Input the 2nd binary number: ";
	cin>> b2;
while (b1 != 0 || b2 != 0){
sum[i++] =(int) ((b1 % 10 + b2 % 10 + r )/2);
b1 = b1 / 10;
b2 = b2 / 10;
}

if (r  != 0);{
sum [i++] =r;
}
--i;
cout<<"the sum of two binary numbers are: "<<endl;
while (i >= 0){
cout<<(sum [i--]);
}
cout<<endl;

    return 0;
}