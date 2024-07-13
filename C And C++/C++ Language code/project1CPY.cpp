#include <iostream>
#include <vector>
using namespace std;
int pow(int num, int po)
{
    if (po == 1)
    {
        return num;
    }
    return (num * pow(num, po - 1));
}
int main()
{
    cout << pow(3, 3) << endl;
}
// #include <iostream>
// #include <cmath>
// #include <vector>
// using namespace std;
// void decimalToBinary(int num, vector<bool> &arr, int sizeOfR)
// {
//     while (num)
//     {
//         arr.push_back(num % 2);
//         num = num / 2;
//     }
//     while (sizeOfR != arr.size())
//     {
//         arr.push_back(0);
//     }
// }
// void towScompliment(vector<bool> &ans)
// {
//     for (int i = 0; i < ans.size(); i++)
//     {
//         ans[i] = (!(ans[i]));
//     }
//     if (ans[0] == 0)
//     {
//         ans[0] = 1;
//     }
//     else
//     {
//         for (int i = 0; i < ans.size(); i++)
//         {
//             if (ans[i] == 1)
//             {
//                 ans[i] = 0;
//             }
//             else
//             {
//                 ans[i] = 1;
//                 break;
//             }
//         }
//     }
// }
// void towScompliment(int num, vector<bool> &v, int sizeOfR)
// {
//     while (num)
//     {
//         v.push_back(!(num % 2));
//         num = num / 2;
//     }
//     while (sizeOfR != v.size())
//     {
//         v.push_back(1);
//     }
//     if (v[0] == 0)
//     {
//         v[0] = 1;
//     }
//     else
//     {
//         for (int i = 0; i < v.size(); i++)
//         {
//             if (v[i] == 1)
//             {
//                 v[i] = 0;
//             }
//             else
//             {
//                 v[i] = 1;
//                 break;
//             }
//         }
//     }
// }
// void ASR(vector<bool> &ac, vector<bool> &q, bool &qn)
// {
//     qn = q[0];
//     int i;
//     for (i = 0; i < q.size() - 1; i++)
//     {
//         q[i] = q[i + 1];
//     }
//     q[i] = ac[0];
//     for (int i = 0; i < ac.size() - 1; i++)
//     {
//         ac[i] = ac[i + 1];
//     }
//     ac[i] = ac[i - 1];
// }
// void addBinary(vector<bool> &ac, vector<bool> &m)
// {
//     bool carry = 0;
//     int i;
//     for (int i = 0; i < ac.size(); i++)
//     {
//         if (ac[i] == 1 && m[i] == 1)
//         {
//             if (carry == 1)
//             {
//                 ac[i] = 1;
//                 carry = 1;
//             }
//             else
//             {
//                 ac[i] = 0;
//                 carry = 1;
//             }
//             continue;
//         }
//         if (ac[i] == 0 && m[i] == 0)
//         {
//             if (carry == 1)
//             {
//                 ac[i] = 1;
//                 carry = 0;
//             }
//             else
//             {
//                 ac[i] = 0;
//                 carry = 0;
//             }
//             continue;
//         }
//         if ((ac[i] == 1 && m[i] == 0) || (ac[i] == 0 && m[i] == 1))
//         {
//             if (carry == 1)
//             {
//                 ac[i] = 0;
//                 carry = 1;
//             }
//             else
//             {
//                 ac[i] = 1;
//                 carry = 0;
//             }
//             continue;
//         }
//     }
// }
// int main()
// {
//     int sizeOfRegister = 5;
//     cout << "Enter Size Of Register = " << endl;
//     cin >> sizeOfRegister;
//     if (sizeOfRegister <= 0)
//     {
//         cout << "Invalid input for register size. Please enter a positive integer." << endl;
//         return 1;
//     }
//     vector<bool> ac(sizeOfRegister, 0);
//     vector<bool> plusm;
//     vector<bool> minusm;
//     vector<bool> q;
//     bool qn = 0;
//     int M, Q;
//     cout << "Enter Multiplicand = " << endl;
//     cin >> M;
//     cout << "Enter Multiplier = " << endl;
//     cin >> Q;
//     if (Q >= 0)
//     {
//         decimalToBinary(Q, q, sizeOfRegister);
//     }
//     else
//     {
//         towScompliment(Q, q, sizeOfRegister);
//     }
//     decimalToBinary(M, plusm, sizeOfRegister);
//     towScompliment(M, minusm, sizeOfRegister);
//     for (int i = 0; i < sizeOfRegister; i++)
//     {
//         if (q[0] == 1 && qn == 0)
//         {
//             addBinary(ac, minusm);
//             ASR(ac, q, qn);
//             continue;
//         }
//         if (q[0] == 0 && qn == 1)
//         {
//             addBinary(ac, plusm);
//             ASR(ac, q, qn);
//             continue;
//         }
//         if ((q[0] == 0 && qn == 0) || (q[0] == 1 && qn == 1))
//         {
//             ASR(ac, q, qn);
//             continue;
//         }
//     }
//     for (int i = ac.size() - 1; i >= 0; i--)
//     {
//         cout << ac[i] << " ";
//     }
//     cout << "    ";
//     for (int i = q.size() - 1; i >= 0; i--)
//     {
//         cout << q[i] << " ";
//     }
//     cout << "    ANS ";
//     return 0;
// }