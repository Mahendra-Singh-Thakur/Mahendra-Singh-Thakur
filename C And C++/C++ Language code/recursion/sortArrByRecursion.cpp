#include <iostream>
using namespace std;

bool sort(int arr[], int n)
{
    if (n == 1)
    {
        return 1;
    }
    return (arr[0] < arr[1] && sort(arr + 1, n - 1));
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << sort(arr, 5);
    return 0;
}