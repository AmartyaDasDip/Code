#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t,x,m;
    vector<int>a(500,0);
    cin>>n;
    for(i=1;;i++)
    {
        x=(i*(i+1))/2;
        a[x]=1;
        if(x>500)
            break;
    }
    if(a[n]==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
