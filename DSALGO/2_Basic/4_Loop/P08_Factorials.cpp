#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

//https://acm.timus.ru/problem.aspx?space=1&num=1083

int main(){
    BOOST;
    int n;
    string ex;
    cin>>n;
    cin>>ex;
    int k = ex.size();
    ll fac = 1;
    for(int i=0;(n-(i*k))>0;i++){
        fac *= (n-(i*k));
    }
    cout<<fac<<endl;
    return 0;
}