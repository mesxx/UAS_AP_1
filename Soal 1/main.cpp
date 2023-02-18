#include <iostream>
#include <string>

using namespace std;

struct identity
{
    string nim;
    string nama;
    int nilai;
};

int main()
{
    identity mine;
    mine.nim = "220401010153";
    mine.nama = "M. Ichsan Fauzan";
    mine.nilai = 100;
    cout << mine.nim << "\n"
         << mine.nama << "\n"
         << mine.nilai;

    return 0;
}
