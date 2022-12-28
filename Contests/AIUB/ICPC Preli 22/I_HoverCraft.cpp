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
    double l,w;
    cin>>l>>w;
    while(l!=0 && w!=0){
        double bridge = l/2;
        bridge+=0.0001;
        double min = 0;
        for(double i=bridge;i<l;i+=0.001){
            double land;
            double a = l-i;
            double b = sqrt(pow(i,2)-pow(a,2));
            land = w-b;
            double total = i+i+land;
            //cout<<"B: "<<i<<" Total: "<<total<<endl;
            if(min==0) min = total;
            if(total<=min) min = total;
            else break;
        }
        cout<<fixed<<setprecision(4)<<min<<endl;
        cin>>l>>w;
    }
    return 0;
}