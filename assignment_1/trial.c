#include <stdio.h>

struct student {
    int id;
    char name[50];
    float percentage;
};

int main() {
    struct student s;
    float a;
    int b;
    char arr[50];
    printf("Size of structure student: %lu\n", sizeof(s));
    printf("%lu",sizeof(a));
    printf("%lu",sizeof(b));
    printf("%lu",sizeof(arr));
    return 0;
}
