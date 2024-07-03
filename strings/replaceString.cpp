//You are given a string of words, you need to replace all the spaces with "@9"
#include<iostream>
#include<string>
using namespace std;

string replaceString(string str){
    string temp;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' '){
            temp += "@9";
        }else{
            temp += str[i];
        }
    }
    return temp;
}
int main()
{
    string str = "Hello World";
    cout << replaceString(str);
    return 0;
}