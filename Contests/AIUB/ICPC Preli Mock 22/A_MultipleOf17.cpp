#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

int main(){
    BOOST;
    ll n;
    cin>>n;
    while(n!=0){
        int r = n%10;
        ll m = n/10;
        m-=(5*r);
        if(abs(m)%17==0){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
        cin>>n;
    }
    return 0;
}