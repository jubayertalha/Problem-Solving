#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

//https://lightoj.com/problem/ekka-dokka

int main(){
    BOOST;
    ll t;
    cin>>t;
    NFOR(i,t){
        unsigned long long int w;
        cin>>w;
        ll n=w/2,m=2;
        if(w%2==0){
            while(n%2==0){
                n/=2;
                m*=2;
            }
            cout<<"Case "<<i<<": "<<n<<" "<<m<<endl;
        }else{
            cout<<"Case "<<i<<": "<<"Impossible"<<endl;
        }
    }
    return 0;
}