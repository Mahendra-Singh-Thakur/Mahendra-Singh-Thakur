#include<iostream>

int main()
{
    int trc,c,r,a,n;
    std::cout << "Enter number of rows : ";
    std::cin >> trc;
    a=(2*trc-1)/2+1;

    for(r=1;r<=trc;r++)
    {
        for(c=1;c<=(2*trc-1);c++)
        {
            if(c>=a-(r-1)&&c<=a+(r-1))
            {
                if(r%2==0)
                {
                    if(c%2==0)
                    {
                        std::cout << "#";
                    }
                    else
                    {
                        std::cout << "*";
                    }
                }
                if(r%2!=0)
                {
                    if(c%2==0)
                    {
                        std::cout << "*";
                    }
                    else
                    {
                        std::cout << "#";
                    }
                }
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    return 0;
}