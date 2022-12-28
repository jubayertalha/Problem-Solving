#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

//https://lightoj.com/problem/division-by-3

int main(){
    BOOST;
    ll t;
    cin>>t;
    NFOR(i,t){
        ll a,b,c=0;
        cin>>a>>b;
        for(ll n=a;n<=b;n++){
            ll sum = (pow(n,2)+n)/2;
            if(sum%3==0) c++;
        }
        cout<<"Case "<<i<<": "<<c<<endl;
    }
    return 0;
}