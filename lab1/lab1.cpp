// lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	float a = 9.07f;
	float b = 6.39f;
	float x = 5.17f;
	float y = a * cos(b * acos(5 - x));
	printf("Result is %f\n", y );
    return 0;
}