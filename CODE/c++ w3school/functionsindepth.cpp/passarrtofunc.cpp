#include <iostream>
using namespace std;
void myfunc(int mynumbers[5]){
    for(int i=0 ;i<5;i++){
        cout<<mynumbers[i]<<endl;
    }
}



int main(){
int mynumbers[5]={10,20,30,40,50};
myfunc(mynumbers);



    return 0;
}
