#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

//https://lightoj.com/problem/calm-down

int main(){
    BOOST;
    ll t;
    cin>>t;
    double pi = acos(-1.);
    NFOR(i,t){
        double R,n;
        cin>>R>>n;
        double r;
        r = (R*sin(pi/n))/(1+sin(pi/n));
        cout<<"Case "<<i<<": "<<fixed<<setprecision(10)<<r<<endl;
    }
    return 0;
}