#include<bits/stdc++.h>

using namespace std;

#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define ss(ch) scanf("%s",ch)
#define pi(x) printf("%d",x)
#define pii(x,y) printf("%d %d",x,y)
#define pl(x) printf("%lld",x)
#define pll(x,y) printf("%lld %lld",x,y)
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
#define eps 1e-9

#define pb(x) push_back(x)
#define ppb() pop_back()
#define sz(x) x.size()
#define xx first
#define yy second
#define mp(a,b) make_pair(a,b)
#define ssz(a) strlen(a)

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define clr(ara) mem(ara,0)
#define st(ara) mem(ara,-1)
#define all(a) a.begin(),a.end()
//cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";

#define debug(args...) {dbg,args; cout<<endl;}

struct debugger{
    template<typename T> debugger& operator , (const T& v){
        cout<<v<<" ";
        return *this;
    }
}dbg;

typedef long long LL;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, 1, -1, -1, 1, -1, 1};

///=>=>=>=>=>=>=>=>=>00100<=<=<=<=<=<=<=<=<=///

int chq[333];
bool nai[13];
vector<string> out;
unordered_set<string> dekhi;
char a[55];

void build(){
    string x[13];
    x[1] = "qaz";
    x[2] = "wsx";
    x[3] = "edc";
    x[4] = "rfvtgb";
    x[7] = "yhnujm";
    x[8] = "ik";
    x[9] = "ol";
    x[10] = "p";

    FOR(l, 1, 11){
        rep(i,sz(x[l]))
            chq[ x[l][i] ] = l;
    }
}

int main(){
    //std::ios_base::sync_with_stdio(0);cin.tie(0);
    //FI;FO;

    int t = 0, z = 0, len;
    int n = 0, k = 0, m = 0; int ans = 0;

    build();

    while(sii(n,m) != EOF){
        clr(nai);
        out.clear();
        dekhi.clear();

        rep(l,n){
            si(k);
            nai[k] = 1;
        }

        rep(l,m){
            ss(a);
            len = ssz(a);

            bool f = 1;

            rep(i,len){
                t = chq[a[i]];
                if(nai[t]){
                    f = 0;
                    break;
                }
            }

            if(f){
                string s = "";
                rep(i,len) s += a[i];
                if(!dekhi.count(s)){
                    dekhi.insert(s);
                    out.pb(s);
                }
            }
        }

        ans = 0;
        z = 0;
        rep(l,sz(out)) z = max(z,(int)sz(out[l]));
        sort(all(out));
        for(auto i : out)
            if(sz(i) == z)
                ans++;

        pi(ans);
        NL;
        for(auto i : out)
            if(sz(i) == z)
                cout << i << nl;
    }

    return 0;
}