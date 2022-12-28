#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<=n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

int main(){
    BOOST;
    int f,n,s;
    cin>>f>>n>>s;
    //while(cin>>f>>n>>s){
        int count[n+1][s+1];
        FOR(i,n){
            FOR(j,s){
                count[i][j] = 0;
            }
        }
        for(int i=1; i<=f && i<=s; i++){
            count[1][i] = 1;
        }
        for(int i=2; i<=n; i++){
            for(int j=1; j<=s; j++){
                for(int k=1; k<=f && k<j; k++){
                    count[i][j] += count[i-1][j-k];
                }
            }
        }
        cout<<count[n][s]<<"/"<<pow(f,n)<<endl;
    //}
    return 0;
}