#include <iostream>
using namespace std;

int main()
{
    int a,b,i,c;
    cout<<"enter two numberes"<<endl;
    cin>>a>>b;
    cout<<"*****menu*********"<<endl;
    cout<<"1:Add"<<endl<<"2:Sub"<<endl<<"3:multiply"<<endl<<"4:divide"<<endl;
    cout<<"enter your choice";
    cin>>i;
    switch(i){
        case 1:
        {
            int z;
            z=a+b;
            cout<<"sum of two numbers is z:"<<z;
        }break;
        case 2:
        {
           int z;
           z=a-b;
           cout<<"sub of two numbers z:"<<z;
        }break;
        case 3:
        {
            int z;
            z=a*b;
            cout<<"mul of two numbers is z:"<<z;
        }break;
        case 4:
        {
            int z;
            z=a/b;
            cout<<"division of two numbers is z:"<<z;
        }break;
        default:
        {
            cout<<"wrong input";
        }break;

    }

   return 0;
}