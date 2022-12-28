#include<iostream>
using namespace std;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(long long int i=0;i<n;i++)
#define RFOR(i,n)   for(long long int i=n-1;i>=0;i--)

int main(){
    BOOST;
    int n,d;
    cin>>n;
    int count = 1;
    int pre;
    cin>>pre;
    FOR(i,n-1){
        cin>>d;
        if(d<pre) count++;
        pre = d;
    }
    cout<<count<<endl;
    return 0;
}