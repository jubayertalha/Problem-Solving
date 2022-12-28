#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

int main(){
    BOOST;
    int n;
    ll sum = 0;
    cin>>n;
    FOR(i,n+1){
        sum+=pow(i,2);
    }
    cout<<sum<<endl;
    return 0;
}