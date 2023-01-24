#include <iostream>
using namespace std;

string getdayofweek(int daynum){
    string dayname;
    cout<<"enter a day: ";
    cin>>daynum;
   switch(daynum){
    case 0:
    dayname="sunday";
    cout<<dayname;
    break;
    case 1:
    dayname="monday";
    cout<<dayname;
    break;
    case 2:
    dayname="tuesday";
    cout<<dayname;
    break;
    case 3:
    dayname="wednesday";
    cout<<dayname;
    break;
    case 4:
    dayname="thursday";
    cout<<dayname;
    break;
    case 5:
    dayname="friday";
    cout<<dayname;
    break;
    case 6:
    dayname="saturday";
    cout<<dayname;
    break;
    default:
    dayname="invalid day";
    cout<<dayname;
   }
    return dayname;



}
int main (){

getdayofweek(1);
return 0;
}