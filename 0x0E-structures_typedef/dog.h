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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
