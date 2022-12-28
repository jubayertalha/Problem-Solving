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
    int n = 3;
    for(int i=n-1;i>=0;i--){
        for(int j=i;j>0;j--){
            cout<<" ";
        }
        for(int j=1;j<=((n-i)*2)-1;j++){
            cout<<"@";
        }
        cout<<endl;
    }
    return 0;
}