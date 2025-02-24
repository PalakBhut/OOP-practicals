#include<iostream>
#include<string>
using namespace std;
class item_data
{
    string item_name;
    int item_id;
    float item_price;
    int item_quantity;
public:
    void add_item(string n,int i, float p, int q)
    {
        item_name=n;
        item_id=i;
        item_price=p;
        item_quantity=q;
    }
    int search_item(int s)
    {
        if(s=item_id)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void update_quantity(int u)
    { //item_quantity-=u;
          if(u>item_quantity)
    {
        cout<<"this many items is not available!"<<endl;
    }
        else
        {item_quantity-=u;
        cout<<"now stock has"<<item_quantity<<"items left"<<endl;
        }
    }
    void display_items_data()
    {
        cout<<" the item "<<item_name<<" of id "<<item_id<<" has "<<item_quantity<<" packets each of price "<<item_price<<" in stock"<<endl;
    }
};
int main()
{

    int id,r,search_id;
    string name;
    float price;
    int quantity,choice=9,sold_quantity;
    int count_items=0;
    item_data i[50];
//    cout<<"STOCK"<<endl;
//    cout<<"Enter product name: ";
//    fflush(stdin);
//    cin.ignore();
//    getline(cin,name);
//    cout<<"Enter product ID: ";
//    fflush(stdin);
//    cin>>id;
//    cout<<"Enter price of the product: ";
//    fflush(stdin);
//    cin>>price;
//    cout<<"Enter quantity of the product: ";
//    fflush(stdin);
//    cin>>quantity;
//    fflush(stdin);
//   i[count_items].add_item(name,id,price,quantity);
//    count_items++;
    cout<<"If you wish to add more items to stock then enter 1"<<endl;
    cout<<"If you wish to buy something then enter 2"<<endl;
    cout<<"If you wish to check the list of items in stock then enter 3"<<endl;
    cout<<"Enter 0 to exit the program"<<endl;
    do{
    cout<<"Enter your choice: ";
    fflush(stdin);
    cin>>choice;

    if(choice==1)
    {
        cout<<"STOCK"<<endl;
    cout<<"Enter product name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter product ID: ";
    cin>>id;
    cout<<"Enter price of the product: ";
    cin>>price;
    cout<<"Enter quantity of the product: ";
    cin>>quantity;
    i[count_items].add_item(name,id,price,quantity);
    count_items++;
    }
    else if(choice==2)
    {
        if(count_items==0)
        {
            cout<<"no items in stock";
            break;
        }
        else{
        cout<<"Enter id of the product you bought: ";
        cin>>search_id;
        for(r=0;r<count_items;r++)
        {
            if(i[r].search_item(search_id)==1)
            {

            break;

            }

        }
        if(r==count_items)
        {
            cout<<"No such item is found!";
        }
        else if(r<count_items)
        {
           cout<<"Enter quantity you bought: ";
            cin>>sold_quantity;
            i[r].update_quantity(sold_quantity);
        }}
    }
    else if(choice==3)
    {
        for(r=0;r<count_items;r++)
        {
            i[r].display_items_data();
        }
    }

    }
    while(choice!=0);

}
