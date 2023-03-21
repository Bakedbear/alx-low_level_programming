#ifndef dog_h
#define dog_h

/**
 * free_dog - frees dogs
 * @d: pointer to structure address in memory 
 */
void free_dog(dog_t *d)
{
	if (d)
	{		
        	free(d->name);
        	free(d->owner);
        	free(d);
	}

}
