#include<iostream>
#include<iomanip>
using namespace std;
class product
{
    int product_id;
    string product_name;
    int product_quantity=1;
    float product_price;
    float total_amount;
    static float bill_amount;
public:
    void add_product(int id,string name,float price)
    {
        product_id=id;
        product_name=name;
        product_price=price;
        total_amount=price;
    }
    int search_product(int id)
    {
        if(product_id==id)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void update_product()
    {

        product_quantity++;
        cout<<"your quantity has been increased by 1."<<endl;
        total_amount=product_price*product_quantity;

    }
    float total(float bill)
    {
        bill=bill_amount;
        return total_amount;

    }

};
float product::bill_amount;
int main()
{
    char input;
    int id,i,count_items=0;
    string name;
    float price;
    float bill;
    product p[50];
next:

    cout<<"enter id:" ;
    fflush(stdin);
    cin>>id;
    cout<<"enter name:" ;
    fflush(stdin);
    cin>>name;
    cout<<"enter price:" ;
    fflush(stdin);
    cin>>price;
    if(count_items==0)
    {
        p[0].add_product(id,name,price);
        count_items++;

    }
    else
    {
        for(i=0;i<count_items;i++)
        {
            if(p[i].search_product(id)==1)
            {
                break;
            }
        }
        if(i==count_items)
        {
            p[i].add_product(id,name,price);
            count_items++;

        }
        else
        {
            p[i].update_product();
        }

    }
    cout<<"Y to continue N to exit: ";
    fflush(stdin);
    cin>>input;
    if(input=='Y')
    {
        goto next;
    }
    else if(input=='N')
    {
        for(i=0;i<count_items;i++)
        {
            bill+=p[i].total(bill);
        }
        cout<<"your amount to pay is: "<<bill;
        cout<<endl<<"THANK YOU FOR VISITING :)";
    }

return 0;
}
