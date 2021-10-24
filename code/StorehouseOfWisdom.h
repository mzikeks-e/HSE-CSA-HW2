#ifndef __StorehouseOfWisdom__
#define __StorehouseOfWisdom__

//------------------------------------------------------------------------------
// StorehouseOfWisdom.cpp - содержит процедуры связанные с обработкой 
// oбобщенного артефакта (Кладези мудрости)
// и создания произвольной альтернативы
//------------------------------------------------------------------------------

#include "Saying.h"
#include "Riddle.h"
#include "Aphorism.h"


const char PUNCTUATION_SYMBOLS[]{ ',', '.', ';', '-', ':', '-', '?', '!' };
const int MAX_CONTENT_SIZE = 4096;

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся альтернативы (кладези мудрости)
struct StorehouseOfWisdom {
    // значения ключей для каждой из кладезей мудрости
    enum key { RIDDLE, APHORISM, SAYING };
    key k;

	char* content;

    // используемые альтернативы
    union {
        Riddle riddle_;
        Aphorism aphorism_;
        Saying saying_;
    };
};

// Ввод обобщенной кладези мудрости
StorehouseOfWisdom* In(FILE* file, int k);

// Случайный ввод кладези мудрости
StorehouseOfWisdom* InRnd();

// Вывод обобщенной кладези мудрости
void Out(StorehouseOfWisdom& s, FILE* file);

// Вычисление частного знаков на длину кладези мудрости
double Quotient(StorehouseOfWisdom& s);

#endif
