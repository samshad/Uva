/// Name: MD. Samshad Rahman
/// Prob: 12250 - Language Detection

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <iostream>
#include <cctype>
#include <string>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <bitset>
#include <utility>
#include <fstream>
#include <set>
#include <ctime>

#define co cout
#define ci cin
#define sf1(x) scanf("%d", &x)
#define sfs(x) scanf("%s", x)
#define sf scanf
#define pf1(x,y) printf("Case %d: %s", x, y)
#define nl printf("\n")
#define pf printf
#define FOR(i,j,k) for(i = j; i < k; i++)
#define mem(x,n) memset((x),(n),sizeof((x)))
#define pi acos(-1.0)

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

template<class T> inline T MAX( T a, T b ) { return a>b?a:b; }
template<class T> inline T MIN( T a, T b ) { return a<b?a:b; }
template<class T> inline void SWAP( T &a, T &b ) { a=a^b; b=a^b; a=a^b; }
template<class T, class T1>inline void Reverse( T1 A[], T i, T j ) { for( ; i<j; i++,j-- ) SWAP( A[i], A[j] ); }
template<class T> inline T fAbs( T a ) { return a<0?a*(-1):a; }
template<class T> inline T GCD(T a, T b) { if(a<0) return GCD(-a,b); if(b<0)return GCD(a,-b); while(b){b^=a^=b^=a%=b;} return a; }
template<class T> inline T LCM(T a, T b) { return a/GCD(a,b)*b; }

const double EPS = 1e-11;

int main(){
    char a[20];

    int l, n, c = 0;

    while(sfs(a)){
        if(strcmp(a, "#") == 0)
            break;

        if(strcmp(a, "HELLO") == 0)
            pf1(++c, "ENGLISH");

        else if(strcmp(a, "HOLA") == 0)
            pf1(++c, "SPANISH");

        else if(strcmp(a, "HALLO") == 0)
            pf1(++c, "GERMAN");

        else if(strcmp(a, "BONJOUR") == 0)
            pf1(++c, "FRENCH");

        else if(strcmp(a, "CIAO") == 0)
            pf1(++c, "ITALIAN");

        else if(strcmp(a, "ZDRAVSTVUJTE") == 0)
            pf1(++c, "RUSSIAN");

        else
            pf1(++c, "UNKNOWN");

        nl;

    }

    return 0;
}
