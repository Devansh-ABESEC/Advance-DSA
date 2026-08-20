#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

// Function to convert infix to postfix
string infixToPostfix(string s)
{
    stack<char> st;
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // If operand, add to output
        if (isalnum(ch))
        {
            ans += ch;
        }

        // If opening bracket, push
        else if (ch == '(')
        {
            st.push(ch);
        }

        // If closing bracket, pop until '('
        else if (ch == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }

            if (!st.empty())
                st.pop(); // Remove '('
        }

        // Operator
        else
        {
            while (!st.empty() &&
                   ((precedence(st.top()) > precedence(ch)) ||
                    (precedence(st.top()) == precedence(ch) && ch != '^')))
            {
                if (st.top() == '(')
                    break;

                ans += st.top();
                st.pop();
            }

            st.push(ch);
        }
    }

    // Pop remaining operators
    while (!st.empty())
    {
        if (st.top() != '(')
            ans += st.top();
        st.pop();
    }

    return ans;
}

int main()
{
    string infix;

    cout << "Enter infix expression: ";
    cin >> infix;

    cout << "Postfix Expression: " << infixToPostfix(infix) << endl;

    return 0;
}