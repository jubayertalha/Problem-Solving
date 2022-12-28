#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

//https://lightoj.com/problem/knights-in-chessboard

int main(){
    BOOST;
    ll t;
    cin>>t;
    NFOR(i,t){
        int n,m;
        cin>>n>>m;
        ll ns = n*m;
        ll out;
        if(n==1||m==1){
            out = ns;
        }else if(n==2||m==2){
            ll big = ns/2;
            out = big;
            if(big%4==1 || big%4==3) out++;
            else if(big%4==2) out+=2;
        }else if(ns%2 == 0){
            out = ns/2;
        }else{
            out = (ns+1)/2;
        }
        cout<<"Case "<<i<<": "<<out<<endl;
    }
    return 0;
}