/// Name: MD. Samshad Rahman
/// Prob: 12554 - A Special "Happy Birthday" Song!!!

#include <bits/stdc++.h>

#define si(x) scanf("%d",&x)
#define sii(x,y) scanf("%d %d",&x,&y)
#define siii(x,y,z) scanf("%d %d %d",&x,&y,&z)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define ss(ch) scanf("%s",ch)
#define ci(x) cin >> x
#define cii(x,y) cin >> x >> y
#define ciii(x,y,z) cin >> x >> y >> z
#define coi(x) cout << x
#define coii(x,y) cout << x << " " << y
#define coiii(x,y,z) cout << x << " " << y << " " << z
#define pi(x) printf("%d",x)
#define pii(x,y) printf("%d %d",x,y)
#define piii(x,y,z) printf("%d %d %d",x,y,z)
#define pl(x) printf("%lld",x)
#define pll(x,y) printf("%lld %lld",x,y)
#define plll(x,y,z) printf("%lld %lld %lld",x,y,z)
#define ps(ch) printf("%s",ch)
#define sf scanf
#define pf printf
#define pcs(x,y) printf("Case %d: %s", x, y)
#define pci(x,y) printf("Case %d: %d", x, y)
#define pcl(x,y) printf("Case %lld: %lld", x, y)
#define pcii(x,y,z) printf("Case %d: %d %d", x, y, z)
#define pcll(x,y,z) printf("Case %lld: %lld %lld", x, y, z)
#define case(x) printf("Case %d:", ++x)
#define ccase(x) cout << "Case " << ++x << ":"
#define NL printf("\n")
#define debug(x) printf("Debug  %d !!\n",x)
#define mod 1000000007
#define FI freopen("in.txt","r",stdin)
#define FO freopen("out.txt","w",stdout)

#define FOR(i,j,k) for(i = j; i < k; i++)
#define REV(i,j,k) for(i = j; i > k; i--)
#define PI acos(-1.0)

#define INF_MAX 2147483647
#define INF_MIN -2147483647
#define sz 100

#define pb(x) push_back(x)
//#define sz(x) x.size()

#define mem(ara,val) memset(ara,val,sizeof(ara))
#define eps 1e-9

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef vector<int> VI;
typedef pair<int,int> PII;
typedef vector< PII > VII;

bool isUpperCase(char c){return c>='A' && c<='Z';}
bool isLowerCase(char c){return c>='a' && c<='z';}
bool isLetter(char c){return c>='A' && c<='Z' || c>='a' && c<='z';}
bool isDigit(char c){return c>='0' && c<='9';}
char toLowerCase(char c){return (isUpperCase(c))?(c+32):c;}
char toUpperCase(char c){return (isLowerCase(c))?(c-32):c;}

//template<class T> inline T GCD(T a, T b) { if(a<0) return GCD(-a,b); if(b<0)return GCD(a,-b); while(b){b^=a^=b^=a%=b;} return a; }
//template<class T> inline T LCM(T a, T b) { return a/GCD(a,b)*b; }

//bool prime[1100000];
//void sieve();

string people[200];
string song[16];

int main(){
    std::ios_base::sync_with_stdio(0);
    //FI;

    song[0] = "Happy";
    song[1] = "birthday";
    song[2] = "to";
    song[3] = "you";
    song[4] = "Happy";
    song[5] = "birthday";
    song[6] = "to";
    song[7] = "you";
    song[8] = "Happy";
    song[9] = "birthday";
    song[10] = "to";
    song[11] = "Rujia";
    song[12] = "Happy";
    song[13] = "birthday";
    song[14] = "to";
    song[15] = "you";

    int l, n, t, i, j, x, z;

    cin >> n;
    cin.ignore();

    FOR(l, 0, n)
        cin >> people[l];

    bool cmplt = 0, p = 0;
    l = 0;

    while(l < 16){
        FOR(i, 0, n){
            cout << people[i] << ": " << song[l++] << '\n';

            if(l == 16){
                cmplt = 1;

                if(p)
                    break;

                else
                    l = 0, cmplt = 0;
            }
        }

        p = 1;

        if(cmplt)
            break;
    }

    return 0;
}

/*
void sieve(){
    int i, j, sqrtn;
    int n = 1000000;

    mem(prime,1);

    prime[1] = 0;

    sqrtn = (sqrt((double)n));

    for(i = 3; i <= sqrtn; i += 2){
        if(prime[i] == 1){
            for(j = i*i; j <= n; j+= i+i)
                prime[j] = 0;
        }
    }
}
*/
