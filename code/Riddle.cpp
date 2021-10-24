//------------------------------------------------------------------------------
// Riddle.cpp - содержит процедуры дл€ работы с загадками
//------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include "Riddle.h"

const int MAX_ANSWER_SIZE = 1024;

//------------------------------------------------------------------------------
// ¬вод параметров загадки из потока
void In(Riddle& r, FILE* file) {
    char* answer = new char[MAX_ANSWER_SIZE];
    fscanf(file, "%s", answer);
    r.answer = answer;
}

// —лучайный ввод параметров загадки
void InRnd(Riddle& r) {
    r.answer = GenerateContent(Random(10));
}



