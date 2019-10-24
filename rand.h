
#ifndef _RAND_H
#define _RAND_H


#ifndef RAND_MAX
# define RAND_MAX (1 << 31) 
#endif

int rand(void);
void srand(unsigned int);

#endif // __RAND_H
