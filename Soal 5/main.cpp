#include <iostream>

using namespace std;

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        if (i == 0)
        {
            cout << i + 1 << " ";
        }
        else if (i == 3)
        {
            cout << i + 4 << " ";
        }
        else if (i != 4)
        {
            cout << i + i << " ";
        }
    }
    return 0;
}