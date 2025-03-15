#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int N=100000+10;
vector<ll>segment_tree(4*N);

ll build_tree(vector<int>&arr,int root_node,int start,int end){
  if(start==end){
     segment_tree[root_node]=arr[start];
     return segment_tree[root_node];
  }
  int mid = (start+end)/2;
  ll left = build_tree(arr,2*root_node+1,start,mid);
  ll right = build_tree(arr,2*root_node+2,mid+1,end);
  segment_tree[root_node]=left+right;
  return segment_tree[root_node];
}

void update(int root_node,int start,int end,int index,ll value){
  if(start==end){
    segment_tree[root_node]=value;
    return;
  }
  int mid=(start+end)/2;
  if(index<=mid){
    update(2*root_node+1,start,mid,index,value);
  }else{
    update(2*root_node+2,mid+1,end,index,value);
  }
  segment_tree[root_node]=segment_tree[2*root_node+1]+segment_tree[2*root_node+2];
}

ll query(int root_node,int si,int sj,int qi,int qj){
 
  if(qi>sj || qj<si){
    return 0;
  }
  if(si>=qi and sj<=qj){
    return segment_tree[root_node];
  }
  int mid=(si+sj)/2;
  ll left= query(2*root_node+1,si,mid,qi,qj);
  ll right = query(2*root_node+2,mid+1,sj,qi,qj);
  return (left+right);
}

void solve()
{ 
   int n,m;cin>>n>>m;
   vector<int>arr(n);
   for(auto &it:arr)cin>>it;
   build_tree(arr,0,0,n-1);
   while(m--){
    int a,b,c;cin>>a>>b>>c;
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
