#ifndef DOG_H
#define DOG_H

/**
 * dog_t - Prototypes for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * struct dog - Define a new type struct dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: The owner of the dog
 * Description: Define a new type struct dog with the name, age and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
