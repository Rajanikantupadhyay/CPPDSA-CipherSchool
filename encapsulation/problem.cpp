#include<iostream>
using namespace std;

class Student{
    private:
    string name;
    int rollNo;
    int age;
    char grade;
    public:
    void setName(string name){
        this->name = name;
    }
    void setrollNo(int rollNo){
        this->rollNo = rollNo;
    }
    void setAge(int age){
        this->age = age;
    }
    void setGrade(char grade){
        this->grade = grade;
    }
    string getName(){
        return name;
    }
    int getrollNo(){
        return rollNo;
    }
    int getAge(){
        return age;
    }
    char getGrade(){
        return grade;
    }
};
int main()
{
    Student obj;
    obj.setName("Rajanikant");
    obj.setrollNo(101);
    obj.setAge(23);
    obj.setGrade('A');

    cout << "Name : " << obj.getName() << endl;
    cout << "Roll No : " << obj.getrollNo() << endl;
    cout << "Age : " << obj.getAge() << endl;
    cout << "Grade : " << obj.getGrade() << endl;
    return 0;
}