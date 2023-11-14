#include "main.h"
#include <stdio.h>

/**
 * print_dog - Prints a struct dog
 * @d: A pointer to the struct dog to print
 *
 * Description: Prints members of struct dog. Prints (nil) for NULL members.
 */
void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        return; /* Exit if struct pointer is NULL */
    }

    /* Print name or (nil) if NULL */
    printf("Name: %s\n", d->name ? d->name : "(nil)");
    
    /* Print age */
    printf("Age: %.6f\n", d->age);

    /* Print owner or (nil) if NULL */
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

