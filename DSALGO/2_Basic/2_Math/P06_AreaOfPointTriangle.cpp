#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

double getDistance(int x1, int y1, int x2, int y2){
    return sqrt((pow((x2-x1),2)+pow((y2-y1),2)));
}

int main(){
    BOOST;
    int ax,bx,cx,ay,by,cy;
    double a,b,c;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    a = getDistance(bx,by,cx,cy);
    b = getDistance(ax,ay,cx,cy);
    c = getDistance(ax,ay,bx,by);
    double s = (a+b+c)/2.0;
    cout<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
    return 0;
}