#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

//https://acm.timus.ru/problem.aspx?space=1&num=1068

int main(){
    BOOST;
    ll n;
    cin>>n;
    bool flag = false;
    if(n<0) flag = true;
    if(n<0) n*=-1;
    ll res = (n*(n+1))/2;
    if(flag) res--;
    if(flag) res*=-1;
    if(n==0) res++;
    cout<<res<<endl;
    return 0;
}