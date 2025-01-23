#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N = 1e3;
    vector<int> Sieve(N + 1);
    for (int i = 0; i <= N; i++)
        Sieve[i] = 1;
    Sieve[0] = Sieve[1] = 0;
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


    int n;
    cin >> n;
    if (n <= N)
    {
        if (Sieve[n] == 1)
        {
            cout << 1 << endl;
            cout << n << endl;
            return 0;
        }
    }

    for (int i = 0; i <=N; i++)
    {
        if (Sieve[i] == 1)
        {

            for (int j = 0; j <=N; j++)
            {
                if (Sieve[j] == 1)
                {
                    int x = n - (i + j);
                    if (x == 0)
                    {
                        cout << 2 << endl;
                        cout << i << " " << j << endl;
                        return 0;
                    }
                    else if(x>1)
                    {
                        bool flag = true;
                        for (int k = 2; k <= sqrt(x); k++)
                        {
                            if (x % k == 0)
                            {
                                flag = false;
                                break;
                            }
                        }
                        if (flag)
                        {
                            cout<<3<<endl;
                            cout << i << " " << j << " " << x << endl;
                            return 0;
                        }
                    }
                }
            }
        }
    }
}