#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for a basic dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Description - Data structure for dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif /*DOG_H*/
