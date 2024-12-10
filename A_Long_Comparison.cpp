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
   ll x1,x2,p1,p2;
   cin>>x1>>p1>>x2>>p2;
   int n = min(p1,p2);
   p1-=n,p2-=n;
   if(p1>=7)
      cout<<">\n";
    else if(p2>=7)
      cout<<"<\n";
      else{
        for(int i=0;i<p1;i++) x1*=10;
        for(int i=0;i<p2;i++)x2*=10;
        if(x1==x2)
           cout<<"=\n";
           else if(x1>x2)
            cout<<">\n";
            else 
              cout<<"<\n";
      }

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
