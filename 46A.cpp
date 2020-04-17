#include<iostream>
using namespace std;
int main()
{
    int i,j,n,ans;
    cin>>n;
    if(n==2)
        cout<<"2\n";
    else
    {
        for(i=2,j=2;i<=n;i++)
        {
            ans=j%n;
            if(ans==0)
                ans=n;
            cout<<ans<<" ";
            j+=i;
        }
        cout<<endl;
    }
    return 0;
}
