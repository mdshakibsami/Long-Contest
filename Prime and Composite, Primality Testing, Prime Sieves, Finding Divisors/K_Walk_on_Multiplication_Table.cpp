#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    int n;  cin>>n;
    int mn = 1e12;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int x = i+(n/i);
            mn = min(mn,x);
        }
    }
    cout<<mn-2<<endl;
}