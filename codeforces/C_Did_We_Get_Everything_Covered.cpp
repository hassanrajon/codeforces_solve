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

    int n, k, m;
    cin >> n >> k >> m;
    string s;
    cin >> s;
    set<char> st;
    string ans = "";
    for (int i = 0; i < m; i++)
    {
        st.insert(s[i]);
        if (st.size() == k)
        {
            ans.push_back(s[i]);
            st.clear();
        }
    }
    if (ans.size() >= n)
    {
        yes
    }
    else
    {
        no char missing;
        for (int i = 0; i < k; i++)
        {
            char ch = (char)('a' + i);
            if (st.count(ch) == 0)
            {
                missing = ch;
                break;
            }
        }
        while(ans.size()<n)ans.push_back(missing);
        cout<<ans;
        nl
    }
}

//===========================================================
int main()
{
    l t = 1;
    cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
