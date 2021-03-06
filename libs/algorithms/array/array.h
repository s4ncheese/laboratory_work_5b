//
// Created by Александр on 12.12.2021.
//

#ifndef INC_4E_ARRAY_H
#define INC_4E_ARRAY_H

#include <stddef.h>

// Возвращает максимальное из чисел a и b
long long max2_(long long a, long long b);

// Возвращает минимальное из чисел a и b
int absMin2_(int a, int b);

// Обменивает значения по адресам a и b
void swap_(long long *a, long long *b);

// Обменивает вещественные значения по адресам a и b
void dSwap_(double *a, double *b);

// Ввод массива array размера size
void inputArray_(long long *array, size_t size);

// Вывод массива array размера size
void outputArray_(const long long *array, size_t size);

// Возвращает значение первого вхождения элемента x в массив
// array размера size при его наличии, иначе - значение size
size_t linearSearch_(const long long *array, size_t size, long long x);

// Возвращает значение первого вхождения элемента x в отсортированный
// массив array размера size при его наличии, иначе - значение size
size_t binarySearch_(const long long *array, size_t size, long long x);

// Возвращает значение первого вхождения элемента большего или равного
// значению x в массиве array размера size
// При отсутствии такого элемента возвращает значение size
size_t binarySearchMoreOrEqual_(const long long *array, size_t size,
                                long long x);

// Вставка элемента со значением value на позицию pos в массив array
// размера size
void insert_(long long *array, size_t *size, size_t pos,
             long long value);

// Добавление элемента value в конец массива array размера size
void append_(long long *array, size_t *size, long long value);

// Удаление элемента на позиции pos в массиве array размера size
// с сохранением порядка элементов
void deleteBySavePosOrder_(long long *array, size_t *size, size_t pos);

// Удаление элемента на позиции pos в массиве array размера size
// без сохранения порядка элементов
void deleteByUnsavePosOrder_(long long *array, size_t *size, size_t pos);

// Возвращает значение 'истина', если все элементы массива
// array размера size удовлетворяют функции - предикату
// predicate, иначе - 'ложь'
int all_(const long long *array, size_t size, int (*predicate)(long long));

// Возвращает значение 'истина', если хотя бы один элемент массива
// array размера size удовлетворяют функции - предикату
// predicate, иначе - 'ложь'
int any_(const long long *array, size_t size, int (*predicate)(long long));

// Применяет функцию predicate ко всем элементам массива source
// размера size, сохраняя результат в массиве dest размера size
void forEach_(long long *source, size_t size, long long *dest,
              int (*predicate)(long long));

// Возвращает количество элементов массива array размера size,
// которые удовлетворяют функции - предикату predicate
long long countIf_(const long long *array, size_t size, int (*predicate)(long long ));

// Удаляет все элементы массива array размера size, которые
// удовлетворяют функции - предикату.
// В size записывается новый размер массива
void deleteIf_(long long *array, size_t *size, int (*deletePredicate)(long long ));

#endif //INC_4E_ARRAY_H