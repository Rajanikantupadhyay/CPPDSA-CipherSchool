//check the given string is palindrome or not and ignore whitespace and special character also ignore lower and middle case

#include <bits/stdc++.h> 
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
bool isalphaNumeric(char ch){
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
        return true;
    }
    return false;
}
bool checkPalindrome(string s)
{
    int start = 0;
    int end = s.length() - 1;

    if(start == end){
        if(toLowerCase(s[start]) == toLowerCase(s[end])) return true;
    }

    while(start <= end){
        
        //handle symbols and whitespace
        while(!isalphaNumeric(s[start])){
            start++;
        }
        while(!isalphaNumeric(s[end])){
            end--;
        }

        if(toLowerCase(s[start]) != toLowerCase(s[end])){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main(){
    string s = "12";
    bool res = checkPalindrome(s);
    if (res)
    {
        cout <<"Yes";
    }else{
        cout <<"No";
    }
    
}