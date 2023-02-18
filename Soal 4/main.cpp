#include <iostream>
#include <string>

using namespace std;

int main()
{
    string mine = "Car";
    string *take = &mine;

    cout << take << "\n";
    cout << &mine << "\n";
    cout << *take << "\n";
    return 0;
}
