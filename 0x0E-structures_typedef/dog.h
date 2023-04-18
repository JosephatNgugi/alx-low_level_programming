#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct for type dog
 * @name: Name of the dog
 * @age: age of the dog
 * @owner: Owner of the dog
 *
 * Description: This is a structure for a new dog's details
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
