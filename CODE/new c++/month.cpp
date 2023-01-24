#include <iostream>
using namespace std;
 int myfunc(int  date){  
     string dates;
     cout<<"enter a date: ";
      cin>>date;
switch (date) //switch date is to check multiple conditions

{
case 1:
date =3,10,17,24,31;
cout<<"sunday";
break;
case 2:
date=4,11,18,25;
cout<<"monday";
break;
case 3:
date=5,12,19,26;
cout<<"tuesday";
break;
case 4:
date=6,12,19,26;
cout<<"wednesday";
break;
case 5:
date=7,14,21,28;
cout<<"thursday";
break;
case 6:
date=1,8,15,22,29;
cout<<"friday";
break;
case 7:
date=2,9,16,23,30;
cout<<"saturday";
break;

}
    return date;
}
int main(){

cout<<"bijesh"<<endl;
myfunc(1);



    return 0;
}