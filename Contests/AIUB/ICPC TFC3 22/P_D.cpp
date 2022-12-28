#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)

int main(){
    BOOST;
    ll n;
    cin>>n;
    ll a[n];
    ll b[n];
    ll c[n];
    ll d[n];
    ll pi = 0;
    char h[n];
    FOR(i,n){
        cin>>a[i];
        d[i] = 0;
    }
    FOR(i,n){
        cin>>b[i];
        cout<<b[i];
        if(b[i]!=a[i]){
            c[pi] = a[i];
            d[pi] = b[i];
            pi++;
            sort(c, c + pi);
            sort(d, d + pi);
            bool isSame = true;
            FOR(j,pi){
                if(c[j]!=d[j]){
                    isSame = false;
                    break;
                }
            }
            if(isSame){
                if(i!=(n-1)){ 
                    h[i] = '#';
                    cout<<" #";
                }
                pi = 0;
            }
        }else if(i>0){
            if(h[i-1]=='#'){
                if(i!=(n-1)){
                    h[i] = '#';
                    cout<<" #";
                }
                pi = 0;
            }else{
                c[pi] = a[i];
                d[pi] = b[i];
                pi++;
                sort(c, c + pi);
                sort(d, d + pi);
                bool isSame = true;
                FOR(j,pi){
                    if(c[j]!=d[j]){
                        isSame = false;
                        break;
                    }
                }
                if(isSame){
                    if(i!=(n-1)){ 
                        h[i] = '#';
                        cout<<" #";
                    }
                    pi = 0;
                }
            }
        }else{
            if(i!=(n-1)){ 
                h[i] = '#';
                cout<<" #";
            }
            pi = 0;
        }
        if(i!=(n-1)){ 
            cout<<" ";
        }
    }
    cout<<endl;
    return 0;
}