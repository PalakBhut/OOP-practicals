#include<iostream>
using namespace std;
class Rectangle
{
     float l,w,Area,Perimeter;
public:
    void setDimensions()
    {
        cout<<"Enter Length: ";
        cin>>l;
        cout<<"Enter Width: ";
        cin>>w;
    }
    float area()
    {
        Area=l*w;
        return Area;
    }
    float perimeter()
    {
       Perimeter=2*(l+w);
       return Perimeter;
    }
    void get_dimensions()
    {
        cout<<"length is :"<<l<<endl;
        cout<<"width is :"<<w<<endl;
    }
    void update_dimensions()
    {
        cout<<"Enter new length :";
        cin>>l;
        cout<<"Enter new width :";
        cin>>w;
    }
};
int main()
{
    float length,width,area,perimeter;
    int n,i,z;
    cout<<"Enter number of recatngles: ";
    cin>>n;
    Rectangle R[n];
    for(i=0;i<n;i++)
    {
      R[i].setDimensions();
    }
    next:
        while(z!=222)
        {


        cout<<"Enter recatngle number if it's dimensions is to be updated"<<endl<<"enter 222 to stop updating.";
        cin>>z;
        if(z>n&&z!=222)
        {
            cout<<"ERROR: enter valid number";
        }
        else if(z>=0&&z<=n)
        {
            R[z-1].update_dimensions();
            goto next;
        }

        }


    for(i=0;i<n;i++)
    {
        R[i].get_dimensions();
        //R[i].area=area();
        cout<<"area of rectangle"<<R[i].area()<<endl;
        //R[i].perimeter=perimeter();
        cout<<"perimeter of rectangle"<<R[i].perimeter()<<endl;
    }

    return 0;
}
