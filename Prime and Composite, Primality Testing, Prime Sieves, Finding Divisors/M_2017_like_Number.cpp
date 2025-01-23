#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    //         Sieve
    int N = 1e6;
    vector<int> Sieve(N + 1);
    for (int i = 0; i <= N; i++)
        Sieve[i] = 1;

    Sieve[0] = 0, Sieve[1] = 0;
    for (int i = 2; i * i <= N; i++)
    {
        if (Sieve[i] == 1)
        {
            for (int j = i * i; j <= N; j += i)
            {
                Sieve[j] = 0;
            }
        }
    }

    vector<int> preCal(N + 1);
    preCal[0] = 0;
    int count = 0;

    for (int i = 1; i <= N; i ++)
    {
        if (Sieve[i] && Sieve[(i + 1) / 2] && i%2!=0)
        {
            count++;
            preCal[i] = count;
            continue;
        }
        
        preCal[i] = count; 
        
    }

    int tc;
    cin >> tc;
    while (tc--)
    {
        int l, r;
        cin >> l >> r;
        cout<<preCal[r]-preCal[l-1]<<endl;
    }
}