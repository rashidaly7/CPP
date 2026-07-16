#include <iostream>
using namespace std;
class myclass{
    public:
    void myvoid();
};
void myclass::myvoid(){
     cout << "hellow world";
}
int main(){
   myclass myOjk;
   myOjk.myvoid();
   return 0;
}
