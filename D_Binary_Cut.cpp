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

//===========================================================
void feel_the_world()
{
    string s;
    cin >> s;
     vector<int> freq;
    char current_char = s[0];
    int cnt = 1;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] == current_char) {
            cnt++;
        } else {
            freq.push_back(cnt);
            current_char = s[i];
            cnt = 1;
        }
    }
    freq.push_back(cnt);
    int ans =0,mx=0;
    if(freq.size()==1){
        cout<<freq.size()<<endl;
    }else{
       if(freq.size()==2 and s[0]=='1'){
        cout<<freq.size()<<endl;
       }else{
        cout<<freq.size()-1<<endl;
       }
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
