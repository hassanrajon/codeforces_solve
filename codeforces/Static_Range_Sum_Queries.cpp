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
const int N = 2e5 + 10;
vector<ll> Tree(4 * N);
vector<int> vec;
int buildTree(ll i, ll start, ll end)
{
    if (start == end)
    {
        Tree[i] = vec[start];
        return vec[start];
    }
    ll mid = (start + end) / 2;
    buildTree(2 * i + 1, start, mid);
    buildTree(2 * i + 2, mid + 1, end);
    Tree[i] = Tree[2 * i + 1] + Tree[2 * i + 2];
    return Tree[i];
}
ll query(int i, int si, int sj, int qi, int qj)
{
    if (qj < si || qi > sj)
    {
        return 0;
    }
    else if (si >= qi and sj <= qj)
    {
        return Tree[i];
    }
    else
    {
        ll mid = (si + sj) / 2;
        ll left = query(2 * i + 1, si, mid, qi, qj);
        ll right = query(2 * i + 2, mid + 1, sj, qi, qj);
        return (left + right);
    }
}
//===========================================================
void feel_the_world()
{
    int n, q;
    cin >> n >> q;
    // cout<<n<<q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    buildTree(0, 0, n - 1);
    // for(auto it:Tree){
    //     if(it==0){
    //         break;
    //     }else{
    //         cout<<it<<" ";
    //     }
    // }
    while (q--)
    {
        int qi, qj;
        cin >> qi >> qj;
        cout << (query(0, 0, n - 1, --qi, --qj)) << endl;
    }
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
