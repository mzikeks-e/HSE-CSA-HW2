//------------------------------------------------------------------------------
// Saying.cpp - �������� ��������� ��� ������ � ����������� � �����������
//------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include "Saying.h"

const int MAX_COUNTRY_SIZE = 512;

//------------------------------------------------------------------------------
// ���� ���������� ���������/��������� �� ������
void In(Saying& s, FILE* file) {
    char* country = new char[MAX_COUNTRY_SIZE];
    fscanf(file, "%s", country);
    s.country = country;
}

// ��������� ���� ���������� ���������/���������
void InRnd(Saying& s) {
    s.country = GenerateContent(Random(10));
}
