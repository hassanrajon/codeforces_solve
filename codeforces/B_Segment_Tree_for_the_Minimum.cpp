#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int N=2e5+10;
vector<int>ans(4*N);
int build(vector<int>&arr,int root_node,int start,int end){
    if(start==end){
        ans[root_node]=arr[start];
        return ans[root_node];
    }
    int mid = (start+end)/2;
    int left = build(arr,2*root_node+1,start,mid);
    int right = build(arr,2*root_node+2,mid+1,end);
    ans[root_node]=min(left,right);
    return ans[root_node];
}
void update(int root_node,int start,int end,int index,int value){
    if(start==end){
        ans[root_node]=value;
        return;
    }
    int mid = (start+end)/2;
    if(index<=mid){
        update(2*root_node+1,start,mid,index,value);
    }else{
        update(2*root_node+2,mid+1,end,index,value);
    }
    ans[root_node]=min(ans[2*root_node+1],ans[2*root_node+2]);
}
int query(int root_node,int si,int sj,int qi,int qj){
    if(si>qj || sj<qi){
        return INT_MAX;
    }
    if(si>=qi and sj<=qj){
        return ans[root_node];
    }
    int mid = (si+sj)/2;
    int left = query(2*root_node+1,si,mid,qi,qj);
    int right = query(2*root_node+2,mid+1,sj,qi,qj);
    return min(left,right);
}
void solve()
{ 
   int n,q;cin>>n>>q;
   vector<int>arr(n);
   for(auto &it:arr)cin>>it;
   build(arr,0,0,n-1);
   while(q--){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1){
        update(0,0,n-1,b,c);
    }else{
        cout<<query(0,0,n-1,b,c-1)<<'\n';
    }
   }
}
int main()
{   ios_base::sync_with_stdio(0);cin.tie(0);
    ll tt=1;
    // cin >> tt;
    while (tt--){
        solve();
     }
}
