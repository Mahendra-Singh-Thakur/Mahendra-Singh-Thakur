#include<iostream>
using namespace std;

int  main()
{
    int i, n=7, num=1,count=0;
    // cin >> n;
    while (count != n)
    {
        for (i = 2; i < num; i++)
        {
            
            if (num % i == 0)
            {
                break;
            }
            
        }
        if (i == num)
        {
            cout << "prime number = " << num << endl;
            count++;
        }
        num++;
    }
    
    return 0;
}
