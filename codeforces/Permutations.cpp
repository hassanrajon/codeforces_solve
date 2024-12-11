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
     int n;
     cin>>n;
     if(n==2 || n==3){
        cout<<"NO SOLUTION";
        return;
     }else{
        for(int i=2;i<=n;i+=2){
           cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
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
 