#include <stdlib.h>
#include "dog.h"

/**
 * str_len - returns the length of a string
 * @str: string to evaluate
 * Return: the length of the string
 */
int str_len(char *str)
{
	int j;

	j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	return (j);
}

/**
 * str_cpy - copies the string pointed
 * @buff: pointer to the buffer
 * @str: string to be copied
 * Return: the pointer
 */
char *str_cpy(char *buff, char *str)
{
	int len, j;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (j = 0; j < len; j++)
	{
		buff[j] = str[j];
	}
	buff[j] = '\0';

	return (buff);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = str_len(name);
	len2 = str_len(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	str_cpy(dog->name, name);
	str_cpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
