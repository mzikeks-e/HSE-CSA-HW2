#ifndef __Aphorism__
#define __Aphorism__

//-------------------------------------------------------------------------------------
// Aphorism.h - ???????? ???????? ???????????? "???????" ? ?? ??????????
//-------------------------------------------------------------------------------------

#include <stdio.h>
#include "random.h"

//???????
struct Aphorism {
	char* author; // ????? ????????
};

// ???? ?????????? ???????? ?? ?????
void In(Aphorism& ?, FILE* file);

// ????????? ???? ????????
void InRnd(Aphorism& ?);

#endif //__Aphorism__
