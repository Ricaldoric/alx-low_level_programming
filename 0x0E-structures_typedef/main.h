#ifndef MAIN_H
#define MAIN_H

#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog *new_dog(char *name, float age, char *owner);
void free_dog(struct dog *d);

#endif /* MAIN_H */
