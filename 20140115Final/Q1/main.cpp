#include <cstdlib>
#include <iostream>

using namespace std;

struct CDAccountV1
{
    double balance;
    double interestRate;
    int term;
};

void getData(CDAccountV1& theAccount);

int main(int argc, char *argv[])
{
    CDAccountV1 account;
    getData(account);
    double rateFraction, interest;
    rateFraction = account.interestRate/100;
    interest = account.balance * rateFraction / 12 * account.term;
    account.balance = account.balance + interest;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "When your CD matures in "
    << account.term << " months,\n"
    << "it will have a balance of $"
    << account.balance << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void getData(CDAccountV1& theAccount)
{
    cout << "Enter account balance: $";
    cin >> theAccount.balance;
    cout << "Enter account interest rate: ";
    cin >> theAccount.interestRate;
    cout << "Enter the number of month until maturity: ";
    cin >> theAccount.term;
}
