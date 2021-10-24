#ifndef __StorehouseOfWisdom__
#define __StorehouseOfWisdom__

//------------------------------------------------------------------------------
// StorehouseOfWisdom.cpp - �������� ��������� ��������� � ���������� 
// o���������� ��������� (������� ��������)
// � �������� ������������ ������������
//------------------------------------------------------------------------------

#include "Saying.h"
#include "Riddle.h"
#include "Aphorism.h"


const char PUNCTUATION_SYMBOLS[]{ ',', '.', ';', '-', ':', '-', '?', '!' };
const int MAX_CONTENT_SIZE = 4096;

//------------------------------------------------------------------------------
// ���������, ���������� ��� ��������� ������������ (������� ��������)
struct StorehouseOfWisdom {
    // �������� ������ ��� ������ �� �������� ��������
    enum key { RIDDLE, APHORISM, SAYING };
    key k;

	char* content;

    // ������������ ������������
    union {
        Riddle riddle_;
        Aphorism aphorism_;
        Saying saying_;
    };
};

// ���� ���������� ������� ��������
StorehouseOfWisdom* In(FILE* file, int k);

// ��������� ���� ������� ��������
StorehouseOfWisdom* InRnd();

// ����� ���������� ������� ��������
void Out(StorehouseOfWisdom& s, FILE* file);

// ���������� �������� ������ �� ����� ������� ��������
double Quotient(StorehouseOfWisdom& s);

#endif
