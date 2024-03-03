#include <iostream>
#include <vector>
#include <algorithm> // Для использования встроенного метода сортировки

using namespace std;

// Функция для создания рандомного массива из 100 элементов
vector<int> generateRandomArray() {
    vector<int> arr(100);
    for (int i = 0; i < 100; ++i) {
        arr[i] = rand() % 1000; // Генерируем случайные числа от 0 до 999
    }
    return arr;
}

int main() {
    // Создание рандомного массива
    vector<int> arr = generateRandomArray();

    // Вывод неотсортированного массива
    cout << "Unsorted array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Сортировка массива встроенным методом
    sort(arr.begin(), arr.end());

    // Вывод отсортированного массива
    cout << "\nSorted array:\n";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
