#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define lli long ling int;

int gcd(int a, int b)
{
    int r;
    r = a % b;
    while(r!=0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main()
{
    long long int K, sum = 0;
    scanf("%lld", &K);

    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= K; j++) {
            for (int k = 1; k <= K; k++) {
                // i,j,k gcd
                int a, b, c, d, tmp;
                a = i;
                b = j;
                c = k;
                if (a < b) {
                    tmp = a;
                    a = b;
                    b = tmp;
                }
                d = gcd(a, b);

                if (c < d) {
                    tmp = c;
                    c = d;
                    d = tmp;
                }
                int res = gcd(c, d);
                sum += res;
            }
        }
    }

    printf("%lld\n", sum);

    return 0;
}