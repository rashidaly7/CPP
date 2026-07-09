#include <iostream>
using namespace std;
int main (){
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int avr , sum = 0;
    avr = sizeof(ages)/sizeof(ages[0]);
    for(int age: ages){
        sum += age;
    }
    int i = sum/avr;
    cout << i;
    return 0;

}
