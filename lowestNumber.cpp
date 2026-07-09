#include <iostream>
using namespace std;
int main(){
    int num[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int lowestNumber = num[0];
    for(int number : num){
       if(lowestNumber > number){
          lowestNumber = number ;
       }
    }
    cout << lowestNumber;
    return 0;
}
