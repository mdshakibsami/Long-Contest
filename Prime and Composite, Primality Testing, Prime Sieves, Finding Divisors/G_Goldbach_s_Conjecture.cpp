#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);


    int N = 1e6;
    vector<int>Sieve(N+1);
    for(int i=0;i<=N;i++) Sieve[i]=1;
    Sieve[0]=Sieve[1]=0;
    for(int i=2;i*i<=N;i++)
    {
        if(Sieve[i]==1)
        {
            for(int j=i*i;j<=N;j+=i)
            {
                Sieve[j]=0;
            }
        }
    }

    
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
            break;
        else
        {
            for(int i=2;i<=n;i++)
            {
                if(Sieve[i]==1)
                {

                    int x = n-i;
                    if(Sieve[x]==1)
                    {
                        cout<<n<<" = "<<i<<" + "<<x<<endl;
                        break;
                    }
                }
            }
        }
    }
}