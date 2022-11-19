// F_Z_8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*
Написать функцию, определяющую количество положительных,
отрицательных и нулевых элементов передаваемого ей массива.
*/

#include <iostream>

using namespace std;

void printArr(int arr[], int dimention);//dimention-размерность
void calculatingMassiv(int arr[], int dimention);//calculatingMassiv-вычисляемый массив

int main()
{
    int massiv[] = { 1, -2, 3, -4, 0, 0, -7, 8, -9 };
    int arDimention = sizeof(massiv) / sizeof(int);
    cout << "The program searches for the number of" << endl << //Программа выполняет поиск по количеству
        "positive, negative and zero elements" << endl;//положительные, отрицательные и нулевые элементы
    //выводим на экран исходный массив
    printArr(massiv, arDimention);
    //вызываем функцию подсчета +/-/0 элементов
    calculatingMassiv(massiv, arDimention);
    return 0;
}

void printArr(int arr[], int dimention)
{
    cout << "Start massiv: ";
    for (int i = 0; i < dimention; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void calculatingMassiv(int arr[], int dimention)
{
    int plus = 0;
    int minus = 0;
    int zero = 0;

    for (int i = 0; i < dimention; i++)
    {
        if (arr[i] > 0)
        {
            plus++;
        }
        else if (arr[i] < 0)
        {
            minus++;
        }
        else
        {
            zero++;
        }
    }
    cout << "The number of positive elements = " << plus << endl << //Количество положительных элементов
        "The number of negative elements = " << minus << endl << //Количество отрицательных элементов
        "The number of zero elements = " << zero << endl;//количество нулей в массиве
}


