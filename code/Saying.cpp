//------------------------------------------------------------------------------
// Saying.cpp - содержит процедуры дл€ работы с пословицами и поговорками
//------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include "Saying.h"

const int MAX_COUNTRY_SIZE = 512;

//------------------------------------------------------------------------------
// ¬вод параметров пословицы/поговорки из потока
void In(Saying& s, FILE* file) {
    char* country = new char[MAX_COUNTRY_SIZE];
    fscanf(file, "%s", country);
    s.country = country;
}

// —лучайный ввод параметров пословицы/поговорки
void InRnd(Saying& s) {
    s.country = GenerateContent(Random(10));
}
