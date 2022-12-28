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
    while(n--){
        long long int r,c;
        cin>>r>>c;
        long long int small = 0;
        long long int large = 0;
        if(r<c){
            small = r;
            large = c;
        }else{
            small = c;
            large = r;
        }
        long long int nlarge = large/3;
        int small_r = small%3;
        small-=small_r;
        large-=small;
        long long int nsmall = small/3;
        small/=3;
        small*=small;
        int large_r = large%3;
        large/=3;
        small+=(large*nsmall);
        //cout<<small<<endl;
        //cout<<large<<" "<<nsmall<<endl;
        if(small_r!=0) small+=nlarge;
        //cout<<small<<endl;
        if(large_r!=0) small+=nsmall;
        if(small_r!=0 && large_r!=0) small++;
        cout<<small<<endl;
    }
    return 0;
}