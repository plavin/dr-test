#include <stdlib.h>
#define len 10
int main(int argc, char **argv)
{
    int *arr = (int*)malloc(sizeof(int) * len);

    for (int i = 0; i < len; i++) {
       arr[i] = i*i;
    }

    for (int i = 0; i < len; i++) {
       arr[i] = i/3;
    }

    if (arr[0]) {
        exit(1);
    }
    exit(0);
}

