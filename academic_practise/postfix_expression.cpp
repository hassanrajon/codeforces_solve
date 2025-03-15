#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        stack<int> my_stack;
    string s;
    string temp;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            my_stack.push(s[i] - '0');
        }

        else if (s[i] == '+')
        {
            int A = my_stack.top();
            my_stack.pop();
            int B = my_stack.top();
            my_stack.pop();
            my_stack.push(B + A);
        }
        else if (s[i] == '-')
        {
            int A = my_stack.top();
            my_stack.pop();
            int B = my_stack.top();
            my_stack.pop();
            my_stack.push(B - A);
        }
        else if (s[i] == '*')
        {
            int A = my_stack.top();
            my_stack.pop();
            int B = my_stack.top();
            my_stack.pop();
            my_stack.push(B * A);
        }
        else if (s[i] == '/')
        {
            int A = my_stack.top();
            my_stack.pop();
            int B = my_stack.top();
            my_stack.pop();
            my_stack.push(B / A);
        }
    }
    cout<<my_stack.top()<<endl;
    }
}