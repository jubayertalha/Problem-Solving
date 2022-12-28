#include<iostream>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

//https://acm.timus.ru/problem.aspx?space=1&num=1293

int main(){
    BOOST;
    int n,a,b;
    cin>>n>>a>>b;
    cout<<n*a*b*2<<endl;
    return 0;
}