#include<iostream>
#include<string>
using namespace std;
class student
{
    short int roll_number;
    string name;
    float marks1;
    float marks2;
    float marks3;
    float average;
public:
    void get_data( short int R=0,string N=NULL,float m1=00,float m2=00,float m3=00)
    {
        roll_number=R;
        name=N;
        marks1=m1;
        marks2=m2;
        marks3=m3;
        average=(marks1+marks2+marks3)/3;
        cout<<"average is : "<<average;
    }
    void display_data()
    {
        cout<<"student roll number is :"<<roll_number<<endl;
        cout<<"student name is :"<<name<<endl;
        cout<<"marks of subject 1 is:"<<marks1<<endl;
        cout<<"marks of subject 2 is:"<<marks2<<endl;
        cout<<"marks of subject 3 is:"<<marks3<<endl;
        cout<<"calculated average of the student is :"<<average<<endl;

    }

};
int main()
{
    cout<<"enter roll_number,name and marks of the student"<<endl;
    student s[5];
    int number_of_students=0,i;
    short int R;
    string N;
    float m1;
    float m2;
    float m3;
    float average;




    int input;
    for( i=0; i<5; i++)
    {

        cout<<endl<<"enter 1 to continue and 0 to end"<<endl;
        cin>>input;
        if(input==1)
        {
        cout<<"enter roll_number: ";
        cin>>R;
        cout<<"enter name: ";
        cin>>N;
        cout<<"enter marks of subject1: ";
        cin>>m1;
        cout<<"enter marks of subject2: ";
        cin>>m2;
        cout<<"enter marks of subject3: ";
        cin>>m3;
            s[i].get_data(R,N,m1,m2,m3);
        }
        else if(input==0)
        {
            goto further;
        }


    }
    further:

    number_of_students=i;
        for(i=0;i<number_of_students;i++)
        {
            s[i].display_data();
        }


}
