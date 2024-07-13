// // // #include <iostream>
// // // #include <vector>

// // // using namespace std;

// // // int countTriplets(vector<int> &arr)
// // // {
// // //     int n = arr.size();
// // //     int count = 0;
// // //     for (int i = 0; i < n - 1; ++i)
// // //     {
// // //         int xor_val = arr[i];
// // //         for (int k = i + 1; k < n; ++k)
// // //         {
// // //             xor_val ^= arr[k];
// // //             if (xor_val == 0)
// // //             {
// // //                 count += (k - i);
// // //             }
// // //         }
// // //     }
// // //     return count;
// // // }

// // // int main()
// // // {
// // //     vector<int> arr1 = {2, 3, 1, 6, 7};

// // //     vector<int> arr2 = {1, 1, 1, 1, 1};

// // //     return 0;
// // // }
// // #include <bits/stdc++.h>
// // using namespace std;
// // int precedence(char ch)
// // {
// //     switch (ch)
// //     {
// //     case '^':
// //         return 5;
// //     case '/':
// //     case '*':
// //         return 4;
// //     case '%':
// //         return 3;
// //     case '+':
// //     case '-':
// //         return 2;
// //     default:
// //         return -1;
// //     }
// // }
// // string ITOP(string s)
// // {
// //     string ans = "";
// //     stack<char> st;
// //     for (int i = 0; i < s.size(); i++)
// //     {
// //         if (s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
// //         {
// //             ans += s[i];
// //         }
// //         else
// //         {
// //             if (!st.empty())
// //             {
// //                 if (precedence(st.top()) < precedence(s[i]))
// //                 {
// //                     st.push(s[i]);
// //                 }
// //                 else
// //                 {
// //                     while (!st.empty() && (precedence(st.top()) >= precedence(s[i])))
// //                     {
// //                         ans += st.top();
// //                         st.pop();
// //                     }
// //                     st.push(s[i]);
// //                 }
// //             }
// //             else
// //             {
// //                 st.push(s[i]);
// //             }
// //         }
// //     }
// //     while (!st.empty())
// //     {
// //         ans += st.top();
// //         st.pop();
// //     }
// //     return ans;
// // }
// // int solve(int x, int y, char op)
// // {
// //     switch (op)
// //     {
// //     case '^':
// //         return pow(y, x);
// //     case '%':
// //         return (x % y);
// //     case '/':
// //         return (x / y);
// //     case '*':
// //         return (x * y);
// //     case '+':
// //         return (x + y);
// //     case '-':
// //         return (x - y);
// //     }
// // }
// // int Evalofpost(string s)
// // {
// //     stack<int> st;
// //     for (int i = 0; i < s.size(); i++)
// //     {
// //         if (s[i] >= '0' && s[i] <= '9')
// //         {
// //             st.push(s[i] - 48);
// //         }
// //         else
// //         {
// //             int x = st.top();
// //             st.pop();
// //             int y = st.top();
// //             st.pop();
// //             st.push(solve(x, y, s[i]));
// //         }
// //     }
// //     return st.top();
// // }
// // int main()
// // {
// //     // system("cls");
// //     // string str = "a+b*c-d/e+f*g*h";
// //     string str = "A-B/C+D%E*F/G*H";
// //     // string str = "A-(B/C+(D%E*F)/G)*H";
// //     string itopstr = ITOP(str);
// //     cout << itopstr << endl;
// //     string s = "2-3+16^2+6";
// //     // string s = "2-3+6^2+6";
// //     cout << ITOP(s) << endl;
// //     int ans = Evalofpost(ITOP(s));
// //     cout << ans << endl;
// //     return 0;
// // }
// // C++ program to convert an infix expression to a
// // postfix expression using two precedence function
// #include <bits/stdc++.h>
// using namespace std;

// // to check if the input character
// // is an operator or a '('
// int isOperator(char input)
// {
//     switch (input)
//     {
//     case '+':
//         return 1;
//     case '-':
//         return 1;
//     case '*':
//         return 1;
//     case '%':
//         return 1;
//     case '/':
//         return 1;
//     case '(':
//         return 1;
//     }
//     return 0;
// }

// // to check if the input character is an operand
// int isOperand(char input)
// {
//     if (input >= 65 && input <= 90 || input >= 97 && input <= 122)
//         return 1;
//     return 0;
// }

// // function to return precedence value
// // if operator is present in stack
// int inPrec(char input)
// {
//     switch (input)
//     {
//     case '+':
//     case '-':
//         return 2;
//     case '*':
//     case '%':
//     case '/':
//         return 4;
//     case '(':
//         return 0;
//     }
// }

// // function to return precedence value
// // if operator is present outside stack.
// int outPrec(char input)
// {
//     switch (input)
//     {
//     case '+':
//     case '-':
//         return 1;
//     case '*':
//     case '%':
//     case '/':
//         return 3;
//     case '(':
//         return 100;
//     }
// }

// // function to convert infix to postfix
// void inToPost(char *input)
// {
//     stack<char> s;

//     // while input is not NULL iterate
//     int i = 0;
//     while (input[i] != '\0')
//     {

//         // if character an operand
//         if (isOperand(input[i]))
//         {
//             printf("%c", input[i]);
//         }

//         // if input is an operator, push
//         else if (isOperator(input[i]))
//         {
//             if (s.empty() || outPrec(input[i]) > inPrec(s.top()))
//                 s.push(input[i]);
//             else
//             {
//                 while (!s.empty() && outPrec(input[i]) < inPrec(s.top()))
//                 {
//                     printf("%c", s.top());
//                     s.pop();
//                 }
//                 s.push(input[i]);
//             }
//         }

//         // condition for opening bracket
//         else if (input[i] == ')')
//         {
//             while (s.top() != '(')
//             {
//                 printf("%c", s.top());
//                 s.pop();

//                 // if opening bracket not present
//                 if (s.empty())
//                 {
//                     printf("Wrong input\n");
//                     exit(1);
//                 }
//             }

//             // pop the opening bracket.
//             s.pop();
//         }
//         i++;
//     }

//     // pop the remaining operators
//     while (!s.empty())
//     {
//         if (s.top() == '(')
//         {
//             printf("\n Wrong input\n");
//             exit(1);
//         }
//         printf("%c", s.top());
//         s.pop();
//     }
// }

// // Driver code
// int main()
// {
//     char input[] = "A-B/C+D%E*F/G*H";
//     inToPost(input);
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int longestPalindrome(string s)
{
    unordered_map<char, int> um;
    // um['a'] = 6;
    // um['a']++;
    // um['a']++;

    for (int i = 0; i < s.size(); i++)
    {
        if (!(um[s[i]]))
        {
            um[s[i]] = 1;
        }
        else
        {
            um[s[i]]++;
        }
    }
    int count = 0;
    bool flag = 1;
    for (auto i : um)
    {
        if (!((i.second) % 2))
        {
            count += i.second;
        }
        else
        {
            if (--(i.second))
            {
                count += i.second;
            }
            else
            {
                if (flag)
                {
                    count++;
                    flag = 0;
                }
            }
        }
    }
    return count;
}
vector<string> commonChars(vector<string> &words)
{
    vector<int> commonCharFreq(26, INT_MAX); // Initialize with maximum frequency

    // Count character frequencies for the first word
    for (char c : words[0])
    {
        commonCharFreq[c - 'a']++;
    }

    // Update commonCharFreq with frequencies from other words
    for (int i = 1; i < words.size(); ++i)
    {
        vector<int> currFreq(26, 0);
        for (char c : words[i])
        {
            currFreq[c - 'a']++;
        }
        // Update common character frequencies
        for (int j = 0; j < 26; ++j)
        {
            commonCharFreq[j] = min(commonCharFreq[j], currFreq[j]);
        }
    }

    // Construct the result array
    vector<string> result;
    for (int i = 0; i < 26; ++i)
    {
        for (int j = 0; j < commonCharFreq[i]; ++j)
        {
            result.push_back(string(1, i + 'a'));
        }
    }
    return result;
}

int main()
{
    system("cls");
    vector<string> s{"cool", "lock", "cook"};
    for (auto i : commonChars(s))
    {
        cout << i << endl;
    }
    return 0;
}