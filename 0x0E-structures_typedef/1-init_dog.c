#include "dog.h"
/**
 * init_dog - hello
 * @d: s
 * @name: s
 * @age: s
 * @owner: s
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
