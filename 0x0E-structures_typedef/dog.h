#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's details
 * @name: the dog's name
 * @age: The dog's age
 * @owner: The owner's name
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * sdog - typedef for struct dog
 */
typedef struct dog sdog;

#endif
