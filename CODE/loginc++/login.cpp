#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isloggedin(){
    string username, password, un,pw;
    cout<<"enter username: ";cin>>username;
    cout<<"enter password: ";cin>>password;
    
    ifstream read("E:\\"+ username +", txt");
    getline(read, un);
    getline(read,pw);

    if (un==username && pw==password){
        return true;
    }
    else {
        return false;
     }
}
int main (){

    int choice;
    cout<<"1: register"<<endl;
    cout<<"your choice: ";cin>>choice;
    
if (choice==1){
string username , password;
cout<<"select a username: ";cin>>username;
cout<<"select a password ";cin>>password;

ofstream file;
file.open("C:\\"+ username +".txt");
file<<username<<endl<<password;  
file.close();
main();
}
else if(choice==2)
{
    bool status = isloggedin();
    if  (status){
        cout<<"false login"<<endl;
        system("PAUSE");
        return 0;
    }
    else {
        cout<<"sucessfully logged in! "<<endl;
        system("PAUSE");
        return 1;
    }
}
}
