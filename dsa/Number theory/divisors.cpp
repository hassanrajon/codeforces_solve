#include<bits/stdc++.h>
using namespace std;
vector<int>Divisors;

int main(){
 int n;
 cin>>n;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
        if(max(i,n/i)==min(i,n/i)){
            Divisors.push_back(i);
        }else{
            Divisors.push_back(i);
            Divisors.push_back(n/i);
        }
    }
  }
  for(auto &it:Divisors)
  {
cout<<it<<" ";
  }
}