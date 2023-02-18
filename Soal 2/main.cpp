#include <iostream>
#include <string>

using namespace std;

float calculate(float r)
{
    return 3.14 * (r * r);
};

int main()
{
    float r;
    cout << "Masukkan Jari - Jari:";
    cin >> r;
    cout << calculate(r);

    return 0;
}
