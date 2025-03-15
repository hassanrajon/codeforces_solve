#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e6+1;
ll fib[N];
void pre(){
 fib[0]=0;
 fib[1]=1;
 for(int i=2;i<=N;i++){
   fib[i]=fib[i-1]+fib[i-2];
 }
}
int main(){
    pre();
    int t;cin>>t;
    while(t--){
        int x;cin>>x;
        cout<<fib[x]<<'\n';
    }
}