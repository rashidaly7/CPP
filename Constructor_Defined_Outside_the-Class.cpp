#include <iostream>
using namespace std;
class studant{
     public:
     string name;
     int roll_on;
     studant(string x, int y);
};
studant::studant(string x, int y){
     name = x;
     roll_on = y;
}
int main (){
    studant myOjc1("rashid ali", 1);
    studant myOjc2("caimran", 2);
    cout << myOjc1.name <<"" << myOjc1.roll_on << "\n";
    cout << myOjc2.name <<"" << myOjc2.roll_on;
}
