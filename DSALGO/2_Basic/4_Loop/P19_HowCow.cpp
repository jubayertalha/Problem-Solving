#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

//https://lightoj.com/problem/how-cow

int main(){
    BOOST;
    ll t;
    cin>>t;
    NFOR(i,t){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        int m;
        cin>>m;
        cout<<"Case "<<i<<":"<<endl;
        FOR(j,m){
            int a,b;
            cin>>a>>b;
            if(a>x1&&a<x2&&b>y1&&b<y2) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}