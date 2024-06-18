#include<iostream>
using namespace std;

template <class T1, class T2>
class Add{
    T1 num1;
    T2 num2;
    public:
    Add(T1 n1, T2 n2){
        this->num1 = n1;
        this->num2 = n2;
    }
    void getSum(){
        cout << "Sum = " << num1 + num2;
    }
};
int main()
{
    Add <int, float> obj(5,5.5);
    obj.getSum();
    // cout << "Sum = " << obj.getSum();
    return 0;
}