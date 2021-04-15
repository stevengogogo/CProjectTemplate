#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

int main()
{
    
    // newnumc("3434");
    int a = 1;
    int b = 3;
    extm big;
    //scanf("%s %s", a, b);
    big = max(&a, &b);

    //bigint* I = newnumc(a[1]);
    printf("Compare a(=%d) and b(=%d): maximum equals to %d\n",a,b,big.extreme);

    return 0;
}