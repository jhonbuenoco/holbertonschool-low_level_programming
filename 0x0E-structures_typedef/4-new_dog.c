#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - print dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;
	unsigned int i, j;

	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);
	dog1->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog1->name == NULL)
	{
		free(dog1->name);
		return (NULL);
	}
	for (i = 0; i < strlen(name); i++)
		dog1->name[i] = name[i];
	dog1->name[i] = '\0';
	dog1->age = age;
	dog1->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog1->owner == NULL)
	{
		free(dog1->owner);
		return (NULL);
	}
	for (j = 0; j < strlen(owner); j++)
		dog1->owner[j] = owner[j];
	dog1->owner[j] = '\0';
	return (dog1);
}
