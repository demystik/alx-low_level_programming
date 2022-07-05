#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - user define datatypes for var dog
 * @name: The name of the dog
 * @age: How old is the dog
 * @owner: The name of the owner of the dog
 *
 * Description: little description about the dog
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
#endif /*_DOG_H_*/
