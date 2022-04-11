#include "dog.h"
#include <stdlib.h>

/**
* new_dog - function that creates a new dog
* @name: name dog
* @age: age dog
* @owner: owner dog
* Return: 0
**/

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *n_dog;
int d;
int new_name;
int new_owner;

n_dog = malloc(sizeof(dog_t));
if (n_dog == NULL || !name || !owner)
{
free(n_dog);
return (NULL);
}
for (new_name = 0; name[new_name]; new_name++)
;
for (new_owner = 0; owner[new_owner]; new_owner++)
;
n_dog->name = malloc(new_name + 1);
n_dog->owner = malloc(new_owner + 1);

if (!n_dog->name || !n_dog->owner)
{
free(n_dog->owner);
free(n_dog->name);
free(n_dog);
return (NULL);
}
for (d = 0; d < new_name; d++)
n_dog->name[d] = name[d];
n_dog->name[d] = '\0';
n_dog->age = age;

for (d = 0; d < new_owner; d++)
n_dog->owner[d] = owner[d];
n_dog->owner[d] = '\0';
return (n_dog);
}
