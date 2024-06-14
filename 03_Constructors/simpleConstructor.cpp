#include<iostream>
#include<String>
using namespace std;
class Name{
    public:
    int id;
    string eName;
    Name(){
        cout << "Hello, Welcome ther";
    }
    Name(int id, string Name){
        this->id = id;
        this->eName = Name;
    }
    
    void display(){
        cout << "Employee ID is " << id << endl;
        cout << "Employee Name is " << eName << endl;
    }
};

int main()
{
    int empID;
    string empName;
    cin >> empID;
    cin >> empName;
    Name* obj = new Name(empID, empName);
    // Name obj(101,"Rajanikant");
    obj->display();
    return 0;
}