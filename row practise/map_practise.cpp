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
    // stack<int>st;
    // for(int i=0;i<11;i++){
    //     int s;
    //     cin>>s;
    //     st.push(s);
    // }
    // while(!st.empty()){
    //     cout<<st.top()<<"\n";
    //     st.pop();
    // }
     stack<int> s;
    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        s.push(x);
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

//===========================================================
int main()
{
    l t=1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
