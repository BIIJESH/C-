#include <iostream>
using namespace std;

string nameofday(int day){
    cout<<"enter the day: ";
    cin>>day;
    string dayname;//what does this do try removing it to see the differnece
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

return dayname;

}
int main(){

nameofday(1);


    return 0;
}