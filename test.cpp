#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int inf=1e9;

void solve()
{ 
    for(int i=1;i<=30;i++){
        inf=inf/2;
    }
    cout<<inf;
}

int main()
{   
    ll tt = 1;
    while (tt--){
        solve();
    }
}
