#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<vector<int>>v;
void subset(int arr[],vector<int>&a,int ind,int n){
    if(ind>=n){
     v.push_back(a);
     return;
    }
    a.push_back(arr[ind]);
    subset(arr,a,ind+1,n);
    a.pop_back();
    subset(arr,a,ind+1,n);
}
int main(){
    int arr[3]={3,1,2};
    vector<int>a;
    subset(arr,a,0,3);
    for(auto it:v){
        for(auto k:it)cout<<k<<" ";
        cout<<endl;
    }
}