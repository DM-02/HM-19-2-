//
//  main.cpp
//  Шаблонные и встраиваемые функции
//
//  Created by Дмитрий Сергеевич on 05.09.2023.
//

#include <iostream>
 //task1
int sum(int num1, int num2, int num3, int num4, int num5){
    return num1 + num2 +num3 + num4 + num5;
}

//task2
inline double avg(double num1, double num2, double num3){
    return (num1 + num2 +num3) / 3;
}

//task3
template <typename T>
T findMax(T a, T b, T c){
    T maxVal = a;
    if (b > maxVal){
        maxVal = b;
    }
    if (c > maxVal){
        maxVal = c;
    }
    return maxVal;
}
template <typename T>
void printType(){
    std::cout << "Type: Unknown" << std::endl;
}
template<>
void printType<int>(){
    std::cout << "Type: int" << std::endl;
}
template<>
void printType <double> (){
    std::cout << "Type: double" << std::endl;
}
template<>
void printType <short> () {
std::cout << "Type: short" << std::endl;
}
//task4
template <typename T>
bool is_prime( T num){
    if (num < 2) {
        return false;
    }
    for ( T i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}


  


int main() {
    //task1
    /*int a, b, c, d, e;
    std::cout << "Введите первое число ->";
    std::cin >> a;
    
    std::cout << "Введите второе число ->";
    std::cin >> b;
    
    std::cout << "Введите третье число ->";
    std::cin >> c;
    
    std::cout << "Введеите четвертое число ->";
    std::cin >> d;
    
    std::cout << "Введите пятое число ->";
    std::cin >> e;
    
    int result = sum(a, b, c, d, e);
    std::cout << "Сумма всех чисел = " << result << std::endl;
    
    //task2
    int i, o, s;
    std::cout << "Введите 3 числа -> ";
    std::cin >> i >> o >> s;
    
    double res = avg(i, o, s);
    std::cout << "Cреднее арифметическое 3-х чисел = " << res << std::endl;*/
    
    //task 3
    int a = 10, b = 23, c = 123;
    std::cout << "Max Value: " << findMax(a, b, c) << std::endl;
    printType<int>();
    
    double z = 11.4, x = 3.44, v = 56.44;
    std::cout << "Max value: " << findMax(z, x, v) << std::endl;
    printType<double>();
    
    short g = 123, n = 32, k = 432;
    std::cout << "Max Value: " << findMax(g, n, k) << std::endl;
    
    //task4
    
    
    
    return 0;
}
