//------------------------------------------------------------------------------
// Riddle.cpp - �������� ��������� ��� ������ � ���������
//------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include "Riddle.h"

const int MAX_ANSWER_SIZE = 1024;

//------------------------------------------------------------------------------
// ���� ���������� ������� �� ������
void In(Riddle& r, FILE* file) {
    char* answer = new char[MAX_ANSWER_SIZE];
    fscanf(file, "%s", answer);
    r.answer = answer;
}

// ��������� ���� ���������� �������
void InRnd(Riddle& r) {
    r.answer = GenerateContent(Random(10));
}



