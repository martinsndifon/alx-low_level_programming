#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this is a test structure
 * @name: name of the object
 * @age: age of the object
 * @owner: owner of the object
 *
 * Description: creates a structure for dog ownership
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
