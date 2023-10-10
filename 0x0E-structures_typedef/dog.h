#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - struct which creates an info about dog
 *
 * @name: name of the dog
 * @age: the dogs age
 * @owner: the dog owner
 *
 * Description: Alx first struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
