#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=2;i<=n;i+=2)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

double factorial(int n){
    double fac = 1.0;
    for(ll i=1;i<=n;i++) fac *= i;
    return fac;
}

int main(){
    BOOST;
    int x,n;
    cin>>x>>n;
    double cosx = 1;
    double sum = 0;
    FOR(i,(n-1)*2) sum += pow(x,i)/factorial(i);
    cosx -= sum;
    cout<<cosx<<endl;
    return 0;
}