
#include <stdio.h>

int swap(int a, int b) {
    return (a + b) - (b = a);
}

int main() {
    int a = 50, b = 20;

    printf("predi smqna: a = %d, b = %d\n", a, b);

    a = swap(a, b);

    printf("sled smqna: a = %d, b = %d\n", a, b);



    return 0;

}




