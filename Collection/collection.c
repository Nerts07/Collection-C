/*
* SPDX-License-Identifier: MIT
* 
* Copyright (c) 2024, Nerts - Isa Heydarli
*/
#include "collection.h"

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <stdbool.h>
#include <time.h>
#include <Windows.h>

void* fillMemory(void* source, int mem, size_t size)
{
	uInt8* p = source;
	assert(p != NULL);
	while (size--)
	{
		*p++ = (uInt8)mem;
	}
	return source;
}

void copyMemory(void* destination, void* source, size_t size)
{
	uInt8* p = destination;
	uInt8* q = source;
	assert(p != NULL);
	while (size--)
	{
		*p++ = *q++;
	}
}

void* weirdRandom(smth* seed)
{
	srand((uInt32)time(0));

	smth* rr = seed;
	assert(rr != NULL);

	int l = rr->r;
	int ll = rand() % l;
	rr->r = sqrt(rr->r / 2) + ll;

	return rr;
}

void swapIt(String v[], int i, int j)
{
	char tmp;
	tmp = v[i];
	v[i] = v[j];
	v[j] = tmp;
}

float normalizeVector2(Vector2* vec)
{
	Vector2* v = vec;
	return sqrt(v->x * v->x + v->y * v->y);
}

/*
* @brief finds char at string and returns boolean
*/
bool findChar(Byte c, const char* v)
{
	int index = 0;
	bool found = false;
	while (v[index] != '\0')
	{
		if (v[index] == c)
		{
			found = true;
			break;
		}
		index++;
	}
	return found;
}
int charAt(Byte c, const char* v)
{
	int index = 0;
	while (v[index] != '\0')
	{
		if (v[index] == c)
		{
			return index;
			break;
		}
		index++;
	}
}

void reverseString(char* v)
{
	int len = strlen(v);
	char temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = v[i];
		v[i] = v[len - i - 1];
		v[len - i - 1] = temp;
	}
}

void* deleteCharAt(char ch[], char s)
{
	for (size_t i = 0; i < LENGTHOF(ch); i++)
	{
		if (ch[i] == s)
		{
			for (size_t j = i; j < LENGTHOF(ch); j++)
			{
				ch[j] = ' ';
				break;
			}
		}
	}
}
