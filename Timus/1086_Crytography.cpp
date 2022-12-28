#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=2;i<=n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

//https://acm.timus.ru/problem.aspx?space=1&num=1086

int s = 163841;
vector<int> primes(s+2,1);

void getPrimes(){
    primes[0] = 0;
    FOR(i,s){
        if(primes[i]==1){
            for(int j=i;j<=s;j++){
                if(i*j <= s){
                    primes[i*j] = 0;
                }else{
                    break;
                }
            }
            primes[i] = i;
        }
    }
    primes.erase(remove(primes.begin(),primes.end(),0),primes.end());
    primes.shrink_to_fit();
}

int main(){
    BOOST;
    getPrimes();
    int n;
    cin>>n;
    while(n--){
        int num;
        cin>>num;
        cout<<primes[num]<<endl;
    }
    return 0;
}