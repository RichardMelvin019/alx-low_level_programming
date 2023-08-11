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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
int str_len(char *str);
char *str_cpy(char *buff, char *str);

#endif
