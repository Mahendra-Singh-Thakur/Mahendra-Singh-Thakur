#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
string filename = "my_file.txt";
ofstream file;

int pow(int num, int po)
{
    if (po == 1)
    {
        return num;
    }
    return (num * pow(num, po - 1));
}
int binarytodecimal(vector<bool> ans)
{
    int answer = 0;
    for (int i = 0; i < ans.size(); i++)
    {
        if (ans[i] == 1)
        {
            answer = answer + pow(2, i);
        }
    }
    return answer;
}
void decimalToBinaryWithOutZero(int num, vector<bool> &arr, int sizeOfR)
{
    while (num)
    {
        arr.push_back(num % 2);
        num = num / 2;
    }
}
void decimalToBinaryWithZero(int num, vector<bool> &arr, int sizeOfR)
{
    while (num)
    {
        arr.push_back(num % 2);
        num = num / 2;
    }
    while (sizeOfR != arr.size())
    {
        arr.push_back(0);
    }
}
void towScompliment(vector<bool> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        ans[i] = (!(ans[i]));
    }
    if (ans[0] == 0)
    {
        ans[0] = 1;
    }
    else
    {
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] == 1)
            {
                ans[i] = 0;
            }
            else
            {
                ans[i] = 1;
                break;
            }
        }
    }
}
void towScompliment(int num, vector<bool> &v, int sizeOfR)
{
    while (num)
    {
        v.push_back(!(num % 2));
        num = num / 2;
    }
    while (sizeOfR != v.size())
    {
        v.push_back(1);
    }
    if (v[0] == 0)
    {
        v[0] = 1;
    }
    else
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == 1)
            {
                v[i] = 0;
            }
            else
            {
                v[i] = 1;
                break;
            }
        }
    }
}
void ShiftLeft(vector<bool> &ac, vector<bool> &q, vector<bool> &restoreA)
{
    int i;
    for (int i = ac.size() - 2; i >= 0; i--)
    {
        ac[i + 1] = ac[i];
    }
    ac[0] = q[q.size() - 1];
    for (i = q.size() - 2; i >= 0; i--)
    {
        q[i + 1] = q[i];
    }

    for (int i = 0; i < ac.size(); i++)
    {
        restoreA[i] = ac[i];
    }
}
void ShiftLeft(vector<bool> &ac, vector<bool> &q)
{
    int i;
    for (int i = ac.size() - 2; i >= 0; i--)
    {
        ac[i + 1] = ac[i];
    }
    ac[0] = q[q.size() - 1];
    for (i = q.size() - 2; i >= 0; i--)
    {
        q[i + 1] = q[i];
    }
}
void ASR(vector<bool> &ac, vector<bool> &q, bool &qn)
{
    qn = q[0];
    int i;
    for (i = 0; i < q.size() - 1; i++)
    {
        q[i] = q[i + 1];
    }
    q[i] = ac[0];
    for (int i = 0; i < ac.size() - 1; i++)
    {
        ac[i] = ac[i + 1];
    }
    ac[i] = ac[i - 1];
}
void addBinary(vector<bool> &ac, vector<bool> &m)
{

    bool carry = 0;
    int i;
    for (int i = 0; i < ac.size(); i++)
    {
        if (ac[i] == 1 && m[i] == 1)
        {
            if (carry == 1)
            {
                ac[i] = 1;
                carry = 1;
            }
            else
            {
                ac[i] = 0;
                carry = 1;
            }
            continue;
        }
        else if (ac[i] == 0 && m[i] == 0)
        {
            if (carry == 1)
            {
                ac[i] = 1;
                carry = 0;
            }
            else
            {
                ac[i] = 0;
                carry = 0;
            }
            continue;
        }
        // if ((ac[i] == 1 && m[i] == 0) || (ac[i] == 0 && m[i] == 1))
        else
        {
            if (carry == 1)
            {
                ac[i] = 0;
                carry = 1;
            }
            else
            {
                ac[i] = 1;
                carry = 0;
            }
            continue;
        }
        // file << endl;
    }
}
int it;
void printDivide(vector<bool> &plusm, vector<bool> &ac, vector<bool> &q)
{
    file << "   " << it << "   ";
    for (int i = (plusm.size()) - 1; i >= 0; i--)
    {
        file << plusm[i] << " ";
    }
    file << "   ";
    for (int i = (ac.size()) - 1; i >= 0; i--)
    {
        file << ac[i] << " ";
    }
    file << "   ";
    for (int i = (q.size()) - 1; i >= 1; i--)
    {
        file << q[i] << " ";
    }
}
void printmultiply(vector<bool> &ac, vector<bool> &q, bool qn)
{
    for (int i = ac.size() - 1; i >= 0; i--)
    {
        file << ac[i] << " ";
    }
    file << "    ";
    for (int i = q.size() - 1; i >= 0; i--)
    {
        file << q[i] << " ";
    }
    file << "    ";
    file << qn;
    file << "    ";
}
int main()
{
    file.open(filename);
    if (!(file.is_open()))
    {
        cout << "Failed to create the file: " << filename << endl;
        return -1;
    }
    while (true)
    {
        cout << "Menu:  " << endl;
        cout << "1. Booth's Algorithm Step by Step Calculator" << endl;
        cout << "2. Restoring Division Algorithm Step by Step Calculator For Unsigned Integer" << endl;
        cout << "3. Non-Restoring Division Method Step by Step Calculator For Unsigned Integer" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: ";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            file << endl;
            file << "**Booth's Algorithm Step by Step Calculator**" << endl;
            int sizeOfRegister = 5;
            cout << "Enter Size Of Register = " << endl;
            file << "Enter Size Of Register = ";
            cin >> sizeOfRegister;
            file << sizeOfRegister << endl;
            if (sizeOfRegister <= 0)
            {
                cout << "Invalid input for register size. Please enter a positive integer." << endl;
                return 1;
            }
            vector<bool> ac(sizeOfRegister, 0);
            vector<bool> plusm;
            vector<bool> minusm;
            vector<bool> q;
            bool qn = 0;
            int M, Q;
            cout << "Enter Multiplicand = " << endl;
            file << "Enter Multiplicand = ";
            cin >> M;
            file << M << endl;
            cout << "Enter Multiplier = " << endl;
            file << "Enter Multiplier = ";
            cin >> Q;
            file << Q << endl;
            file <<endl;
            if (Q >= 0)
            {
                decimalToBinaryWithZero(Q, q, sizeOfRegister);
            }
            else
            {
                towScompliment(Q, q, sizeOfRegister);
            }
            decimalToBinaryWithZero(M, plusm, sizeOfRegister);
            towScompliment(M, minusm, sizeOfRegister);
            file << "    AC           Q          Qn         M            Log";
            for (int i = 0; i < sizeOfRegister; i++)
            {
                file << endl;
                if (q[0] == 1 && qn == 0)
                {
                    addBinary(ac, minusm);
                    printmultiply(ac, q, qn);
                    for (int i = minusm.size() - 1; i >= 0; i--)
                    {
                        file << minusm[i] << " ";
                    }
                    file << "    ";
                    file << "A = A -   M";
                    file << endl;
                    ASR(ac, q, qn);
                    printmultiply(ac, q, qn);
                    for (int i = minusm.size() - 1; i >= 0; i--)
                    {
                        // file << minusm[i] << " ";
                        file << "  ";
                    }
                    file << "    ";
                    file << "  SHIFT";
                    continue;
                }
                if (q[0] == 0 && qn == 1)
                {
                    addBinary(ac, plusm);
                    printmultiply(ac, q, qn);
                    for (int i = plusm.size() - 1; i >= 0; i--)
                    {
                        file << plusm[i] << " ";
                    }
                    file << "    ";
                    file << "A = A +   M";
                    file << endl;
                    ASR(ac, q, qn);
                    printmultiply(ac, q, qn);
                    for (int i = minusm.size() - 1; i >= 0; i--)
                    {
                        // file << minusm[i] << " ";
                        file << "  ";
                    }
                    file << "    ";
                    file << "  SHIFT";
                    continue;
                }
                if ((q[0] == 0 && qn == 0) || (q[0] == 1 && qn == 1))
                {
                    ASR(ac, q, qn);
                    printmultiply(ac, q, qn);
                    for (int i = minusm.size() - 1; i >= 0; i--)
                    {
                        // file << minusm[i] << " ";
                        file << "  ";
                    }
                    file << "    ";
                    file << "  SHIFT";
                    continue;
                }
            }
            file << endl;
            for (int i = ac.size() - 1; i >= 0; i--)
            {
                file << ac[i] << " ";
            }
            file << "    ";
            for (int i = q.size() - 1; i >= 0; i--)
            {
                file << q[i] << " ";
            }
            file << "                          ANS ";
            file << endl;
            vector<bool> ans;
            for (int i = 0; i < q.size(); i++)
            {
                ans.push_back(q[i]);
            }

            for (int i = 0; i < ac.size(); i++)
            {

                ans.push_back(ac[i]);
            }
            if (Q < 0)
            {
                file << "       Answer in two's compliment";
                file << endl;
                file << "        ";
                for (int i = ans.size() - 1; i >= 0; i--)
                {
                    file << ans[i] << " ";
                }
                towScompliment(ans);
                file << endl;
                file << "       After two's complement";
                file << endl;
                file << "        ";
                for (int i = ans.size() - 1; i >= 0; i--)
                {
                    file << ans[i] << " ";
                }
                file << endl;
                file << "        ";
                file << "  Answer is : -" << binarytodecimal(ans) << endl;
            }
            else
            {
                file << "        ";
                for (int i = ans.size() - 1; i >= 0; i--)
                {
                    file << ans[i] << " ";
                }
                file << endl;
                file << "        ";
                if (M < 0)
                {
                    file << "  Answer is : -" << binarytodecimal(ans) << endl;
                }
                else
                {
                    file << "  Answer is : " << binarytodecimal(ans) << endl;
                }
            }
            cout << "Solution created successfully in FILE named as : " << filename << endl;
            file << "         *--------------------------------*";
            break;
        }
        case 2:
        {
            file << endl;
            file << "**Restoring Division Algorithm Step by Step Calculator For Unsigned Integer**" << endl;
            int sizeOfRegister = 5;
            cout << "Enter Size Of Register = " << endl;
            file << "Enter Size Of Register = ";
            cin >> sizeOfRegister;
            file << sizeOfRegister << endl;
            if (sizeOfRegister <= 0)
            {
                file << "Invalid input for register size. Please enter a positive integer." << endl;
                return 1;
            }

            vector<bool> ac(sizeOfRegister, 0);
            vector<bool> minusm;
            vector<bool> plusm;
            vector<bool> restoreA(sizeOfRegister, 0);
            vector<bool> q;
            int M, Q;
            cout << "Enter Divisor = " << endl;
            file << "Enter Divisor = ";
            cin >> M;
            file << M << endl;
            cout << "Enter Dividend = " << endl;
            file << "Enter Dividend = ";
            cin >> Q;
            file << Q << endl;
            file <<endl;
            decimalToBinaryWithOutZero(Q, q, sizeOfRegister);
            it = q.size();
            towScompliment(M, minusm, sizeOfRegister);
            decimalToBinaryWithZero(M, plusm, sizeOfRegister);
            file << endl;
            file << "   N         M            A           Q      restoreA      Log";
            file << endl;
            file << endl;
            printDivide(plusm, ac, q);
            file << q[0] << "   ";
            for (int i = (restoreA.size()) - 1; i >= 0; i--)
            {
                file << restoreA[i] << " ";
            }
            file << "   ";
            file << "intialize";
            file << endl;
            file << endl;
            for (it = q.size(); it >= 1; it--)
            {
                ShiftLeft(ac, q, restoreA);
                printDivide(plusm, ac, q);
                file << "_"
                     << "   ";
                for (int i = (restoreA.size()) - 1; i >= 0; i--)
                {
                    file << restoreA[i] << " ";
                }
                file << "   ";
                file << "ShiftLeft A Q";
                file << endl;
                addBinary(ac, minusm);
                printDivide(plusm, ac, q);
                file << "_"
                     << "   ";
                for (int i = (restoreA.size()) - 1; i >= 0; i--)
                {
                    file << restoreA[i] << " ";
                }
                file << "   ";
                file << "A = A - M ";
                file << endl;
                if ((ac[ac.size() - 1]) == 0)
                {
                    q[0] = 1;
                    printDivide(plusm, ac, q);
                    file << q[0] << "   ";
                    for (int i = (restoreA.size()) - 1; i >= 0; i--)
                    {
                        file << restoreA[i] << " ";
                    }
                    file << "   ";
                    file << "Q[0] = 1";
                    file << endl;
                }
                else
                {
                    q[0] = 0;
                    for (int i = 0; i < ac.size(); i++)
                    {
                        ac[i] = restoreA[i];
                    }
                    printDivide(plusm, ac, q);
                    file << q[0] << "   ";
                    for (int i = (restoreA.size()) - 1; i >= 0; i--)
                    {
                        file << restoreA[i] << " ";
                    }
                    file << "   ";
                    file << "Q[0] = 0 And Restore A";
                    file << endl;
                }
                file << endl;
            }
            file << "Quotient : ";
            for (int i = (q.size()) - 1; i >= 0; i--)
            {
                file << q[i] << " ";
            }
            file << endl;
            file << "Quotient : " << binarytodecimal(q) << endl;
            file << "Remainder : ";
            for (int i = (ac.size()) - 1; i >= 0; i--)
            {
                file << ac[i] << " ";
            }
            file << endl;
            file << "Remainder : " << binarytodecimal(ac) << endl;
            file << endl;
            cout << "Solution created successfully in FILE named as : " << filename << endl;
            file << "         *--------------------------------*";
            break;
        }

        case 3:
        {
            file << endl;
            file << "**Restoring Division Algorithm Step by Step Calculator For Unsigned Integer**" << endl;
            int sizeOfRegister = 5;
            cout << "Enter Size Of Register = " << endl;
            file << "Enter Size Of Register = ";
            cin >> sizeOfRegister;
            file << sizeOfRegister << endl;
            if (sizeOfRegister <= 0)
            {
                file << "Invalid input for register size. Please enter a positive integer." << endl;
                return 1;
            }

            vector<bool> ac(sizeOfRegister, 0);
            vector<bool> minusm;
            vector<bool> plusm;
            vector<bool> restoreA(sizeOfRegister, 0);
            vector<bool> q;
            int M, Q;
            cout << "Enter Divisor = " << endl;
            file << "Enter Divisor = ";
            cin >> M;
            file << M << endl;
            cout << "Enter Dividend = " << endl;
            file << "Enter Dividend = ";
            cin >> Q;
            file << Q << endl;
            file <<endl;
            decimalToBinaryWithOutZero(Q, q, sizeOfRegister);
            it = q.size();
            towScompliment(M, minusm, sizeOfRegister);
            decimalToBinaryWithZero(M, plusm, sizeOfRegister);
            file << endl;
            file << "   N         M            A           Q         Log";
            file << endl;
            file << endl;
            printDivide(plusm, ac, q);
            file << q[0];
            file << "   ";
            file << "intialize";
            file << endl;
            file << endl;
            for (it = q.size(); it >= 1; it--)
            {
                if (ac[ac.size() - 1] == 1)
                {
                    ShiftLeft(ac, q);
                    printDivide(plusm, ac, q);
                    file << "_";

                    file << "   ";
                    file << "ShiftLeft A Q";
                    file << endl;
                    addBinary(ac, plusm);
                    printDivide(plusm, ac, q);
                    file << "_";
                    file << "   ";
                    file << "A = A + M ";
                    file << endl;
                }
                else
                {
                    ShiftLeft(ac, q);
                    printDivide(plusm, ac, q);
                    file << "_";
                    file << "   ";
                    file << "ShiftLeft A Q";
                    file << endl;
                    addBinary(ac, minusm);
                    printDivide(plusm, ac, q);
                    file << "_";
                    file << "   ";
                    file << "A = A - M ";
                    file << endl;
                }
                if (ac[ac.size() - 1] == 1)
                {
                    q[0] = 0;
                    printDivide(plusm, ac, q);
                    file << q[0];
                    file << "   ";
                    file << "Q[0] = 0";
                    file << endl;
                }
                else
                {
                    q[0] = 1;
                    printDivide(plusm, ac, q);
                    file << q[0];
                    file << "   ";
                    file << "Q[0] = 1";
                    file << endl;
                }
            }
            if (ac[ac.size() - 1] == 1)
            {
                addBinary(ac, plusm);
                printDivide(plusm, ac, q);
                file << q[0];
                file << "   ";
                file << "A = A + M ";
                file << endl;
            }
            file << "Quotient : ";
            for (int i = (q.size()) - 1; i >= 0; i--)
            {
                file << q[i] << " ";
            }
            file << endl;
            file << "Quotient : " << binarytodecimal(q) << endl;
            file << "Remainder : ";
            for (int i = (ac.size()) - 1; i >= 0; i--)
            {
                file << ac[i] << " ";
            }
            file << endl;
            file << "Remainder : " << binarytodecimal(ac) << endl;
            file << endl;
            cout << "Solution created successfully in FILE named as : " << filename << endl;
            file << "         *--------------------------------*";
            break;
        }
        case 4:
        {
            
            file <<endl<< "                      !! BYE !!" << endl;
            cout << "!! BYE !!" << endl;
            file.close();
            return 0;
        }
        }
    }
}