#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/* main - creates an array
 * @c- prints the size of the aloocated memory
 * size- is the size of the mem allocated
 * return: array at success and null at failure
 */

char *create_array(unsigned int size, char c) {
    if (size == 0) {
        return NULL;  
    }

    char *array = malloc(size * sizeof(char));  

    if (array == NULL) {
        return NULL;  
    }

    for (unsigned int i = 0; i < size; i++) {
        array[i] = c;  
    }

    return (array);
}
