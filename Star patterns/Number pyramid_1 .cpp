#include<iostream>
using namespace std;
int main()
{
    int num,i,j;
    cout<<"Enter row = ";
    cin>>num;
    int coun=num-1;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=coun;j++)
            cout<<" ";
        coun--;
        for(j=1;j<=i;j++)
            cout<<j<<" ";
        cout<<endl;
    }

}
