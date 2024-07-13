#include<iostream>
#include<cstdlib>

int main()
{
    system("cls");
    int trc, r, sp, st, a = 65;
    std::cout << "Enter number of lines : ";
    std::cin >> trc;

    for(r = 1; r <= trc; r++)
    {
        for(sp = 1; sp <= trc - r; sp++)
        {
            std::cout << "  ";
        }
        for(st = 1; st <= ((2 * r) - 1); st++)
        {
            std::cout << static_cast<char>(a) << " ";
            a = 65 + st;
        }
        a = 65;
        std::cout << std::endl;
    }
    return 0;
}