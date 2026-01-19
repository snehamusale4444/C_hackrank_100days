#include <stdio.h>

void update(int *a,int *b) {
    int p=*a;
    int q=*b;  
    *a= p+q;
    *b=abs(p -q);
      
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
