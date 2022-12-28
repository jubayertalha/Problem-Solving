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
    int t;
    cin>>t;
    NFOR(i,t){
        int a,b,c,k;
        cin>>a>>b>>c>>k;
        int sum = a+b+c;
        bool aF = true, bF = true, cF = true;
        if(sum%3==0){
            int avg = sum/3;

            if(a==b && a==c && b==c){
                cout<<"Case "<<i<<": Peaceful"<<endl;
                continue;
            }

            if(a>avg && (a-avg)%k != 0) aF = false;
            else if(a<avg && (avg-a)%k != 0) aF = false;

            if(b>avg && (b-avg)%k != 0) bF = false;
            else if(b<avg && (avg-b)%k != 0) bF = false;

            if(c>avg && (c-avg)%k != 0) cF = false;
            else if(c<avg && (avg-c)%k != 0) cF = false;

            if(aF && bF && cF){
                cout<<"Case "<<i<<": Peaceful"<<endl;
            }else{
                cout<<"Case "<<i<<": Fight"<<endl;
            }
        }else{
            cout<<"Case "<<i<<": Fight"<<endl;
        }
    }
    return 0;
}