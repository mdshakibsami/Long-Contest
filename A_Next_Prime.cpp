#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9+7;
signed main()
{
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    
    vector<int>v;

    for(int i=2;i<=(2*1e5);i++)
    {
        bool flag = true;
        for(int j=2;j<=sqrt(i);j++)
        {
            if(i%j==0) 
            {
                flag = false;
                break;
            }
        }
        if(flag) v.push_back(i);
    }

    int n;  cin>>n;

    for(auto x:v)
    {
        if(x>=n) 
        {
            cout<<x<<endl;
            break;
        }
    }

}