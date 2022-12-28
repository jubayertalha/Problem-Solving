#include<iostream>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

bool isPelisdrome(ll n){
    ll a = n;
    ll b = 0;
    while(a!=0){
        b *= 10;
        b += a%10;
        a /= 10;
    }
    return b == n;
}

int main(){
    BOOST;
    ll n;
    cin>>n;
    ll count = 0;
    ll num = 1;
    while(count!=n){
        if(isPelisdrome(num++)) count++;
    }
    cout<<--num<<endl;
    return 0;
}