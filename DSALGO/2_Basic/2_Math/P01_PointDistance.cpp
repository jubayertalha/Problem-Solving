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
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double d = sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
    cout<<d<<endl;
    return 0;
}