#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int row,col;
    cout<<"Enter row and col = ";
    cin>>row;
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if(j<row-i)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }

}
