#include <bits/stdc++.h>
using namespace std;
const int n = 100000;
int phi[n], mark[n];
int euler_totient(int n)
{
    int ret = n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
            }
        }
        ret-=ret/i;
    }
    if(n>1) ret-=ret/n;
    return ret;
}
int main()
{
    for (int i = 0; i < n; i++)
        phi[i] = i;
    phi[1] = 1, mark[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        if (!mark[i])
        {
            for (int j = i; j <= n; j += i)
            {
                mark[j] = 1;
                phi[j] = phi[j] / i * (i - 1);
            }
        }
    }
    cout<<euler_totient(10);
}