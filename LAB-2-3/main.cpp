#include <iostream>
#include <math.h>

using namespace std;

int main() {
   double k1, k2, result; 
   cout << "введите k1, k2: " << endl;
   cin >> k1 >> k2;
   
   if(k1*k2 > 1) {
       cout << "Второе условие";
       result = sqrt(fabs(pow(2*k1, 2) + 5*k2)) * exp(k1+k1);
   } else {
       cout << "Первое условие";
       result = sqrt(fabs(2*k1 + pow(5*k2, 2))) * exp(k1+k1);
   }
   cout << result;
   return 0;
}

