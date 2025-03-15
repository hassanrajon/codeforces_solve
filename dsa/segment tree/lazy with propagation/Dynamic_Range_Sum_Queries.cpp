#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int N=2e5+10;
vector<ll>segtree(4*N),lazy(4*N);

void push_down(int root,int start,int end){
    if(lazy[root]){
        segtree[root]+=(end-start+1)*lazy[root];
        if(start!=end){
            lazy[2*root+1]+=lazy[root];
            lazy[2*root+2]+=lazy[root];
        }
        lazy[root]=0;
    }    
}

void build(vector<int>&arr,int root,int start,int end){
    if(start==end){
        segtree[root]=arr[start];
        return;
    }
    int mid=(start+end)/2;
    build(arr,2*root+1,start,mid);
    build(arr,2*root+2,mid+1,end);
    segtree[root]=segtree[2*root+1]+segtree[2*root+2];
    
}

void update_range(int root,int si,int sj,int qi,int qj,ll val){
    push_down(root,si,sj);
    if(qi>sj || si>qj)return;
    if(si>=qi && sj<=qj){
        segtree[root]+=(sj-si+1)*val;
        if(si!=sj){
         lazy[2*root+1]+=val;
         lazy[2*root+2]+=val; 
        }
        return;
    }
    int mid=(si+sj)/2;
    update_range(2*root+1,si,mid,qi,qj,val);
    update_range(2*root+2,mid+1,sj,qi,qj,val);
    segtree[root]=segtree[2*root+1]+segtree[2*root+2];
}
ll query_range(int root,int si,int sj,int qi,int qj){
    push_down(root,si,sj);
    if(si>qj || qi>sj) return 0;
    if(si>=qi && sj<=qj) return segtree[root];
    int mid=(si+sj)/2;
    return query_range(2*root+1,si,mid,qi,qj)+query_range(2*root+2,mid+1,sj,qi,qj);
}
void solve()
{ 
  int n,q;cin>>n>>q;
  vector<int>arr(n);
  for(auto &it:arr)cin>>it;
  build(arr,0,0,n-1);
  while(q--){
    ll a,b,c;cin>>a>>b>>c;
    if(a==1){
        update_range(0,0,n-1,b-1,b-1,c - query_range(0, 0, n-1, b-1, b-1));
    }else{
        cout<<query_range(0,0,n-1,b-1,c-1)<<'\n';
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
