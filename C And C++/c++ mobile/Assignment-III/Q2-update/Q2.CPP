#include <iostream>

int main()
{
    int trc, r, i, st1, st2, sp;
    std::cout << "Enter number of lines : ";
    std::cin >> trc;

    for (r = 1, i = trc; r <= trc; r++, i--)
    {
        for (st1 = i; st1 >= 1; st1--)
        {
            std::cout << "* ";
        }
        for (sp = 1; sp <= ((2 * r) - 1); sp++)
        {
            if ((i == trc) && (sp == 1))
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        for (st2 = i; st2 >= 1; st2--)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    for (r = trc - 1, i = 1 + 1; r >= 1; r--, i++)
    {
        for (st1 = i; st1 >= 1; st1--)
        {
            std::cout << "* ";
        }
        for (sp = 1; sp <= ((2 * r) - 1); sp++)
        {
            if ((i == trc) && (sp == 1))
            {
                std::cout << "* ";
            }
            else
            {
                std::cout << "  ";
            }
        }
        for (st2 = i; st2 >= 1; st2--)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}