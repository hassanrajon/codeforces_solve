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
   int n,m,q;
   cin>>n>>m>>q;
   vector<int>teachers(m),david(q);
   for(auto &it:teachers)cin>>it;
   for(auto &it:david)cin>>it;
   sort(teachers.begin(),teachers.end());
   for(auto it:david){
    int pos=upper_bound(teachers.begin(),teachers.end(),it)-teachers.begin();
    if(pos==0)cout<<teachers[0]-1<<'\n';
    else if(pos==m)cout<<(n-teachers[m-1])<<'\n';
    else cout<<(teachers[pos]-teachers[pos-1])/2<<'\n';
   }
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
