#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int N=2e5+10;
vector<ll>SegmentTree(4*N);
ll BuildTree(vector<ll>&arr,int RootNode,int start,int end){
  if(start==end){
    SegmentTree[RootNode]=arr[start];
    return SegmentTree[RootNode];
  }
  int mid = (start+end)/2;
  ll left = BuildTree(arr,2*RootNode+1,start,mid);
  ll right = BuildTree(arr,2*RootNode+2,mid+1,end);
  SegmentTree[RootNode]=(left+right);
  return (left+right);
} 
void update(int RootNode,int start,int end,int index,int value){
   if(start==end){
     SegmentTree[RootNode]=value;
     return;
   }
   int mid = (start+end)/2;
   if(index<=mid){
    update(2*RootNode+1,start,mid,index,value);
   }else{
    update(2*RootNode+2,mid+1,end,index,value);
   }
  SegmentTree[RootNode]=SegmentTree[2*RootNode+1]+SegmentTree[2*RootNode+2];
}
ll query(int RootNode,int si,int sj,int qi,int qj){
    // no overlap
    if(si>qj || sj<qi){
      return 0;
    }
    // complete overlap
    if(si>=qi and sj<=qj){
      return SegmentTree[RootNode];
    }
    int mid=(si+sj)/2;
    ll left=query(2*RootNode+1,si,mid,qi,qj);
    ll right=query(2*RootNode+2,mid+1,sj,qi,qj);
    return (left+right);
}
void solve()
{ 
  int n,q;cin>>n>>q;
  vector<ll>arr(n);
  for(auto &it:arr)cin>>it;
  BuildTree(arr,0,0,n-1);
  while (q--)
  {
    int a,x,y;cin>>a>>x>>y;
    if(a==1){
      update(0,0,n-1,x,y);
    }else{
      cout<<query(0,0,n-1,x,y)<<'\n';
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
