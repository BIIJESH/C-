#include<iostream>
using namespace std;
 int main (){
 int age;
cout<<"tell me your age"<<endl;
cin>>age;

// selection control structure:if-else-else if ladder
if((age<18) && (age>0)) {
    cout<<"you  cannot  come to my party"<<endl;
    
    }

 else if (age==18){
 cout<<"you can also come to my party"<<endl;
 }

else if  (age>18){ 
    cout<<"you can come to my party"<<endl;

}
else if (age<1){
    cout<<"you are not born yet"<<endl;

}
// selection control structure: switch case statement
// remove break if you want to see the difference


switch (age)
{
case 18:
    cout<<"you are 18"<<endl;
    break;
case 22:
    cout<<"you are 22"<<endl;
    break;
    case 2:
    cout<<"you are 2"<<endl;

default:
 cout<<"no special cases"<<endl;

    break;
}
cout<<"done with switch case";












return 0;

}