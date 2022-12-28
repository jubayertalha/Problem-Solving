#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

//https://lightoj.com/problem/opposite-task

int main(){
    BOOST;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=10){
            cout<<0<<" "<<n<<endl;
        }else{
            cout<<10<<" "<<n-10<<endl;
        }
    }
    return 0;
}