#include <bits/stdc++.h>
using namespace std;
struct triplet
{
    int x,y,gcd;
};
triplet extendedgcd(int a,int b){
    if(b==0){
        triplet ans;
        ans.x=1;
        ans.gcd=a;
        ans.y=0;
        return ans;
    }
    triplet smallans = extendedgcd(b,a%b);
    triplet ans;
    ans.gcd = smallans.gcd;
    ans.x=smallans.y;
    ans.y=smallans.x-(a/b)*smallans.y;
    return ans;
}

int egcd(int a, int b, int &x, int &y)
{
    if(b==0){ 
        //  gcd(a,0) ==>  a
        x=1,y=0;
        return a;
    }
    int x1,y1;
    int d = egcd(b,a%b,x1,y1);
    x = y1;
    y = x1-(a/b)*y1;
    return d;
}
int main()
{    int a,b,x=0,y=0;
    cin>>a>>b;
    triplet ans = extendedgcd(a,b);
    int gcd = egcd(a, b, x, y);
    cout << gcd << " " << x << " " << y<<endl;
    cout<<ans.gcd<<" "<<ans.x<<" "<<ans.y;
}