#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define lli long ling int;

int main()
{
    int A, B, C, D;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    while(1) {

        // takahashi atack
        C = C - B;
        if (C <= 0) {
            printf("Yes\n");
            break;
        }

        // aoki atack
        A -= D;
        if (A <= 0) {
            printf("No\n");
            break;
        }
    }

    return 0;
}