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
    int n,k;
    cin>>n>>k;
    string s;
    for(int i=0;i<k;i++){
        s.push_back(i+'a');
    }
    cout<<s;
    reverse(s.begin(),s.end());
    n--;
    while(n--){
        cout<<s;

    }
    nl
    
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
