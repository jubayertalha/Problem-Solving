#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

//https://lightoj.com/problem/brush-1

int main(){
    BOOST;
    ll t;
    cin>>t;
    NFOR(i,t){
        ll n;
        cin>>n;
        ll total = 0;
        FOR(j,n){
            ll dust;
            cin>>dust;
            if(dust>0) total+=dust;
        }
        cout<<"Case "<<i<<": "<<total<<endl;
    }
    return 0;
}