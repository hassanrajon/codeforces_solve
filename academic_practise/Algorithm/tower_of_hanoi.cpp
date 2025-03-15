#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void toh(int n, char s, char m, char d)
{
    if (n == 1)
    {
        cout << s << " " << d << '\n';
        return;
    }
    toh(n - 1, s, d, m);
    cout << s << " " << d << '\n';
    toh(n - 1, m, s, d);
}
int main()
{
    toh(3, 'S', 'M', 'D');
}