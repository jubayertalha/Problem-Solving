#include<iostream>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=1;i<=n;i++)
#define RFOR(i,n)   for(ll i=n;i>0;i--)

int main(){
    BOOST;
    int n;
    cin>>n;
    RFOR(i,n){
        FOR(j,n-i){
            cout<<".";
        }
        FOR(j,i){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}