#include <stdio.h>

typedef struct {
	void* (*const hello)(void *self);
} Logger;

void hello(char*);

