#include <iostream>
#include <string>
using namespace std;
class BankDeposit
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r);
    // r can be  a value like 0.04
    BankDeposit(int p, int y, int r);
    void show();
};
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void BankDeposit ::show()
{
    cout << endl
         << "Principal amount" << p << "Return value after" << y << "years is" << returnValue;
}
int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();

    return 0;
}