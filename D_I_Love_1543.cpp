#include <bits/stdc++.h>
using namespace std;
#define ll long long int   
void solve()
{   int n,m;cin>>n>>m;
    vector<vector<char>>matrix(n,vector<char>(m));
    for(int i=0;i<n;i++)
      for(int j=0;j<m;j++)cin>>matrix[i][j];
    int ans=0;
	for (int layer = 0; layer < (min(n, m) + 1) / 2; ++layer) {
        string s = "";
		for (int i = layer; i < m - layer; ++i)
			s += matrix[layer][i];
		for (int i = layer + 1; i < n - layer; ++i)
			s += matrix[i][m - layer - 1];
		for (int i = m - layer - 2; i >= layer; --i)
			s += matrix[n - layer - 1][i];
		for (int i = n - layer - 2; i > layer; --i)
			s += matrix[i][layer];
		string ss = s;ss += s.substr(0,3);
		for (int i = 0; i + 3 < ss.size(); i++) ans += ss.substr(i, 4) == "1543";
		
	}
    cout<<ans<<'\n';
}
int main()
{   ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt=1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
