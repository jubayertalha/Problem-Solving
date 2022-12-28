#include<iostream>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

int main(){
    BOOST;
    int x,y;
    cin>>x>>y;
    if(x>0&&y>0) cout<<"1st"<<endl;
    else if(y>0) cout<<"2nd"<<endl;
    else if(x<0) cout<<"3rd"<<endl;
    else cout<<"4th"<<endl;
    return 0;
}