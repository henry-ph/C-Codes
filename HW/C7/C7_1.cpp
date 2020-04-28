#include <iostream>
#include <string>
using namespace std;

class Account
{
    string userName;

public:
    Account(){};
    Account(string name);
    void PrintUserName();
};

class CreditAccount : public Account
{
public:
    CreditAccount(string name, long credit);
    void PrintInfo();

private:
    long credit;
};

//请实现Account构造函数Account(string name)
Account::Account(string name) : userName(name){};

//请实现Account的PrintUserName()函数
void Account::PrintUserName()
{
    cout << userName << endl;
}

//请实现CreditAccount类的构造函数CreditAccount(string name, long number)
CreditAccount::CreditAccount(string name, long number) : Account(name), credit(number){};

//请实现CreditAccount类的PrintInfo()函数
void CreditAccount::PrintInfo()
{
    PrintUserName();
    cout << credit << endl;
}

int main()
{
    CreditAccount a("I Love CPP", 10000);
    a.PrintInfo();
    return 0;
}