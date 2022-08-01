#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - a dog's basic info
 * @name: first member
 * @age : second member
 * @owner : Third member
 *
 * has no return value it
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
