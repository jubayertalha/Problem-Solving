#include<iostream>
#include<vector>
using namespace std;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(long long int i=0;i<n;i++)
#define RFOR(i,n)   for(long long int i=n-1;i>=0;i--)

vector<long long int> trim(long long int hp2, long long int hs1, long long int hs2, vector<int> c2);

int main(){
    BOOST;
    long int cs1;
    long int cs2;
    long int cs3;
    cin>>cs1>>cs2>>cs3;
    vector<long long int> hs(6);
    hs[0] = 0;
    hs[1] = 0;
    hs[2] = 0;
    hs[3] = 0;
    hs[4] = 0;
    hs[5] = 0;
    vector<int> c1(cs1);
    vector<int> c2(cs2);
    vector<int> c3(cs3);
    FOR(i,cs1){
        cin>>c1[i];
        hs[0]+=c1[i];
    }
    FOR(i,cs2){
        cin>>c2[i];
        hs[1]+=c2[i];
    }
    FOR(i,cs3){
        cin>>c3[i];
        hs[2]+=c3[i];
    }
    vector<long long int> r(2);
    while(!(hs[0] == hs[1] && hs[0] == hs[2])){
        if(hs[0]>hs[1] && hs[0]>hs[2]){
            if(hs[1]>hs[2]){
                r = trim(hs[4],hs[2],hs[1],c2);
                hs[4] = r[0];
                hs[1] = r[1];
            }else if(hs[1]<hs[2]){
                r = trim(hs[5],hs[1],hs[2],c3);
                hs[5] = r[0];
                hs[2] = r[1];
            }else{
                r = trim(hs[3],hs[1],hs[0],c1);
                hs[3] = r[0];
                hs[0] = r[1];
            }
        }else if(hs[1]>hs[2]){
            if(hs[0]>hs[2]){
                r = trim(hs[3],hs[2],hs[0],c1);
                hs[3] = r[0];
                hs[0] = r[1];
            }else if(hs[0]<hs[2]){
                r = trim(hs[5],hs[0],hs[2],c3);
                hs[5] = r[0];
                hs[2] = r[1];
            }else{
                r = trim(hs[4],hs[0],hs[1],c2);
                hs[4] = r[0];
                hs[1] = r[1];
            }
        }else{
            if(hs[0]>hs[1]){
                r = trim(hs[3],hs[1],hs[0],c1);
                hs[3] = r[0];
                hs[0] = r[1];
            }else if(hs[0]<hs[1]){
                r = trim(hs[4],hs[0],hs[1],c2);
                hs[4] = r[0];
                hs[1] = r[1];
            }else{
                r = trim(hs[5],hs[0],hs[2],c3);
                hs[5] = r[0];
                hs[2] = r[1];
            }
        }
        if(hs[0]<=0 || hs[1]<=0 || hs[2]<=0){
            hs[0] = 0;
            break;
        }
    }
    cout<<hs[0]<<endl;
    return 0;
}

vector<long long int> trim(long long int hp2, long long int hs1, long long int hs2, vector<int> c2){
    while (hs1<hs2){
        hs2 -= c2[hp2++];
    }
    vector<long long int> r(2);
    r[0] = hp2;
    r[1] = hs2;
    return r;
}