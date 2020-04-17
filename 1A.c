#include<bits/stdc++.h>
using namespace std;

void update(vector<long long >&tree, vector<long long>&lazy, long long node, long long newValue, long long b, long long e, long long i, long long j)
{
    if(j<b || i>e)
        return;
    if(i<=b && e<=j)
    {
        lazy[node] += newValue;
        return;
    }
    long long left = 2 * node;
    long long right = 2 * node + 1;
    long long mid = (b+e) / 2;
    update(tree,lazy,left,newValue,b,mid,i,j);
    update(tree,lazy,right,newValue,mid+1,e,i,j);


}

long long query(vector<long long >&tree, vector<long long>&lazy, long long node, long long b, long long e, long long i)
{
    if(i<b || e<i)
        return 0;
    long long left = 2 * node;
    long long right = 2 * node + 1;
    long long mid = (b + e) / 2;

    if(b==e && b==i)
    {
        tree[node] += lazy[node];
        lazy[left] += lazy[node];
        lazy[right] += lazy[node];
        lazy[node] = 0;
        return tree[node];
    }

    if(b<=i && i<=e)
    {
        tree[node] += lazy[node] * (e - b + 1);
        lazy[left] += lazy[node];
        lazy[right] += lazy[node];
        lazy[node] = 0;
    }

    long long q1= query(tree,lazy,left,b,mid,i);
    long long q2 =query(tree,lazy,right,mid+1,e,i);
    return q1+q2;

}



int main()
{
    long long test,q,index,b,e,i,k=1;
    char ch;
    string str;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%s",str);

        vector<long long>tree(3*99999,0);
        vector<long long>lazy(3*99999,0);


        scanf("%lld",&q);
        cout<<"Case "<<k++<<":"<<endl;
        while(q--)
        {
            scanf("%c",&ch);
            if(ch=='I')
            {
                //cin>>b>>e;
                scanf("%lld %lld",&b,&e);

                update(tree,lazy,1,1,0,str.length()-1,b-1,e-1);
            }
            else
            {
                //cin>>index;
                scanf("%lld",&index);
                if( query(tree,lazy,1,0,str.length()-1,index-1)%2==0)
                    printf("%s\n",str[index-1]);
                   // cout<<str[index-1]<<endl;
                else
                {
                    if(str[index-1]=='1')
                        printf("0\n");
                       // cout<<0<<endl;
                    else
                        printf("1\n");
                        //cout<<1<<endl;
                }
            }
        }
    }
}
