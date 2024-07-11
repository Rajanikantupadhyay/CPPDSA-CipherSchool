#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int prefixEval(string s){
    stack <int> st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        char ch = s[i];
        if (ch >= '0' && ch <= '9')
        {
            st.push(int(ch - '0'));
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();
            switch (ch)
            {
            case '/':
                st.push(op1 / op2);
                break;
            case '+':
                st.push(op1 + op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            default:
                break;
            }
        }
    }
    return st.top();
}
int main()
{

    int res = prefixEval("-+7*45+20");
    cout << "Result is : "<<res;
    return 0;
}