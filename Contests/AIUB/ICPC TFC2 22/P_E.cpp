#include<iostream>
using namespace std;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(long long int i=0;i<n;i++)
#define RFOR(i,n)   for(long long int i=n-1;i>=0;i--)

int main(){
    BOOST;
    int n;
    cin>>n;
    int w[n];
    int t = 0;
    FOR(i,n){
        cin>>w[i];
        if(w[i]>t) t = w[i];
    }
    while(1){
        int ss = 0;
        int sl = 0;
        FOR(i,n){
            if(w[i]<t){
                ss+=w[i];
            }else if(w[i]>t){
                sl+=w[i];
            }
        }
        if(ss==sl) break;
        else t--;
    }
    int pre = 0;
    bool flag = true;
    FOR(i,n){
        if(w[i]==t){
            flag = false;
            break;
        }else if(w[i]>pre && w[i]<t){
            pre = w[i];
        }
    }
    if(flag) t = ++pre;
    cout<<t<<endl;
    return 0;
}