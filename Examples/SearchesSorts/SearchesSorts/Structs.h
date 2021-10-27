// guard code

#include <stdio.h>

typedef struct rectangle
{
	double length; // nice to keep fields on separate lines to see them easier
	double width;  // cannot set any variables in declaration, no memory allocated yet
} Rectangle;

//typedef struct rectangle Rectangle;