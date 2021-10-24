//------------------------------------------------------------------------------
// Aphorism.cpp - содержит процедуры для работы с афоризмами
//------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include "Aphorism.h"

const int MAX_AUTHOR_SIZE = 512;

//------------------------------------------------------------------------------
// Ввод параметров афоризма из потока
void In(Aphorism& a, FILE* file) {
    char* author = new char[MAX_AUTHOR_SIZE];
    fscanf(file, "%s", author);
    a.author = author;
}

// Случайный ввод параметров афоризма
void InRnd(Aphorism& a) {
    a.author = GenerateContent(Random(15));
}


