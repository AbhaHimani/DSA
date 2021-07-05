#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int x = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (arr[j] == key)
        {
            x = 1;
        }
    }

    if (x == 1)
    {
        cout << "found";
    }
    else
    {
        cout << "no";
    }
    return 0;
}