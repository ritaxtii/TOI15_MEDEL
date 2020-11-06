#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int a;
    cin>>a;
    long long int ly[a+1],t[a+1],q[a+1];
    for(int i=0;i<a;i++)
    {
        cin>>t[i];
    }
    for(int i=0;i<a;i++)
    {
        cin>>ly[i];
    }
    sort(ly,ly+a);
    sort(t,t+a,greater<int>());
    for(int i=0;i<a;i++)
    {
        q[i]=ly[i]+t[i];
    }
     sort(q,q+a);
     cout<<q[a-1]-q[0];
    return 0;
}
