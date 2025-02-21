#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class account_details
{
    int acc_num;
    double current_balance,deposit_money,withdraw_money;
    string acc_holder;
    static double min_balance;
public:
    int add_account( string nme,int num,double cbal)
    {
        acc_holder=nme;
        acc_num=num;
        current_balance=cbal;
        if(current_balance<min_balance)
        {
            cout<<"Your initial balance should be greater than or equal to 5000/-";
            return 1;
        }
        return 0;
    }
    int search_account(int x)
    {
        if(acc_num==x)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void deposit_amount()
    {
        cout<<"Enter amount to deposit: ";
        cin>>deposit_money;
        current_balance+=deposit_money;
        cout<<"Now your account holds "<<current_balance<<"/-"<<endl;
    }
    int withdraw_amount()
    {

        cout<<"Enter amount to withdraw: ";
        cin>>withdraw_money;
        current_balance-=withdraw_money;
        if(current_balance<min_balance)
        {
            cout<<"You cannot withdraw this much amount."<<endl<<"total balance is going below minimum amount."<<endl;
            current_balance+=withdraw_money;
            return 1;
        }
        else
        {
            cout<<"Now your account holds "<<current_balance<<"/-"<<endl;
            return 0;
        }
    }
    void list_of_accounts()
    {
        cout<<setw(10)<<acc_num<<setw(7)<<acc_holder<<setw(10)<<current_balance<<setw(-9)<<endl;
    }

};
double account_details::min_balance=5000;
int main()
{
    account_details ac[50];
    int count=0,input;
    int num,search_accnum,i;
    double cBalance;
    string name;
    cout<<"Enter 1 to add account"<<endl<<"Enter 2 to deposit amount"<<endl<<"Enter 3 to withdraw amount"<<endl<<"Enter 0 to display list of accounts"<<endl<<"Enter 5 to exit";
    cout<<"Enter your choice(0-3): ";
    fflush(stdin);
    cin>>input;
    switchs:
    switch(input)
    {
    case 0:
        for(i=0; i<count; i++)
        {
            ac[i].list_of_accounts();
        }
        break;
    case 1:
        cout<<"Enter name of the holder: ";
        cin>>name;
        cout<<"Enter account number: ";
        cin>>num;
        cout<<"Enter current balance: ";
        cin>>cBalance;

        if(ac[count].add_account(name,num,cBalance)==1)
        {
            cout<<"Enter current balance: ";
            cin>>cBalance;

        }
        else
        {
            ac[count].add_account(name,num,cBalance);
            count++;
        }

        break;
    case 2:
        cout<<"Enter account number to deposit money: ";
        cin>>search_accnum;
        for(i=0; i<count; i++)
        {
            if(ac[i].search_account(search_accnum)==1)
            {
                break;
            }
        }
        if(i==count)
        {
            cout<<"No such account is found.";
        }
        else
        {
            ac[i].deposit_amount();
        }
        break;
    case 3:
        cout<<"Enter account number to withdraw money: ";
        cin>>search_accnum;
        for(i=0; i<count; i++)
        {
            if(ac[i].search_account(search_accnum)==1)
            {
                break;
            }
        }
        if(i==count)
        {
            cout<<"No such account is found.";
        }
        else
        {
            if(ac[i].withdraw_amount()==1)
            {
                ac[i].withdraw_amount();
            }
            else
            {
                ac[i].withdraw_amount();
            }
        }
        break;

    }
    cout<<"Enter your choice(0-3): ";
    fflush(stdin);
    cin>>input;
    if(input!=5)
    {
        goto switchs;
    }
}
