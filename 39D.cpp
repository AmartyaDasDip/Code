#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5};
    int i,j,n,t,x1,x2,y1,y2,z1,z2;
    cin>>x1>>y1>>z1;
    cin>>x2>>y2>>z2;
    if(abs(x1-x2)+abs(y1-y2)+abs(z1-z2)==3)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}
