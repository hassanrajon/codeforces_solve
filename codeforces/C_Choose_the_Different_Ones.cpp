#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
const int mod = 1000000007;
#define razon_hassan              \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

//===========================================================
void feel_the_world()
{
    int n, m, k;
    cin >> n >> m >> k;
    unordered_map<int, int> mp1;
    unordered_map<int, int> mp2;

    while (n--)
    {
        int x;
        cin >> x;
        if (x <= k)
            mp1[x]++;
    }
    while (m--)
    {
        int x;
        cin >> x;
        if (x <= k)
        {
            mp2[x]++;
        }
    }
    int cnt_1,cnt_2;
    cnt_1=cnt_2=k/2;
    stack<int>st;
    for(int i=1;i<=k;i++){
          if(mp1[i]!=0 && mp2[i]!=0){
            st.push(i);
          }else if(mp1[i]!=0 && cnt_1>0){
            cnt_1--;
          }else if(mp2[i]!=0 && cnt_2>0){
            cnt_2--;
          }
    }
    while(cnt_1>0 && !st.empty()){
        cnt_1--;
        st.pop();
    }
    while(cnt_2>0 && !st.empty()){
        cnt_2--;
        st.pop();
    }
    if(cnt_1 || cnt_2){
        no
    }else{
        yes
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
