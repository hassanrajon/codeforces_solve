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
   int n;
   cin>>n;
   vector<int>first(n),second(n);
   for(auto &it:first)cin>>it;
   for(auto &it:second)cin>>it;
   int first_position=-1,last_position=-1;
   for(int i=0;i<n;i++){
     if(first[i]!=second[i]){
       if(first_position==-1)first_position=i;
       last_position=i;
     }
   }
   while(first_position>0 and second[first_position-1]<=second[first_position])
   first_position--;
   while(last_position<n-1 and second[last_position]<=second[last_position+1])last_position++;
   cout<<(++first_position)<<" "<<(++last_position)<<"\n";
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
