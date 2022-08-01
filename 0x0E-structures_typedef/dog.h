#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a structure defining the properties of a dog
 *
 * @name: char
 *
 * @owner: char
 *
 * @age: double
 *
 * Description: the name, owner and age of the dog is defined in the structure
 * named dog
 */

typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
