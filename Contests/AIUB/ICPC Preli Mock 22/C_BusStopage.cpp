#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=1;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

int main(){
    BOOST;
    int t;
    cin>>t;
    NFOR(i,t){
        ll n;
        cin>>n;
        ll total = 0;
        ll max = 0;
        FOR(j,n){
            ll a,b;
            cin>>a>>b;
            total+=a;
            total-=b;
            if(total>max){
                max = total;
            }
        }
        cout<<"Case "<<i<<": "<<max<<endl;
    }
    return 0;
}