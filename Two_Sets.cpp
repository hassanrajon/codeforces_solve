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
    cin >> n;
    vector<int> vec1;
    vector<int> vec2;
    bool found = false;
    if (n % 4 == 0)
    {   found = true;
        int temp = n / 4, i = 1;
        while (temp--)
        {
            vec1.push_back(i);
            i++;
        }
        temp = n / 4, i = n;
        while (temp--)
        {
            vec1.push_back(i);
            i--;
        }
        temp = n / 4, i = temp * 2;
        temp++;
        while (i--)
        {
            vec2.push_back(temp);
            temp++;
        }
    }
    else if (n % 4 == 3)
    {   found = true;
        vec1.push_back(n);
        vec2.push_back(1);
        vec2.push_back(n-1);
        int temp = n - 2, i = 2;

        while (i < temp)
        {
            if (i % 2)
            {
                vec2.push_back(i);
                vec2.push_back(temp);
            }else{
                vec1.push_back(i);
                vec1.push_back(temp);
            }
            i++,temp--;
        }
    }
    if(found){
    yes
        cout<<vec1.size()<<endl;
        for(auto it:vec1){
           cout<<it<<" ";
        }
        nl
        cout<<vec2.size();
        nl
        for(auto it:vec2){
             cout<<it<<" ";
        }
    }else{
        no
    }
}

//===========================================================
int main()
{
    l t = 1;
    // cin >> t;
    while (t--)
    {
        feel_the_world();
    }
}
