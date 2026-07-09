#include <iostream>
#include <string>
using namespace std;

int main(){

    int guestsNum;
    cout << "how many guests";
    cin >> guestsNum;
    if (guestsNum<=0)
    {
        cout << "at list one number ";
        return 0;
    }
    string* guests = new string[guestsNum];
    cin.ignore();
    for (int i = 0; i < guestsNum; i++)
    {
        cout << "Enter guests name:"<< (i+1);
         getline(cin, guests[i]);
    }
    for (int i = 0; i < guestsNum; i++)
    {
        cout << "\n"<< guests[i];
    }
    delete[] guests;
    return 0;
    
}
