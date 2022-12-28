#include<iostream>
using namespace std;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(long long int i=0;i<n;i++)
#define RFOR(i,n)   for(long long int i=n-1;i>=0;i--)

int main(){
    BOOST;
    int n;
    char c;
    bool isCorrect = true;
    cin>>n;

    int rCount = 0;
    int rWhite = 0;
    int rBlack = 0;
    int cCount[n];
    int cWhite[n];
    int cBlack[n];

    FOR(i,n){
        cCount[i] = 0;
        cWhite[i] = 0;
        cBlack[i] = 0;
    }
    FOR(i,n){
        FOR(j,n){
            cin>>c;
            if(c=='W'){
                rCount++;
                cCount[j]++;
                rWhite++;
                cWhite[j]++;
                rBlack = 0;
                cBlack[j] = 0;
            }else{
                rBlack++;
                cBlack[j]++;
                rWhite = 0;
                cWhite[j] = 0;
            }
            if(rWhite==3 || rBlack==3) isCorrect = false;
            if(cWhite[j]==3 || cBlack[j]==3) isCorrect = false;
        }
        if(rCount*2 != n) isCorrect = false;
        rCount = 0;
        rWhite = 0;
        rBlack = 0;
    }
    FOR(i,n){
        if(cCount[i]*2 != n) isCorrect = false;
    }

    if(isCorrect) cout<<1<<endl;
    else cout<<0<<endl;

    return 0;
}