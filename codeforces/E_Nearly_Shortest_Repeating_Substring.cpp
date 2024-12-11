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

vector<ll>Divisors;
void getDivisors(ll n){
    for(ll i =1;i*i<=n;i++){
        if(n%i==0){
            ll xx = i;
            ll yy = n/i;
            if(xx==yy){
                Divisors.push_back(xx);
            }else{
                Divisors.push_back(xx);
                Divisors.push_back(yy);
            }

        }
    }
    sort(Divisors.begin(),Divisors.end());
}
bool Diff(string s1,string s2){
    ll cnt =0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i])cnt++;
    }
    if(cnt>1)return false;
    else return true;
}
//===========================================================
void feel_the_world()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;
   getDivisors(n);
  
   for(auto &it:Divisors){
    string first = s.substr(0,it);
    string last = s.substr(n-it);
    string temp1="",temp2="";
    for(int i=0;i<(n/it);i++){
        temp1+=first;
        temp2+=last;
    }
    // cout<<first<<" "<<last<<endl; 
    if(Diff(s,temp1) || Diff(s,temp2)){
        
        cout<<it;
        nl
        return;
    }
   }
   
}

//===========================================================
int main()
{   razon_hassan
    l t=1;
    cin >> t;
    while (t--)
    {   Divisors.clear();
        feel_the_world();
    }
}
