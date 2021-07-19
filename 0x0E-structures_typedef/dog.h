#ifndef dog_h
#define dog_h
/**
 * struct dog - Contains Bio Data of my pet dog
 * @name: Name of my little dog
 * @age: Dog's age
 * @owner: The owner
 *
 * This struct is to be populated with the details specified above
 */
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*ifndef dog_h ends here*/
