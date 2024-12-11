#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
    ll n;
    cin >> n;
    ll arr[n], first[n], second[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    first[0] = arr[0], second[n - 1] = arr[n - 1];
    for (int i = 1; i < n; i++)
        first[i] = first[i - 1] + arr[i];;
    for (int j = n - 2; j >= 0; j--)
        second[j] = second[j + 1] + arr[j];
    ll l=0,r=n-1,ans=0;
    while(l<r){
        if(first[l]==second[r])ans=max(ans,l+1+n-r);
        if(first[l]<=second[r])l++;
        if(second[r]<first[l])r--;
    }
    cout<<ans<<'\n';   
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll tt = 1;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
}
