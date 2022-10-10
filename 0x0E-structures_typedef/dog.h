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
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
