#include <stdio.h>

int main() {
    int arr[100], n, pos, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    pos = 3;
    if(pos >= 1 && pos <= n)
     {
        for(i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; 
        printf("Element deleted successfully!\n");
        printf("Updated array: ");
        for(i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Invalid position! Cannot delete element.\n");
    }
    return 0;
}
