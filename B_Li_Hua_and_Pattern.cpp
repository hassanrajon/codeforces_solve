#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define ll long long int
#define l long int
#define razon_hassan                 \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;


//===========================================================
void feel_the_world()
{
   ll n,k;
   cin>>n>>k;
   vector<vector<int>>vec(n,vector<int>(n));
   for(auto &first:vec){
    for(auto &it:first)cin>>it;
   }
//    for(auto first:vec){
//     for(auto it:first)cout<<it<<" ";nl
//    }

for(int i=0;i<(n/2);i++){
    for(int first=0,last=n-1;first<n;first++,last--){
        if(vec[i][first]!=vec[n-1-i][last]){
            k--;
        }
    }
}
if(n&1){
    for(int i=0,j=n-1;i<(n/2);i++,j--){
        if(vec[n/2][i]!=vec[n/2][j])k--;
    }
}
if(k>=0){
    if(n&1)yes
    else if(k&1)no
    else yes
}
else no
}

//===========================================================
int main()
{   razon_hassan
    l t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
