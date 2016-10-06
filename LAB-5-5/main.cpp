#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

// Генерация случайного числа в заданном диапазоне
int random(int min, int max) {
    return (double)(rand())/RAND_MAX*(max - min) + min;
}

// Функция замены первого элемента массива с максимальным значением
int replaceElementOfArray(int **array, int n, int m) {
    int i, j, indexI = 0, indexJ, max = array[0][0], temp = array[0][0];
    for(i = 1; i < n; i++) {
        for(j = 1; j < m; j++) {
            if(array[i][j] > max) {
                max = array[i][j];
                indexI = i;
                indexJ = j;
            }
        }
    }
    array[0][0] = array[indexI][indexJ];
    array[indexI][indexJ] = temp;
    
    cout << "Максимальный элемент: a[" << indexI << "][" << indexJ << "] = " << max << endl;
}

int main() {
    srand((unsigned int)time(0));
    
    int i, j, n, m, **array, length = 20;
    cout << "Введите размерность массива (NxM): ";
    cin >> n >> m;
    array = new int*[n];
    for(i = 0; i < n; i++) {
        array[i] = new int[m];
    }
    
    // Заполнение массива
    for(i = 0; i< n; i++) {
        for(j = 0; j < m; j++) {
            array[i][j] = random(0, 100);
        }
    }
    
    for(i = 0; i< n; i++) {
        for(j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    replaceElementOfArray(array, n, m);
    
    // Вывод итогового массива
    cout << "Обработанный массив: " << endl;
    for(i = 0; i< n; i++) {
        for(j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    
    // Удаление массива из памяти
    delete []array;
    return 0;
}