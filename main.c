#include <stdio.h>
#include "sort.h"

int main() {
    int array[] = {37,5,4,6,7,8,32};
    int length = 7;
    printf("Nieposortowana tablica:\n");
    print_array(array,length);
    bubble_b(array,length);
    printf("Posortowana tablica:\n");
    print_array(array,length);

    return 0;
}
