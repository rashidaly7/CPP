#include <iostream>
using namespace std;
int fact(int k){
    if(k>1){
        return k*fact(k-1);
    }
    else{
        return 1;
    }
}
int main(){
    cout <<"factorial Number: "<< fact(5);
    return 0;
}

