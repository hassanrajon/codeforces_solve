#include <bits/stdc++.h>
using namespace std;
long long int big_mod(long long a, long long b, long long M)
{
    a %= M;
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = res * a % M;
        }
        a = a * a % M;
        b >>= 1;
    }
    return res;
}
long long int recursive_big_mod(long long a, long long b, long long M)
{
    if (b == 0)
        return 1;
    long long res = recursive_big_mod(a, b / 2, M);
    res = (res * res) % M;
    if (b & 1)
    {
        res = (res * a) % M;
    }
    return res;
}
int main()
{
    cout << big_mod(2, 1e18, 100) << endl;
    cout << recursive_big_mod(2, 1e18, 100);
}