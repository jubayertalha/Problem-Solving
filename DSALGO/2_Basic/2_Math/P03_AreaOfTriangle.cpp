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
    double s = (a+b+c)/2.0;
    cout<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
    return 0;
}