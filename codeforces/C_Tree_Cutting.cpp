#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;
// Aliases
#define ll long long int
#define l long int
// macros
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> os;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define fl(i,n) for(int i=0;i<n;i++)
#define no cout << "NO\n";
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
// constants
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;
const long double pi = 3.141592653589793238;
const ll INF = LONG_LONG_MAX;
// Mathematical functions
ll lcm(ll a, ll b){return (a/__gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}
//Check
bool isPrime(ll n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}
bool isPowerOfTwo(int n){if(n==0)return false;return (ceil(log2(n)) == floor(log2(n)));}
bool isPerfectSquare(ll x){if (x >= 0) {ll sr = sqrt(x);return (sr * sr == x);}return false;}
const ll N = 2e5+5;
int n, k, sz[N], cnt;
vector<int> adj[N];
void dfs(int vertex,int par,int mid){
    sz[vertex]=1;
    for(int child:adj[vertex]){
        if(child==par)continue;
        dfs(child,vertex,mid);
        sz[vertex]+=sz[child];
    }
    if(sz[vertex]>=mid && cnt<k && par!=0){
        cnt++;
        sz[vertex]=0;
    }

}
//===========================================================
void feel_the_world()
{
    cin >> n >> k;
    fl(i, n - 1)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int lo = 1, hi = n, ans = 0;
    while (lo <= hi)
    {
        int mid = (lo + hi) >> 1;
        for (int i = 1; i <= n; i++)
            sz[i] = 0;
        cnt = 0;
        dfs(1, 0, mid);
        if (cnt == k and sz[1] >= mid)
        {
            ans = max(ans, mid);
            lo = mid + 1;
        }
        else
        {
            hi = mid - 1;
        }
    }
    cout << ans << endl;
    for (int i = 0; i <= n; i++)
    {
        adj[i].clear();
        sz[i] = 0;
    }
}
//===========================================================
int main()
{
    razon_hassan
        l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
