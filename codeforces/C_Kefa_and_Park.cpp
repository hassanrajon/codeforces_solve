#include <bits/stdc++.h>
using namespace std;
#define nl coxt << "\n";
#define yes coxt << "YES\n";
#define no coxt << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;
const int N = 1e5 + 10;
int cat[N];
int mx_cat, ans = 0;
vector<int> graph[N];

void dfs(int vertex, int parent, int c = 0)
{
  
    if (cat[vertex])
        c++;
    else
        c = 0;
    if (c > mx_cat)
    {
        return;
    }
    int child_count = 0;
    for (int child : graph[vertex])
    {
        if (child!=parent)
        {
            child_count++;
            dfs(child, vertex, c);
        }
    }
    if (child_count == 0)
    {
        ans++;
    }
}
//===========================================================
void feel_the_world()
{
    int n, m;
    cin >> n >> m;
    mx_cat = m;
    for (int i = 1; i <= n; i++)
    {
        cin >> cat[i];
    }
    for (int i = 0; i < (n - 1); i++)
    {
        int x, y;
        cin >> x >> y;
        graph[y].push_back(x);
        graph[x].push_back(y);
    }
    dfs(1, -1);

    cout << ans;
}

//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
