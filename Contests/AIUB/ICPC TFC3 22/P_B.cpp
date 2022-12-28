#include<iostream>
using namespace std;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(long long int i=0;i<n;i++)
#define RFOR(i,n)   for(long long int i=n-1;i>=0;i--)

int main(){
    BOOST;
    int s,n;
    cin>>s>>n;
    int pre,next,first;
    int count = 0;
    FOR(i,n){
        if(i!=0){
            cin>>next;
            count += ((next-2)-pre)/2;
            pre = next;
        }else{
            cin>>pre;
            first = pre;
            next = pre;
        }
    }
    next = (s-next)+first+next;
    count += ((next-2)-pre)/2;
    cout<<count<<endl;
    return 0;
}