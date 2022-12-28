#include<iostream>
#include<string>
using namespace std;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(long long int i=0;i<n;i++)
#define RFOR(i,n)   for(long long int i=n-1;i>=0;i--)

int main(){
    BOOST;
    string input;
    getline(cin, input);
    int pos = 0;
    FOR(i,input.size()){
        switch (pos){
        case 0:
            if(input[i]=='S') pos++;
            break;
        case 1:
            if(input[i]=='a') pos++;
            break;
        case 2:
            if(input[i]=='m') pos++;
            break;
        case 3:
            if(input[i]=='s') pos++;
            break;
        case 4:
            if(input[i]=='u') pos++;
            break;
        case 5:
            if(input[i]=='n') pos++;
            break;
        case 6:
            if(input[i]=='g') pos++;
            break;
        default:
            break;
        }
    }
    if(pos==7) cout<<"SRBD"<<endl;
    else cout<<"GHOST"<<endl;
    return 0;
}