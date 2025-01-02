#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;

void Print_N_Times(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    Print_N_Times(++i, n);
}
void print_n_to_1(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    print_n_to_1(--n);
}
int sum_of_1_to_n(int n, int sum)
{
    if (n == 0)
    {
        return sum;
    }
    sum += n;
    sum_of_1_to_n(--n, sum);
}
int sum_of_1_to_n(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum_of_1_to_n(n - 1);
}
//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    // cin >> t;
    while (t--)
    {
        Print_N_Times(1, 10);
        nl
            print_n_to_1(10);
        nl
                cout
            << sum_of_1_to_n(10, 0);
        nl

                cout
            << sum_of_1_to_n(10);
    }
}
