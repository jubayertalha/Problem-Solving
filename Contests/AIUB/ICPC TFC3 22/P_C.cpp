#include<iostream>
#include<algorithm>
using namespace std;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(long long int i=0;i<n;i++)
#define RFOR(i,n)   for(long long int i=n-1;i>=0;i--)

int main(){
    BOOST;
    int n;
    cin>>n;
    int a[n];
    FOR(i,n){
        cin>>a[i];
    }
    sort(a, a+(sizeof(a)/sizeof(a[0])), greater<int>());
    int count = 0;
    FOR(i,n){
        if(i<=((n-1)/2)-1){
            count += a[i];
        }else{
            count += ((a[i]-1)/2);
        }
    }
    cout<<count<<endl;
    return 0;
}