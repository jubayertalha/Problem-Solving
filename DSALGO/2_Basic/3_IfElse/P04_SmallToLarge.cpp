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
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b&&a<c){
        cout<<a<<" ";
        if(b<c) cout<<b<<" "<<c<<endl;
        else cout<<c<<" "<<b<<endl;
    }else if(b<c){
        cout<<b<<" ";
        if(a<c) cout<<a<<" "<<c<<endl;
        else cout<<c<<" "<<a<<endl;
    }else{
        cout<<c<<" ";
        if(a<b) cout<<a<<" "<<b<<endl;
        else cout<<b<<" "<<a<<endl;
    }
    return 0;
}