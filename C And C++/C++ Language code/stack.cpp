#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int, node *);
};
node::node(int val, node *ptr)
{
    data = val;
    next = ptr;
}

class Stack
{
public:
    node *top;
    Stack();
    void push(int);
    int Top();
    void pop();
    bool empty();
    void display();
};
int Stack::Top()
{
    if (!top)
    {
        cout << "NO element in Stack" << endl;
    }
    else
    {
        return top->data;
    }
}
bool Stack::empty()
{
    return !top;
}
void Stack::pop()
{
    if (!top)
    {
        cout << "NO element in Stack" << endl;
        return;
    }
    else
    {
        node *temp = top;
        top = top->next;
        free(temp);
    }
}
void Stack::push(int val)
{
    if (!top)
    {
        node *newNode = new node(val, NULL);
        top = newNode;
    }
    else
    {
        node *newNode = new node(val, top);
        top = newNode;
    }
}
void Stack::display()
{
    node *current = top;
    while (current)
    {
        printf("||%5d ||\n", current->data);
        cout << "||^^^^^^||\n";
        current = current->next;
    }
    cout << "^^^^^^^^^^\n\n";
}
Stack::Stack()
{
    top = NULL;
}
Stack insertAtBottom(int val, Stack &st)
{
    if (st.empty())
    {
        st.push(val);
        return st;
    }
    int temp = st.Top();
    st.pop();
    insertAtBottom(val, st);
    st.push(temp);
    return st;
}
Stack reverseStack(Stack &st)
{
    if (st.empty())
    {
        return st;
    }
    int temp = st.Top();
    st.pop();
    reverseStack(st);
    return insertAtBottom(temp, st);
}
int solvePrefix(string s)
{
    cout << "solvePretfix : " << s << endl;
    Stack st;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        char ch = s[i];
        if (ch >= '0' && ch <= '9')
        {
            st.push(ch - '0');
        }
        else
        {
            st.display();
            int a = st.Top();
            st.pop();
            int b = st.Top();
            st.pop();
            switch (ch)
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
                break;
            case '^':
                st.push(pow(a, b));
                break;
            default:
                cout << "Wrong String OR Upgrade your code" << endl;
                return INT_MIN;
            }
        }
    }
    return st.Top();
}
int solvePostfix(string s)
{
    cout << "solvePostfix : " << s << endl;
    Stack st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if (ch >= '0' && ch <= '9')
        {
            st.push(ch - '0');
        }
        else
        {
            st.display();
            int b = st.Top();
            st.pop();
            int a = st.Top();
            st.pop();
            switch (ch)
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
                break;
            case '^':
                st.push(pow(a, b));
                break;
            default:
                cout << "Wrong String OR Upgrade your code" << endl;
                return INT_MIN;
            }
        }
    }
    return st.Top();
}
int precedence(char ch)
{
    if (ch == '^')
    {
        return 3;
    }
    else if (ch == '*' || ch == '/')
    {
        return 2;
    }
    else if (ch == '+' || ch == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixToPostfix(string s)
{
    cout << "infixToPostfix : " << s << endl;
    stack<char> ans;
    string str = "";

    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            str += ch;
        }
        else if ((ch == '(') || (ch == '[') || (ch == '{'))
        {
            ans.push(ch);
        }
        else if ((ch == ')') || (ch == ']') || (ch == '}'))
        {
            while (!ans.empty() && ((ans.top() != '(') && (ans.top() != '[') && (ans.top() != '{')))
            {
                str += ans.top();
                ans.pop();
            }
            ans.pop();
        }
        else
        {
            while (!ans.empty() && precedence(ch) <= precedence(ans.top()))
            {
                str += ans.top();
                ans.pop();
            }
            ans.push(ch);
        }
    }

    while (!ans.empty())
    {
        str += ans.top();
        ans.pop();
    }

    return str;
}
string infixToPrefix(string s)
{
    cout << "infixToPrefix : " << s << endl;
    string newstr = "";
    for (int i = 0; i < s.size(); i++)
    {
        switch (s[i])
        {
        case '{':
            newstr = '}' + newstr;
            break;
        case '[':
            newstr = ']' + newstr;
            break;
        case '(':
            newstr = ')' + newstr;
            break;
        case '}':
            newstr = '{' + newstr;
            break;
        case ')':
            newstr = '(' + newstr;
            break;
        case ']':
            newstr = '[' + newstr;
            break;
        default:
            newstr = s[i] + newstr;
            break;
        }
    }
    newstr = infixToPostfix(newstr);
    s = "";
    for (int i = 0; i < newstr.size(); i++)
    {
        s = newstr[i] + s;
    }
    return s;
}
bool BalancedParenthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        if ((ch == '(') || (ch == '[') || (ch == '{'))
        {
            st.push(ch);
        }
        else if ((ch == ')') || (ch == ']') || (ch == '}'))
        {
            if (ch == (st.top() + 1) || ch == (st.top() + 2))
            {
                st.pop();
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}
int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    st.display();
    // st.pop();
    // st.display();
    cout << st.empty() << endl;
    if (!st.empty())
    {
        cout << "Not Empty" << endl;
    }
    else
    {
        cout << "Empty" << endl;
    }
    Stack newStack = reverseStack(st);
    newStack.display();
    //  newStack = insertAtBottom(56, st);
    // newStack.display();
    cout << "solvePostfix(46+2/5*7+) = " << solvePostfix("46+2/5*7+") << endl
         << endl;
    cout << "solvePrefix(-+7*45+20) = " << solvePrefix("-+7*45+20") << endl
         << endl;
    cout << endl;
    cout << "infixToPostfix((a-b/c)*(a/k-l)) = " << infixToPostfix("(a-b/c)*(a/k-l)") << endl
         << endl;
    cout << "infixToPrefix((a-b/c)*(a/k-l)) = " << infixToPrefix("(a-b/c)*(a/k-l)") << endl
         << endl;
    cout << "BalancedParenthesis{a-[b/(c*a)/k]-l} = " << BalancedParenthesis("{a-[b/(c*a)/k]-l}") << endl
         << endl;
}
// #include <iostream>
// #include <climits>
// #include <cmath>
// #include <vector>
// #include <string>
// #include <algorithm>
// #include <unordered_set>
// using namespace std;

// int main()
// {
//     int ch1 = '(';
//     int ch2 = ')';
//     int ch3 = '[';
//     int ch4 = ']';
//     int ch5 = '{';
//     int ch6 = '}';

//     cout << ch1 << endl;
//     cout << ch2 << endl;
//     cout << ch3 << endl;
//     cout << ch4 << endl;
//     cout << ch5 << endl;
//     cout << ch6 << endl;
//     return 0;
// }