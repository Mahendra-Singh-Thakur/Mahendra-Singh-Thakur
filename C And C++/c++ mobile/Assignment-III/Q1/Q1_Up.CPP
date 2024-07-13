#include<iostream>

int main ()
{
    int n;
    double c, a;
    std::cout << "Enter number of terms: ";
    std::cin >> n;
    a = n / 3.0 * (n * n + 2);
    std::cout << a << std::endl;
}