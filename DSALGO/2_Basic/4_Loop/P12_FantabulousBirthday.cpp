#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=1;i<=n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

//https://lightoj.com/problem/fibsieves-fantabulous-birthday

int main(){
    BOOST;
    int t;
    cin>>t;
    FOR(i,t){
        ll n;
        cin>>n;
        ll rc = ceil(sqrt(n));
        ll r,c;
        ll f = pow(rc-1,2);
        ll l = pow(rc,2)+1;
        if(rc%2==0){
            if(f+rc > n){
                r = rc;
                c = n - f;
            }else{
                r = l - n;
                c = rc;
            }
        }else{
            if(f+rc > n){
                c = rc;
                r = n - f;
            }else{
                c = l - n;
                r = rc;
            }
        }
        cout<<"Case "<<i<<": "<<c<<" "<<r<<endl;
    }
    return 0;
}