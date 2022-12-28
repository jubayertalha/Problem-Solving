#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

//https://lightoj.com/problem/lift

int main(){
    BOOST;
    ll t;
    cin>>t;
    NFOR(i,t){
        int l,p;
        cin>>p>>l;
        int run = 4;
        int time = 3+5+3+3+5;
        int floor = abs(l-p)+p;
        time += floor*run;
        cout<<"Case "<<i<<": "<<time<<endl;
    }
    return 0;
}