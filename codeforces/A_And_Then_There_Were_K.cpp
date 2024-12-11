#include <bits/stdc++.h>
using namespace std;
#define nl cout << "\n";
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define pb push_back
#define pp pop_back
#define ll long long int
#define l long int
//===========================================================
void feel_the_world()
{
    ll n;
    cin>>n;
    int cnt=0;
    while(n>0){
        cnt++;
        n/=2;
    }
    cout<<(1<<(--cnt))-1<<"\n";

}

//===========================================================
int main()
{
    l t=1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
