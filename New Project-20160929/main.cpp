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
    int i, j, index = 0, max = array[0][0];
    for(i = 1; i < n; i++) {
        for(j = 1; j < m; j++) {
            if(array[i][j] > max) {
                //max = 
            }
        }
    }
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
    
    replaceElementOfArray(array, n, m);
    
    /*
    for(i = 0; i< n; i++) {
        for(j = 0; j < m; j++) {
            cout << array[i][j] << " ";
        }
    }
    */
    
    // Удаление массива из памяти
    delete []array;
    return 0;
}

