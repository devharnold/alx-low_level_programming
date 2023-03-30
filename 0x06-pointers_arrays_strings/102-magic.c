#include <stdio.h>
int main()
{
    int a[] = {4, 8, 98};
    int* p = &a[0];
    printf("a[2] = %d\n", *(p+2)); // Add this line
    return 0;
}

/*
 * This will print "a[2] = 98" followed by a new line.
 */

