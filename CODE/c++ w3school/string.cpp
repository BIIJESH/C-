#include <string>
#include <iostream>
using namespace std;
int main (){
string greeting ="hello";
cout<<greeting<<endl;
// string concatenation
string firstname ="bijesh";
string lastname ="ghimire";
string fullname =firstname + lastname ;
cout<<fullname<<endl;


//adding space in firstname and last name(name+" "+lastname)
//need to add space in " here "
string fname="ishow";
string lname="speed";
string foname=fname+" "+lname;
cout<<foname<<endl;

//using append append is also for concatenation of strings
string f1name = "bigya";
string l2name= "ghimire";
string f22name= f1name.append(l2name);
cout<<f22name;




    return 0;
}