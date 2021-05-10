#include<iostream>
using namespace std;
int main()
{
    int i,row,j;
    cout<<"row = ";
    cin>>row;
    int coun=row-1;
    for(i=1;i<=2*row-1;i+=2)
    {
        for(j=1;j<=coun;j++)
            cout<<" ";
        coun--;
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }
    coun=1;
    for(i=2*row-1;i>=1;i-=2)
    {
        if(i!=(2*row-1))
        {
            for(j=1;j<=coun;j++)
            cout<<" ";
        coun++;
        for(j=1;j<=i;j++)
            cout<<"*";
        cout<<endl;
        }
    }

}
