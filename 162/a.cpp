#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define lli long ling int;

int main()
{
    int N;
    scanf("%d", &N);

    int a, b;
    a = N / 10;
    b = N % 10;
    if (b == 7) {
        printf("Yes\n");
        return 0;
    }

    b = a % 10;
    a /= 10;
    if (b == 7) {
        printf("Yes\n");
        return 0;
    }

    b = a % 10;
    if (b == 7) {
        printf("Yes\n");
        return 0;
    }
    
    printf("No\n");

    return 0;
}