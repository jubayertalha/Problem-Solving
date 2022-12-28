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
    if(n%2 == 1){
        cout<<"Either"<<endl;
    }else{
        if((n/2)%2 == 1){
            cout<<"Odd"<<endl;
        }else{
            cout<<"Even"<<endl;
        }
    }
    return 0;
}