#include <stddef.h>
#include <stdlib.h>
#include "dog.h"

char *_strdup(char *str);

/**
 * new_dog - creates a new dog_t instance of type struct dog
 * @name: The dogs name
 * @age: The dogs age
 * @owner: The dogs owner
 *
 * Return: A pointer to the new dog_t instance, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}

/**
 * _strdup - returns a pointer to a new string allocated
 * with a space in memory which is a duplicate of the string str
 * @str: String to duplicate
 *
 * Return: Pointer to the duplicated string, NULL if insufficient
 * memory was available
 */

char *_strdup(char *str)
{
	char *myStr;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	myStr = malloc(sizeof(*str) * (len + 1));

	if (myStr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		myStr[i] = str[i];

	return (myStr);
}
