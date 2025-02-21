#include<iostream>
using namespace std;
class Bank_account
{
public:
    string name;
    long number;
    int balance;
    void deposit(int added_balance)
    {
        balance+=added_balance;

    }
    void withdraw(int deducted_balance)
    {
        balance-=deducted_balance;
        if(balance<0)
        {
            cout<<endl<<"ERROR:insufficient balance";
        }
        else{}

    }
    void display_amount()
    {
        cout<<endl<<"total amount present in your bank account is: "<<balance;
    }
};
int main()
{
    class Bank_account b1;
    int added_balance,deducted_balance;
    cout<<endl<<"enter name";
    fflush(stdin);
    cin>>b1.name;
    cout<<endl<<"enter number";
    fflush(stdin);
    cin>>b1.number;
    cout<<endl<<"enter balance";
    fflush(stdin);
    cin>>b1.balance;
    cout<<endl<<"enter balance to add";
    fflush(stdin);
    cin>>added_balance;
    b1.deposit(added_balance);
    cout<<endl<<"enter balance to withdraw";
    fflush(stdin);
    cin>>deducted_balance;
    b1.withdraw(deducted_balance);
    b1.display_amount();
    return 0;
}
