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

struct dog
{
	char *name;
	char *owner;
	double age;
};
#endif
