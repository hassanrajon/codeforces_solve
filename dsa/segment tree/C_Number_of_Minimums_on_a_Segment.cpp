#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define debug(a) cerr << #a <<" = "<< (a) << '\n';
#define nl cout<<'\n';
const int N=2e5+10;
vector<pair<int,int>>ans(4*N);
pair<int,int> merge(pair<int,int>&left,pair<int,int>&right){
    pair<int,int>p;
    if(left.first<right.first){
        p=left;
    }else if(right.first<left.first){
        p=right;
    }else{
        p={right.first,right.second+left.second};
    }
    return p;
}
void build(vector<int>&arr,int root_node,int start,int end){
    if(start==end){
        ans[root_node]={arr[start],1};
        return;
    }
    int mid= (start+end)/2;
    build(arr,2*root_node+1,start,mid);
    build(arr,2*root_node+2,mid+1,end);
    ans[root_node]=merge(ans[2*root_node+1],ans[2*root_node+2]);
}

void update(int root_node,int start,int end,int index,int value){
   if(start==end){
    ans[root_node]={value,1};
    return;
   }
   int mid = (start+end)/2;
   if(index<=mid){
    update(2*root_node+1,start,mid,index,value);
   }else{
    update(2*root_node+2,mid+1,end,index,value);
   }
   ans[root_node]=merge(ans[2*root_node+1],ans[2*root_node+2]);
}

pair<int,int> query(int root_node,int si,int sj,int qi,int qj){
     if(si>qj || sj<qi){
        return {INT_MAX,-1};
     }
     if(si>=qi and sj<=qj){
        return ans[root_node];
     }
     int mid=(si+sj)/2;
    pair<int,int>left= query(2*root_node+1,si,mid,qi,qj);
    pair<int,int>right= query(2*root_node+2,mid+1,sj,qi,qj);
    return merge(left,right);
}
void solve()
{ 
   int n,m;cin>>n>>m;
   vector<int>arr(n);
   for(auto &it:arr)cin>>it;
   build(arr,0,0,n-1);
   while(m--){
    int a,b,c;cin>>a>>b>>c;
    if(a==1){
        update(0,0,n-1,b,c);
    }else{
        pair<int,int>p=query(0,0,n-1,b,c-1);
        cout<<p.first<<" "<<p.second<<'\n';
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
