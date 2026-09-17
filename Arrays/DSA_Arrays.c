#include <stdio.h>
int main(void) {
    int n, i, arr[100];
    printf("Enter number of elements: "); scanf("%d", &n);
    printf("Enter array elements: ");
    for(i=0;i<n;i++) scanf("%d", &arr[i]);
    printf("Array: "); for(i=0;i<n;i++) printf("%d%s", arr[i], i==n-1?"":" ");
    printf("\nSize: %d\n", n);
    if(n>0) printf("First: %d\n", arr[0]); else printf("First: N/A\n");
    return 0;
}
