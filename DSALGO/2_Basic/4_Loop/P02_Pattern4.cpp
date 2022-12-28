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
    RFOR(i,n){
        int star = (i*2)+1;
        int dot = (((n*2)-1)-star)/2;
        FOR(j,dot) cout<<".";
        int inc = 1;
        for(int j=1;j>0;j+=inc){
            cout<<j;
            if(j==i+1) inc*=-1;
        }
        FOR(j,dot) cout<<".";
        cout<<endl;
    }
    return 0;
}