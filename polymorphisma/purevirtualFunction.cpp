///Pure virtual functions
//if a function doesn't have any use in the base class but the function must be implemented by all its deserved classes
#include<iostream>
using namespace std;
class A{
    public:
    virtual void display() = 0;
};
class B : public A{
    void display(){
        cout << "Hello from B.";
    }
};
int main()
{

    return 0;
}