#ifndef dog_h
#define dog_h

/**
 * struct dog - structure with three elements
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: structure named struct dog containing three elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * typedef - alias for struct name
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
