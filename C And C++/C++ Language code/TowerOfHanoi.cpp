#include <iostream>
using namespace std;
void TowerOfHanoi(string source, string medium, string destination, int n)
{
    if (n == 1)
    {
        cout << "move from " << source << " to " << destination << endl;
        return;
    }

    TowerOfHanoi(source, destination, medium, n - 1);
    cout << "move from " << source << " to " << destination << endl;
    TowerOfHanoi(medium, source, destination, n - 1);
}
int main()
{
    int n;
    cin >> n;
    TowerOfHanoi("source ", "medium", "destination", n);
    return 0;
}