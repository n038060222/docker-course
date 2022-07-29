#include <stdio.h>
void swap(int* i, int* j)
{
    // What
    int temp = *i;
    *i =*j;
    *j = temp;
}

int main()
{
    //fffffffffffffffffffffffffff
    int k = 1;
    int m = 2;
    swap(&k, &m);
    // What does this print?
    printf("k = %d, m = %d\n", k, m);
}