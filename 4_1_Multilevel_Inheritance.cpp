#include <iostream>
using namespace std;
class child{
    public:
    void name(){
        cout << "rashid ali";
    }
};
class mychild: public child{
    
};
class grendchild: public mychild{
    
};
int main (){
    grendchild myOjc;
    myOjc.name();
    return 0;
}


