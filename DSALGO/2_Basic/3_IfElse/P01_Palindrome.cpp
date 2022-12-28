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
    if(n<10){
        cout<<n<<endl;
    }else{
        int p = (n%10)+1;
        p += p*10;
        cout<<p<<endl;
    }
    return 0;
}