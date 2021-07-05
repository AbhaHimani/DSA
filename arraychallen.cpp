#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    int lastdigit;
    int firstdigit;
    int w = n;
    lastdigit = w % 10;

    while (n > 10)
    {
        n = n / 10;
    }
    cout << lastdigit + n;

    return 0;
}