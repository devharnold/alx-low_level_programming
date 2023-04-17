#include <stdlib.h>
#include "dog.h"
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: The string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a;
	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest
 * @dest: Pointer to the buffer
 * @src: String
 *
 * Return: Upon Success (0).
 */
char *_strcpy(char *dest, char *src)
{
	int len, l;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (l = 0; l < len; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog (Success), Upon otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);



	dog = malloc(sizeof(dog_t));
	if (dog == NULL){
		return (NULL);
		}
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
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}

