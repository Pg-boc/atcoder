#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;
#define lli long ling int;

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // a, b swap
    int tmp = 0;
    tmp = a;
    a = b;
    b = tmp;

    // a, c swap
    tmp = a;
    a = c;
    c = tmp;

    cout << a << " " << b << " " << c <<endl;

    return 0;
}