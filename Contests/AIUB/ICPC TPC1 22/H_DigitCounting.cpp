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
    int t;
    cin>>t;
    NFOR(i,t){
        vector<ll> c(10,0);
        ll n;
        cin>>n;
        NFOR(j,n){
            ll m = j;
            while(m!=0){
                c[m%10]++;
                m/=10;
            }
        }
        FOR(j,9){
            cout<<c[j]<<" ";
        }
        cout<<c[9]<<endl;
    }
    return 0;
}