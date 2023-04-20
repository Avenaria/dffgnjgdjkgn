#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(0, "");
    // Открываем файл для чтения
    ifstream inputFile("test1.txt");

    // Проверяем, удалось ли открыть файл
    if (!inputFile.is_open()) {
        cerr << "Ошибка открытия файла!" << endl;
        return 1;
    }

    // Считываем содержимое файла в строку
    string inputString;
    getline(inputFile, inputString);

    // Закрываем файл
    inputFile.close();

    // Переворачиваем строку
    string outputString;
    for (int i = inputString.length() - 1; i >= 0; i--) {
        outputString += inputString[i];
    }

    // Открываем файл для записи
    ofstream outputFile("test2.txt");

    // Проверяем, удалось ли открыть файл
    if (!outputFile.is_open()) {
        cerr << "Ошибка открытия файла!" << endl;
        return 1;
    }

    // Записываем перевернутую строку в файл
    outputFile << outputString;

    // Закрываем файл
    outputFile.close();

    return 0;
}