//Inheritance
// 
#include<iostream>
using namespace std;
class A{
    public:
    void print(){
        cout << "Hello from class A." << endl;
    }
};
class B{
    public:
    void print(){
        cout << "Hello from class B";
    }
};
class C : public A, public B{

};
int main()
{
    C c1;
    c1.A ::print();
    c1.B ::print();
    return 0;
}