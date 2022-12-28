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
    char ch;
    int data;
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
        string msg;
        cin>>msg;
        vector<Node*> nodes(n+1);
        NFOR(j,n){
            struct Node *newNode = new Node;
            newNode->ch = msg[j-1];
            newNode->data = j;
            newNode->totalChild = 0;
            nodes[j] = newNode;
        }
        NFOR(j,n-1){
            ll u,v;
            cin>>u>>v;
            nodes[u]->child[nodes[u]->totalChild++] = nodes[v];
            nodes[v]->child[nodes[v]->totalChild++] = nodes[u];
        }
        NFOR(j,n){
            int src = 1;
            int dest = j;
 
            vector<bool> discovered(n+1);
 
            queue<int> q;
            queue<int> path;
 
            discovered[src] = true;
 
            q.push(src);
 
            while (!q.empty()){
                int v = q.front();
                path.push(v);

                if (v == dest) {
                    break;
                }

                q.pop();

                for (int i=0; i<nodes[v]->totalChild;i++){
                    int u = nodes[v]->child[i]->data;
                    if(!discovered[u]){
                        discovered[u] = true;
                        q.push(u);
                    }
                }
            }
            while(!q.empty()){
                cout<<q.front()<<" ";
                q.pop();
            }
            cout<<endl;
        }
    }
    return 0;
}