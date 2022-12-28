#include<iostream>
#include <iomanip>
using namespace std;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(long long int i=0;i<n;i++)
#define RFOR(i,n)   for(long long int i=n-1;i>=0;i--)

int main(){
    BOOST;
    double a,b;
    cin>>a;
    b = 100-a;
    double r1 = 1+(b/a);
    double r2 = 1+(a/b);
    cout<<fixed<<setprecision(10)<<r1<<endl;
    cout<<fixed<<setprecision(10)<<r2<<endl;
    return 0;
}