#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

int main(){
    BOOST;
    int t;
    cin>>t;
    while(t!=0){
        bool hasPre = false;
        FOR(i,t){
            int n;
            cin>>n;
            if(n>0){
                if(hasPre) cout<<" ";
                else hasPre = true;
                cout<<n;
            }
        }
        if(!hasPre) cout<<0;
        cout<<endl;
        cin>>t;
    }
    return 0;
}