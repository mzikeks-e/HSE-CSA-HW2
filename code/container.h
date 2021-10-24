#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - содержит тип данных,
// представляющий простейший контейнер
//------------------------------------------------------------------------------

#include "StorehouseOfWisdom.h"

//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
struct container {
    enum { max_len = MAX_CONTENT_SIZE }; // максимальная длина
    int len; // текущая длина
    StorehouseOfWisdom* cont[max_len];
};

// Инициализация контейнера
void Init(container& c);

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container& c);

// Ввод содержимого контейнера из указанного потока
void In(container& c, FILE* file);

// Случайный ввод содержимого контейнера
void InRnd(container& c, int size);

// Вывод содержимого контейнера в указанный поток
void Out(container& c, FILE* file);

// Вывод обработки данных контейнера
void ProcessingV22(container& c, FILE* file);

#endif