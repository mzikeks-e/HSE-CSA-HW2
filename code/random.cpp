#include "random.h"
#include "StorehouseOfWisdom.h"


int Random(int to) {
    return rand() % to;
}

char* GenerateContent(int length) {
    char* string = new char[MAX_CONTENT_SIZE];

    for (int i = 0; i < length; i++) {
        string[i] = rand() % 93 + 32; // случайный символ с номером от 32 до 125
    }
    string[length] = '\0';

    return string;
}
