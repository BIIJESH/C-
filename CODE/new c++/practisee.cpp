#include <iostream>
using namespace std;

int main() {
//FULL NAME

// string fname;
// cout<<"enter your fname: ";
// getline (cin,fname);
// cout<<"your fullname is: "<<fname;

//TABLE

// int num=2;
// for (int i = 0; i <=10; i++)
// {
//     cout<<num*i<<endl;
// }

//switch case
int day;
cout<<"enter a day:";
cin>>day;

switch (day)
{
case 1:
    cout<<"sunday";
    break;

case 2:
cout<<"Monday";
break;

case 3:
cout<<"tuesday";
break;

case 4:
cout<<"wednesday";
break;

case 5:
cout<<"thursday";
break;

case 6:
cout<<"friday";
break;

case 7:
cout<<"saturday";
break;

default:
cout<<"invalid day";
    break;
}







    return 0;
}