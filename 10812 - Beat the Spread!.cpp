/// Name: Md. Samshad Rahman
/// Prob: 10812 - Beat the Spread!

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
#define tkc(x) scanf("%c", &x)
#define sf scanf
#define pf1(x) printf("%d ", x)
#define pfc(x) printf("%c", x)
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

const double EPS = 1e-11;

int main()
{
    long long a, b, s, d, t;

    scanf("%lld", &t);

    while(t--)
    {
        scanf("%lld %lld", &s, &d);

        if(d > s)
        {
            printf("impossible\n");
            continue;
        }

        if(((d%2 == 0) && (s%2 != 0)) || ((d%2 != 0) && (s%2 == 0)))
        {
            printf("impossible\n");
            continue;
        }

        b = (s - d) / 2;
        a = s - b;

        if(a < 0)
            a *= -1;

        if(b < 0)
            b *= -1;

        if(a > b)
            printf("%lld %lld\n", a, b);

        else
            printf("%lld %lld\n", b, a);
    }

    return 0;
}
