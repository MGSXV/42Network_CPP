#include <iostream>
using namespace std;
class B {
public:
   virtual void Test(){}
};
class D : public B {};

void f(B* pb) {
   D* pd1 = dynamic_cast<D*>(pb);
   D* pd2 = static_cast<D*>(pb);
}
int main() {
   D*p1;
   B*p2;
   f(p2);
   return 0;
}