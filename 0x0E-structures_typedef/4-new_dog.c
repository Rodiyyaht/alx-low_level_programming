#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string
 *  @str: The string to be measured
 *  Return: The length of the string
 */
int _strlen(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	return (l);
}

/**
 * *_strcpy - Copies a string pointed to by src, including the
 * terminating null byte, to a buffer pointed to by dest
 * @dest: pointer to the buffer in which we copy the string
 * @src: source string
 *
 * Return : the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];

	dest[i] != '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggi;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	doggi = malloc(sizeof(dog_t));
	if (doggi == NULL)
		return (NULL);

	doggi->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggi->name == NULL)
	{
		free(doggi);
		return (NULL);
	}

	doggi->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggi->owner == NULL)
	{
		free(doggi->name);
		free(doggi);
		return (NULL);
	}

	doggi->name = _strcpy(doggi->name, name);
	doggi->age = age;
	doggi->owner = _strcpy(doggi->owner, owner);

	return (doggi);
}
