#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define lli long ling int;

int main()
{
    int S, W;
    scanf("%d %d", &S, &W);

    if(W>=S) {
        printf("unsafe\n");
        return 0;
    }
    else {
        printf("safe\n");
        return 0;
    }

    return 0;
}