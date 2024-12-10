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
    int arr[11];
    arr[0]=1;
    for(int i=1;i<11;i++){
        arr[i]=arr[i-1]*i;
    }
    int n;
    cin>>n;
    int temp = n;
    while(temp--){
        int x;
        cin>>x;
    }
    int fact = (arr[10-n])/((arr[10-n-2])*2);
    cout<<fact*6;
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
