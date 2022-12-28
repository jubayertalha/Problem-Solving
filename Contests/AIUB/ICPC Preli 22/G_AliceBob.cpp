#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define endl        "\n"
#define BOOST       ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define FOR(i,n)    for(ll i=0;i<n;i++)
#define RFOR(i,n)   for(ll i=n-1;i>=0;i--)
#define NFOR(i,n)   for(ll i=1;i<=n;i++)

struct Node
{
    ll w;
    Node *child[30010];
    ll totalChild;
};

int main(){
    BOOST;
    int t;
    cin>>t;
    NFOR(i,t){
        ll n;
        cin>>n;
        vector<Node*> nodes(n+1);
        NFOR(j,n){
            ll w;
            cin>>w;
            struct Node *newNode = new Node;
            newNode->w = w;
            newNode->totalChild = 0;
            nodes[j] = newNode;
        }
        FOR(j,n){
            ll u,v;
            cin>>u>>v;
            nodes[u]->child[nodes[u]->totalChild++] = nodes[v];
            nodes[v]->child[nodes[v]->totalChild++] = nodes[u];
        }
    }
    return 0;
}