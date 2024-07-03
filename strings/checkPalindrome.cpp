#include<iostream>
#include<string>
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

bool checkPalindrome(string str){
    int start = 0;
    int end = str.length() - 1;

    while (start <= end)
    {
        char ch1 = toLowerCase(str[start]);
        char ch2 = toLowerCase(str[end]);
        if (ch1 != ch2 )
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str = "namaN";
    bool res = checkPalindrome(str);
    if (res)
    {
        cout <<"String is palindrome.";
    }else{
        cout <<"String is not palindrome.";
    }
    return 0;
}