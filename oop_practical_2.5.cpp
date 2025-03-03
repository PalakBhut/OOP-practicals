#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class loan_details
{
    string holder_name;
    double loan_amount;
    double interest_rate;
    int loan_tenure;
    double EMI;
    double EMI_calculator()
    {
        EMI=(loan_amount*interest_rate*pow(1+interest_rate,loan_tenure))/(pow(1+interest_rate,loan_tenure)-1);
        return EMI;

    }
public:
    void get_data_of_loan( string nme,double amnt,double rte,int tenure)
    {
        holder_name=nme;
        loan_amount=amnt;
        interest_rate=rte;
        loan_tenure=tenure;
        EMI_calculator();

    }
    void display_loan_details()
    {
        cout<<setw(8)<<holder_name<<" "<<setw(8)<<loan_amount<<" "<<setw(8)<<interest_rate<<" "<<setw(8)<<loan_tenure<<" "<<setw(8)<<EMI<<endl;
    }

};


int main()
{
    string name;
    double amount;
    double rate;
    int time_period;
    int choice,loan_count=0;
    loan_details l[100];
    cout<<"Enter 1 to add a loan details."<<endl<<"Enter 2 to display the details."<<"Enter 0 to exit"<<endl;
    do
    {
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:

            cout<<"Enter holder name: ";
            cin>>name;
            cout<<"Enter loan amount: ";
            cin>>amount;
            cout<<"Enter interest rate: ";
            cin>>rate;
            cout<<"Enter time: ";
            cin>>time_period;
            l[loan_count].get_data_of_loan(name,amount,rate,time_period);
            loan_count++;
            break;
        case 2:
            for(int i=0; i<loan_count; i++)
            {
                l[i].display_loan_details();
            }

            break;


        }

    }
    while(choice!=0);
    return 0;
}
