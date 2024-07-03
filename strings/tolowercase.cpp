//Converting the lower to upper and upper to lower

#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if (ch >= 'a' && ch <= 'z'){
        return ch;
    }else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }  
}
char toUpperCase(char ch){
    if (ch >= 'A' && ch <= 'Z'){
        return ch;
    }else
    {
        char temp = ch - 'a' + 'A';
        return temp;
    }
}
int main()
{
    char ch = 'F';
    char ch2 = 'e';
    cout <<toLowerCase(ch) <<endl;
    cout<<toUpperCase(ch2);
    return 0;
}