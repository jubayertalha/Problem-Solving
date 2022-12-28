#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

//https://acm.timus.ru/problem.aspx?space=1&num=1209

int main(){
    BOOST;
    ll n;
    cin>>n;
    vector<ll> output(n,0);
    FOR(i,n){
        ll k;
        cin>>k;
        k--;
        double nth = (sqrt((k*8.0)+1)-1)/2.0;
        ll fnth = (ll) nth;
        if(nth-fnth == 0){
            output[i] = 1;
        }
    }
    FOR(i,n){
        cout<<output[i];
        if(i<n-1) cout<<" ";
    }
    cout<<endl;
    return 0;
}