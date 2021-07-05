#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {

        int x;
        int D, d, P, Q;
        cin >> D >> d >> P >> Q;
        x = D / d; // 3 2 1 1    1* 1
        int y = D % d;
        int total = 0;
        if (x % 2 == 0)
        {
            total = total + d * ((x / 2) * ((2 * P + (x - 1) * Q)));
            /* code */
        }
        else
        {
            total = total + d * ((x) * (P + (((x - 1) / 2) * Q)));
        }

        total = total + ((y) * (P + ((x)*Q)));

        cout << total;
    }

    return 0;
}