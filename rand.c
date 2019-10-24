#include "rand.h"
#include "param.h"
#include "types.h"
#include "defs.h"
 
static unsigned long next = 1;

/* RAND_MAX assumed to be 32767 */
int 
rand(void)
{
    next = next * 1103515245 + 12345;
    return ((unsigned int)(next / 65536) % RAND_MAX);
}

void srand(unsigned int seed)
{
    next = seed;
}