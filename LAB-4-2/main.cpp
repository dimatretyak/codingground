#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

// Генерация случайного числа в заданном диапазоне
int random(int min, int max) {
    return (double)(rand())/RAND_MAX*(max - min) + min;
}

int main() {
    srand((unsigned int)time(0));
    int array[20], i, length = 20, sum = 0, max = 0;
    
    // Заполнение массива
    for(i = 0; i < length; i++) {
        array[i] = random(-100, 100);
        
        // Поиск большего положительного числа
        if(array[i] > array[max]) {
            max = i;
        }
    }
    
    // Поиск большего положительного числа
    /*for(i = 0; i < length; i++) {
        if(array[i] > array[max]) {
            max = i;
        }
    }*/
    
    cout << "Max index: " << max << endl;
    
    for(i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    
    // Находим сумму элементов
    for(i = 0; i <= max; i++) {
        sum += array[i];
    }
    
    cout << "Сумма sum = " << sum << endl;
    return 0;
}

