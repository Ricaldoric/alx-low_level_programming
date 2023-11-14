#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A new type representing a dog.
 * @name: String representing the dog's name.
 * @age: Float representing the dog's age.
 * @owner: String representing the name of the dog's owner.
 */
struct dog
{
    char *name;  /* Name of the dog */
    float age;   /* Age of the dog */
    char *owner; /* Owner of the dog */
};

#endif /* DOG_H */

/* Explanation:
   - The struct dog defines a new structure type with three members.
   - @name is a pointer to char, representing the dog's name.
   - @age is a float, representing the dog's age.
   - @owner is a pointer to char, representing the dog's owner.
   - This structure allows for creating variables that can store 
     all these pieces of information about a dog together.
   - Include guards (#ifndef, #define, #endif) prevent multiple inclusions 
     of this header file in a project, ensuring that the compiler processes 
     this definition only once regardless of how many times it's included.
*/

