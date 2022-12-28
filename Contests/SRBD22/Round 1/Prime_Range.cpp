#include<iostream>
#include<math.h>
using namespace std;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(long long int i=0;i<n;i++)
#define RFOR(i,n)   for(long long int i=n-1;i>=0;i--)

int isPrime(long long int n){
    bool flag = true;
    if(n==1) return 0;
    for(long long int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(flag) return 1;
    else return 0;
}

int main(){
    BOOST;
    int t;
    cin>>t;
    while(t--){
        long long int m,n;
        long long int count = 0;
        cin>>m>>n;
        for(long long int i=m;i<=n;i++){
            count += isPrime(i);
        }
        cout<<count<<endl;
    }
    return 0;
}