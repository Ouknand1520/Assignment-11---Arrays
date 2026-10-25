// Nathan
// Ouk
// 0834524@my.msjc.edu
// 10/25/2026
// Assignment 11 - Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Create an array that holds 25 intergers with using functions to fill, print, and count the number of even numbers, and shoudl fill the array, print the array, and print the number of even numbers in the array.


using namespace std;
#include <ctime>
#include <iostream>

void fillArray(int array[], int size);
void printArray(const int array[], int size);
int counttheevens(const int array[], int size);

int main()

{
    const int ARRAY_SIZE = 25;
    int numbers[ARRAY_SIZE];

    srand(time(0));

    fillArray(numbers, ARRAY_SIZE);

    cout << "The numbers in the array are:" << endl;

    cout << endl;

    printArray(numbers, ARRAY_SIZE);
    cout << endl;

    cout << "There are " << counttheevens(numbers, ARRAY_SIZE) << " even numbers in the array." << endl;

    return 0;
}

void fillArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        array[i] = rand() % 100 + 1;
    }
}

void printArray(const int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int counttheevens(const int array[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
}