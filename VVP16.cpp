#include <iostream>
/*
Задание 16

1. Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых положительных нечетных чисел: 1, 3, 5, . . . .
2. Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. Сформировать и вывести массив размера N, содержащий N первых членов данной прогрессии: A, A•D, A•D2 , A•D3 , . . .
3. Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент которого равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих
4. Дан массив A размера N. Вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,
5. Дан массив A размера N. Вывести вначале его элементы с нечетными номерами в порядке возрастания номеров, а затем — элементы с четными номерами в порядке убывания номеров

Каждая задача решена в отдельном классе
*/


class z1
{
private:
    int n;
    int* arr;

public:

    z1(int size = 10) {
        n = size;
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = 2 * i + 1;
        }
    }

    void print_arr() {
        std::cout << "Массив:\n";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << ' ';
        }
        std::cout << "\n";
    }

    void test() {
        std::cout << "Задача 1\n";
        print_arr();
    }
};

class z2
{
private:
    int n, d;
    int* arr;

public:

    z2(int size = 10, int aa = 1, int dd = 1) {
        n = size;
        d = dd;
        arr = new int[n];
        arr[0] = aa;
        for (int i = 1; i < n; i++) {
            arr[i] = arr[i-1]*d;
        }
    }

    void print_arr() {
        std::cout << "Массив:\n";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << ' ';
        }
        std::cout << "\n";
    }

    void test() {
        std::cout << "Задача 2\n";
        print_arr();
    }
};

class z3
{
private:
    int n;
    int* arr;

public:

    z3(int size = 10, int first = 1, int second = 1) {
        n = size;
        arr = new int[n];
        arr[0] = first;
        arr[1] = second;
        for (int i = 2; i < n; i++) {
            arr[i] = arr[i - 2] + arr[i -1];
        }
    }

    void print_arr() {
        std::cout << "Массив:\n";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << ' ';
        }
        std::cout << "\n";
    }

    void test() {
        std::cout << "Задача 3\n";
        print_arr();
    }
};

class z4
{
private:
    int n;
    int* arr;

public:

    z4(int size = 10) {
        n = size;
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }
    }

    z4(int size, int* m) {
        n = size;
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = m[i];
        }
    }

    void print_arr() {
        std::cout << "Массив:\n";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << ' ';
        }
        std::cout << "\n";
    }

    void max() {
        std::cout << "Массив:\n";
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                std::cout << arr[i / 2] << ' ';
            }
            else {
                std::cout << arr[n - 1 - (i / 2)] << ' ';
            }
        }
        std::cout << "\n";
    }

    void test() {
        std::cout << "Задача 4\n";
        print_arr();
        max();
    }
};

class z5
{
private:
    int n;
    int* arr;

public:

    z5(int size = 10) {
        n = size;
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = i + 1;
        }
    }

    z5(int size, int* m) {
        n = size;
        arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = m[i];
        }
    }

    void print_arr() {
        std::cout << "Массив:\n";
        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << ' ';
        }
        std::cout << "\n";
    }

    void dd() {
        std::cout << "Массив:\n";
        for (int i = 0; i < n; i+=2) {
            std::cout << arr[i] << ' ';
        }
        for (int i = n - (n % 2) - 1; i > -1; i -= 2) {
            std::cout << arr[i] << ' ';
        }
        std::cout << "\n";
    }

    void test() {
        std::cout << "Задача 5\n";
        print_arr();
        dd();
    }
};


int main()
{
    setlocale(LC_ALL, "rus");

    z1 first;
    z2 second;
    z3 third;
    z4 fourth;
    z5 fifth;

    first.test();
    second.test();
    third.test();
    fourth.test();
    fifth.test();

    return 0;
}
