#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
int N = 1e6;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n), Sieve(N + 1);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 0; i <= N; i++)
        Sieve[i] = 1;

    //         Sieve 

    Sieve[0] = 0, Sieve[1] = 0;
    for (int i = 2; i*i <= N; i++)
    {
        if (Sieve[i]==1)
        {
            for(int j= i*i; j<=N;j+=i)
            {
                Sieve[j]=0;
            }
        }
    }

    for(auto x:v)
    {
        int y = (int) sqrt(x);
        if((y*y==x) && Sieve[y]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}