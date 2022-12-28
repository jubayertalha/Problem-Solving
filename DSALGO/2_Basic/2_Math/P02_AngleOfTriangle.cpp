#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

double getAngle(int a,int b,int c){
    double pi = acos(-1.);
    return acos(((pow(b,2)+pow(c,2)-pow(a,2))/(2*b*c)))*(180/pi);
}

int main(){
    BOOST;
    int a,b,c;
    cin>>a>>b>>c;
    double anA,anB,anC;
    anA = getAngle(a,b,c);
    anB = getAngle(b,a,c);
    anC = getAngle(c,a,b);
    cout<<anA<<" "<<anB<<" "<<anC<<endl;
    return 0;
}