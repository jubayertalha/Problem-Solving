#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

//https://lightoj.com/problem/circle-in-square

int main(){
    BOOST;
    ll t;
    cin>>t;
    double pi = 2*acos(0.0);
    NFOR(i,t){
        double r;
        cin>>r;
        double areaR = pow(r*2,2);
        double areaC = pi*pow(r,2);
        double area = areaR-areaC;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<area<<endl;
    }
    return 0;
}