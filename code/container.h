#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - �������� ��� ������,
// �������������� ���������� ���������
//------------------------------------------------------------------------------

#include "StorehouseOfWisdom.h"

//------------------------------------------------------------------------------
// ���������� ��������� �� ������ ����������� �������
struct container {
    enum { max_len = MAX_CONTENT_SIZE }; // ������������ �����
    int len; // ������� �����
    StorehouseOfWisdom* cont[max_len];
};

// ������������� ����������
void Init(container& c);

// ������� ���������� �� ��������� (������������ ������)
void Clear(container& c);

// ���� ����������� ���������� �� ���������� ������
void In(container& c, FILE* file);

// ��������� ���� ����������� ����������
void InRnd(container& c, int size);

// ����� ����������� ���������� � ��������� �����
void Out(container& c, FILE* file);

// ����� ��������� ������ ����������
void ProcessingV22(container& c, FILE* file);

#endif