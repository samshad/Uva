#include<bits/stdc++.h>

using namespace std;

#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define ss(ch) scanf("%s",ch)
#define chr getchar()
#define pi(x) printf("%d",x)
#define pii(x,y) printf("%d %d",x,y)
#define pl(x) printf("%lld",x)
#define pll(x,y) printf("%lld %lld",x,y)
#define ps(ch) printf("%s",ch)
#define sf scanf
#define pf printf
#define pcs(x,y) printf("Case %d: %s", x, y)
#define pci(x,y) printf("Case %d: %d", x, y)
#define pcl(x,y) printf("Case %d: %lld", x, y)
#define NL printf("\n")
#define nl '\n'
#define mod 1000000007
#define FI freopen("in.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)

#define FOR(i,j,k) for(int i = j; i < k; i++)
#define rep(l,n) FOR(l,0,n)
#define per(i,j,k) for(int i = j; i > k; i--)

#define PI acos(-1.0)
#define INF_MAX 2147483647
#define INF_MIN -2147483647

#define pb(x) push_back(x)
#define ppb() pop_back()
#define sz(x) x.size()
#define xx first
#define yy second
#define mp(a,b) make_pair(a,b)
#define ssz(a) strlen(a)
#define eps 1e-9

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define clr(ara) mem(ara,0)
#define st(ara) mem(ara,-1)
#define all(a) a.begin(),a.end()

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef vector< vector<int> > VVI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

/*LL bs(LL in){
    LL lo = 0, hi = k - 1, mid, ret = -1;

    while(lo <= hi){
        mid = ((lo+hi) >> 1);

        if(bk[mid] <= in){
            ret = mid;
            lo = mid + 1;
        }

        else
            hi = mid - 1;
    }

    return ret;
}*/

///=>=>=>=>=>=>=>=>=>00100<=<=<=<=<=<=<=<=<=///

VI v[110];
bool vis[110], dis[110];

void dfs(int u){
    vis[u] = 1;

    for(auto i : v[u])
        if(!vis[i] && !dis[i])
            dfs(i);
}

bool chc(int n){
    FOR(l, 1, n+1)
        if(!vis[l] && !dis[l])
            return 1;

    return 0;
}

int main(){
    //std::ios_base::sync_with_stdio(0);cin.tie(0);
    //FI;FO;

    int t = 0, z = 0, len;

    int n, k = 0, m = 0, bam = 0, dan = 0; int ans = 0;

    while(si(n) && n){
        rep(l,110) v[l].clear();

        string s;

        chr;

        while(getline(cin,s)){
            istringstream in(s);

            int a, b;

            in >> a;

            if(!a) break;

            while(in >> b){
                v[a].pb(b);
                v[b].pb(a);
            }
        }

        ans = 0;

        clr(vis);
        clr(dis);

        dis[1] = 1;

        dfs(2);

        ans += chc(n);

        FOR(l, 2, n+1){
            clr(vis);
            clr(dis);

            dis[l] = 1;

            dfs(1);

            ans += chc(n);
        }

        pi(ans);
        NL;
    }

    return 0;
}
