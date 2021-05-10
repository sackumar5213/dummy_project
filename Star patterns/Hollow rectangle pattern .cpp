#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    cin>>n;
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
        for(j=1;j<=n-2;j++)
            {
                cout<<"*";
                for(i=1;i<=n-2;i++)
                {
                    cout<<" ";
                }
                cout<<"*"<<endl;
            }
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }

}
