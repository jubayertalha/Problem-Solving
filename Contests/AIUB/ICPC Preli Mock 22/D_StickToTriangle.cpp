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
        ll n;
        cin>>n;
        ll res = 0;
        if(n<3){
            cout<<0<<endl;
            continue;
        }
        res = round(((long)n*n)/12) - ((long)n/4)*(((long)n + 2)/4);
        for(ll j=1; j<n; j++){
            ll k = j;
            ll l = n-j-k;
            if(j+k>l && j+l>k && l+k>j && (j==k)) res++;
        }
        cout<<res<<endl;
    }
    return 0;
}