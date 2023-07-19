#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - dog data type
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: The attributes of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
