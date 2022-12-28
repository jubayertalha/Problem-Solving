#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=3;i<=n;i+=2)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

bool isPrime(int n){
    if(n==0||n==1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    FOR(i,sqrt(n)) if(n%i==0) return false;
    return true;
}

int main(){
    BOOST;
    int n;
    cin>>n;
    if(isPrime(n)) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
    return 0;
}