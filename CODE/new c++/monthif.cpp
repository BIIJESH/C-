#include <iostream>
using namespace std;
int main(){
int date;
cout<<"enter a date"<<endl;
cin>>date;
switch (date)
{case 1:
date=3,10,17,24,31;
cout<<"sunday";
break;
case 2:
date=4,11,18,25;
cout<<"monday";
return date;
}

    return 0;
}