#include <iostream>
using namespace std;

class bankaccount
{
private:
    float balance;

public:
    bankaccount(float b)
    {
        balance = b;
    }

    
    friend void audit(bankaccount acc);
};


void audit(bankaccount acc)
{
    cout << "Balance: " << acc.balance << endl;
}

int main()
{
    bankaccount b1(1000.5);
    audit(b1);
    return 0;
}
