#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

//https://lightoj.com/problem/higher-math

int main(){
    BOOST;
    ll t;
    cin>>t;
    NFOR(i,t){
        ll a,b,c;
        string result = "no";
        cin>>a>>b>>c;
        if(a>b&&a>c){
            if(pow(a,2)==(pow(b,2)+pow(c,2))) result = "yes";
        }else if(b>c){
            if(pow(b,2)==(pow(a,2)+pow(c,2))) result = "yes";
        }else{
            if(pow(c,2)==(pow(a,2)+pow(b,2))) result = "yes";
        }
        cout<<"Case "<<i<<": "<<result<<endl;
    }
    return 0;
}