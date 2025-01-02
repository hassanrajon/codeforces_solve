#include<bits/stdc++.h>
using namespace std;
long long gcd(long a,long b){
    if(b==0)return a;
    return gcd(b,a%b);
}
long long lcm(long long a,long long b)
{
    return (a/gcd(a,b))*b;
}
int main(){
    long long a = gcd(10,12);
    long long b = lcm(10,12);
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<(a*b)<<endl;//(10*12)==gcd(10,12)*lcm(10,12)
    
}