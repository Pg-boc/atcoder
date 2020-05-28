#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define lli long ling int;

int main()
{
    long long int N, sum = 0;
    scanf("%lld", &N);

    for (long long int i = 1; i <= N; i++) {
        if (i % 3 == 0)
            continue;
        
        if (i % 5 == 0)
            continue;

        sum += i;
    }

    printf("%lld\n", sum);

    return 0;
}