#ifndef COLLECTION_H
#define COLLECTION_H
#pragma once

#include <stdbool.h>

typedef unsigned char uInt8;
typedef char Byte;
typedef unsigned int uInt32;
typedef char Int8;
typedef int Int32;
typedef long long Int64;
typedef char* String; //of course not C++ String :D
typedef short int16;
typedef unsigned short uInt16;
//typedef unsigned long long uInt128;

#define LENGTHOF( arr) (sizeof(arr)/sizeof(0[arr]))

typedef struct
{
	float x;
	float y;
}Vector2;

typedef struct 
{
	int r;
	
}smth;

typedef struct 
{
	char str[];
	//void* (*find)(Byte c);
	//void* (*reverse)();
}
FatMayString;

void* fillMemory(void* source, int mem, size_t size);
void copyMemory(void* destination, void* source, size_t size);
void* weirdRandom(smth* seed);

bool findChar(Byte c, const char* v);
void reverseString(char* v);

float normalizeVector2(Vector2* vec);
void* deleteCharAt(char ch[], char s);

#endif // !COLLECTION_H