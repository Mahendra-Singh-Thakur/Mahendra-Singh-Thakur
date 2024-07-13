#include <iostream>
#include <climits>
#include <cmath>
#include <string>
#include <algorithm>
#include <ctime>

using namespace std;
int randomFun()
{
    int random;
    random = 1 + (rand() % 6);
    return random;
}
int player01(int pos)
{

    int dieValue = randomFun();
    cout << "Die Value = " << dieValue << endl;
    if (dieValue > (100 - pos))
    {
        cout << "you get bigger die value than reqirement" << endl;
        return pos;
    }
    pos = pos + dieValue;
    switch (pos)
    {
    case 9:
        cout << "you get a ladder" << endl;
        return 33;
        break;
    case 18:
        cout << "you get a ladder" << endl;
        return 24;
        break;
    case 36:
        cout << "you get a snake" << endl;
        return 7;
        break;
    case 45:
        cout << "you get a ladder" << endl;
        return 77;
        break;
    case 41:
        cout << "you get a ladder" << endl;
        return 59;
        break;
    case 66:
        cout << "you get a ladder" << endl;
        return 87;
        break;
    case 62:
        cout << "you get a snake" << endl;
        return 44;
        break;
    case 90:
        cout << "you get a snake" << endl;
        return 47;
        break;
    case 98:
        cout << "you get a snake" << endl;
        return 26;
        break;

    default:
        return pos;
        break;
    }
}
int player02(int pos)
{
    int dieValue = randomFun();
    cout << "Die Value = " << dieValue << endl;
    if (dieValue > (100 - pos))
    {
        cout << "you get bigger die value than reqirement" << endl;
        return pos;
    }
    pos = pos + dieValue;
    switch (pos)
    {
    case 9:
        cout << "you get a ladder" << endl;
        return 33;
        break;
    case 18:
        cout << "you get a ladder" << endl;
        return 24;
        break;
    case 36:
        cout << "you get a snake" << endl;
        return 7;
        break;
    case 45:
        cout << "you get a ladder" << endl;
        return 77;
        break;
    case 41:
        cout << "you get a ladder" << endl;
        return 59;
        break;
    case 66:
        cout << "you get a ladder" << endl;
        return 87;
        break;
    case 62:
        cout << "you get a snake" << endl;
        return 44;
        break;
    case 90:
        cout << "you get a snake" << endl;
        return 47;
        break;
    case 98:
        cout << "you get a snake" << endl;
        return 26;
        break;

    default:
        return pos;
        break;
    }
}
int main()
{
    srand(time(0));
    int player1Pos = 0;
    int player2Pos = 0;
    int preCheck = 0;
    int check = 0;

    while ((player1Pos < 100) && (player2Pos < 100))
    {
        preCheck = check;
        cin >> check;
        if ((check == 1) && (preCheck != check))
        {
            player1Pos = player01(player1Pos);
            cout << "Position = " << player1Pos << endl;
        }
        else if ((check == 0) && (preCheck != check))
        {
            player2Pos = player02(player2Pos);
            cout << "Position = " << player2Pos << endl;
        }
        else
        {
            cout << "Enter right player chance" << endl;
        }
        if (player1Pos == 100)
        {
            cout << endl
                 << "Player 1 win" << endl;
        }
        if (player2Pos == 100)
        {
            cout << endl
                 << "Player 2 win" << endl;
        }
    }

    return 0;
}