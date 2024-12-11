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
   int a,b,c;
   cin>>a>>b>>c;
   multiset<int>st;
   for(int i=0;i<c;i++){
    st.insert(0);
   }
   for(int i=0;i<b;i++){
     if(st.empty()){
        cout<<"-1\n";
        return;
     }
     int x = *st.begin();
     st.erase(st.begin());
     st.insert(++x);
   }
   for(int i=0;i<a;i++){
    if(st.size()<2){
        cout<<"-1\n";
        return;
    }
    st.erase(st.begin());
    int x =*st.begin();
    st.erase(st.begin());
    st.insert(++x);
   }
   if(st.size()==1){
    cout<<*st.begin()<<"\n";
   }else{
    cout<<"-1\n";
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
