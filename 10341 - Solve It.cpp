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
#define eps 1e-7

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

int p, q, s, r, t, u;

double f(double x){
  return p*exp(-x) + q*sin(x) + r*cos(x) + s*tan(x) + t*x*x + u;
}

double fd(double x){
    return -p*exp(-x) + q*cos(x) - r*sin(x) + s/(cos(x)*cos(x)) + 2*t*x;
}

double bs(){
    double l = 0, r = 1, m;

    while(r - l > eps){
        m = (l + r) / 2;

        if(f(l) * f(m) <= 0) r = m;
        else l = m;
    }

    return (l + r) / 2;
}

double secant(){
    double x0 = 0, x1 = 1;
    while(1){
        double d = f(x1)*(x1-x0)/(f(x1)-f(x0));
        if(abs(d) < eps) return x1;
        x0 = x1;
        x1 -= d;
    }
}

double newton(){
    if(f(0)==0) return 0;
    double x = .5;
    while(1){
        double x1 = x - f(x)/fd(x);
        if(abs(x1-x) < eps) return x;
        x = x1;
    }
}

int main(){
    //std::ios_base::sync_with_stdio(0);//cin.tie(0);
    //FI;//FO;

    //int t = 0, z = 0, len;
    int n = 0, k = 0, m = 0; int ans = 0;

    while(sf("%d %d %d %d %d %d", &p, &q, &r, &s, &t, &u) != EOF){
        if(f(0) * f(1) > 0) puts("No solution");
        else pf("%.4f\n", newton());
    }

    return 0;
}
