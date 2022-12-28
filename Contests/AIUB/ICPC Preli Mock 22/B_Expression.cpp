#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

int main(){
    BOOST;
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> sum(6);
    sum[0] = a*b*c;
    sum[1] = a+b+c;
    sum[2] = a+(b*c);
    sum[3] = (a*b)+c;
    sum[4] = a*(b+c);
    sum[5] = (a+b)*c;
    int max = sum[0];
    FOR(i,6){
        if(sum[i]>max){
            max = sum[i];
        }
    }
    cout<<max<<endl;
    return 0;
}