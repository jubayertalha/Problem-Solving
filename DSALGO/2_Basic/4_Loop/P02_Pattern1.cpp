#include<iostream>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=1;i<=n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

int main(){
    BOOST;
    int n;
    cin>>n;
    FOR(i,n){
        FOR(j,i){
            cout<<"*";
        }
        FOR(j,n-i){
            cout<<".";
        }
        cout<<endl;
    }
    return 0;
}