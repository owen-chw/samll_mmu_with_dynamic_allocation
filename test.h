#include <stdlib.h>
#include <stdio.h>
#define PAGE_SIZE	1024	

typedef unsigned u32;
typedef unsigned long long u64;

static u64* check64(u64* val) 
//@ requires true;
//@ ensures true;
{
	return val;
};
