#include <stdio.h>
#include <windows.h>

#define SIZE 10

void clearScreen() {
    system("cls");
}

void initializeArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = 0;
    }
}

void printArray(int arr[], int size, int position) {
    for (int i = 0; i < size; ++i) {
        printf("%c ", (i == position) ? '1' : '0');
    }
    printf("\n");
}

int main() {
    int array[SIZE];
    int position = 0;

    initializeArray(array, SIZE);
    array[position] = 1;

    while (1) {
        clearScreen();
        printArray(array, SIZE, position);

        if (GetAsyncKeyState(VK_LEFT) & 0x8000) {
            position = (position > 0) ? (position - 1) : position;
        }

        if (GetAsyncKeyState(VK_RIGHT) & 0x8000) {
            position = (position < SIZE - 1) ? (position + 1) : position;
        }

        Sleep(100);
    }

    return 0;
}
