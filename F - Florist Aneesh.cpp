// Language: C++
#include <bits/stdc++.h>
using namespace std;
const long long mod = 1000000007;

long long binPow(long long a, long long b)
{
    long long ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return ans;
}

long long ncr(long long a, long long b)
{
    long long ans = 1;
    for (long long i = a; i > a - b; i--)
    {
        ans = (ans * i) % mod;
    }
    for (long long i = 1; i <= b; i++)
    {
        ans = (ans * binPow(i, mod - 2)) % mod;
    }
    return ans;
}

int main()
{
    long long n, a, b;
    cin >> n >> a >> b;

    long long ans;
    ans = binPow(2, n) - 1;

    long long nca, ncb;
    nca = ncr(n, a);
    ncb = ncr(n, b);

    ans = ((ans - nca - ncb) % mod + mod) % mod;
    cout << ans;
    return 0;
}