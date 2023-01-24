#include <iostream>
using namespace std;

int main(){

bool ismale =false;
bool istall =false;
if (ismale || istall)
{
    cout<<"you are a tall male";
}
else if (ismale && !istall){
    cout<<"you are a short male";
}

 else if (!ismale && istall) {
    cout<<"you are not male";
}
else {
    cout<<"you are not male and not tall";
}


return 0;

}