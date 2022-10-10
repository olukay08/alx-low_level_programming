#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Define a new type struct dog with the following elements
 * @name:first member
 * @age:sec member
 * @owner:Third menmber
 * Description:Same as above
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
