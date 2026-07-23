#include <iostream>
using namespace std;
class student{
    public:
      string name = "rashid ali";
      void title(){
        cout << "inheritance class";
      }
};
class peransh : public student{
    public:
    string peransh_name = "shahabuddin ansari";
};
int main(){
    peransh myOjc;
    myOjc.title();
    cout <<"\n"<< myOjc.name <<" "<< myOjc.peransh_name;

}
