//#include <iostream>
#include <cstring> // strcmp, strcpy, stricmp
#include <cstdlib> // qsort 

using namespace std;

int charcmp(const void* a, const void* b) {
    int code_a = *(unsigned char*)a;
    int code_b = *(unsigned char*)b;
    return code_a - code_b;
}

int main(void) {
    char input[100] = "", output[100] = "";
    int temp = 0;
    
    cout << "Введите исходную строку (до 100 символов): ";
 	cin >> input;

 	for (int i = 0; i <= strlen(input); i++) {
 	    //cout << input[i] << endl;
 	    if(toupper(input[i]) >= 'J' && toupper(input[i]) <= 'S') {
 	        output[temp++] = toupper(input[i]);
 	    }
 	    
 	}
 	
 	cout << "Результат работы до сортировки" << endl;
 	cout << output << endl;
 	
 	/* Сортировка в алфавитном порядке
 	 * first указатель на сортируемый элемент
 	 * number Количество элементов в сортируемом массиве
 	 * size Размер одного элемента массива в байтах
 	 * comparator Функция, которая сравнивает два элемента
 	 */
 	qsort(output, strlen(output), sizeof(char), charcmp);
 	
 	cout << "Результат работы программы" << endl;
 	cout << output << endl;
 	
 	return 0;
} 