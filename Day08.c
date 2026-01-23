#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);

    arr = (int*) malloc(num * sizeof(int));

    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    // Reverse the array
    int start = 0, end = num - 1, temp;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Print reversed array
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
