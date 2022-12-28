#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=1;i<=n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

ll factorial(int n){
    ll fac = 1;
    FOR(i,n) fac *= i;
    return fac;
}

int main(){
    BOOST;
    int n,r;
    cin>>n>>r;
    ll sum = factorial(n)/(factorial(r)*factorial(n-r));
    cout<<sum<<endl;
    return 0;
}