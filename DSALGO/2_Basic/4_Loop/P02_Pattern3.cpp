#include<iostream>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

int main(){
    BOOST;
    int n;
    cin>>n;
    FOR(i,n){
        int star = (i*2)+1;
        int dot = (((n*2)-1)-star)/2;
        FOR(j,dot) cout<<".";
        FOR(j,star) cout<<"*";
        FOR(j,dot) cout<<".";
        cout<<endl;
    }
    return 0;
}