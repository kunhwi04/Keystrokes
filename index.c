#include <stdio.h>
#include <windows.h>

#define SIZE 10

void clearScreen() {
    system("cls");
} //콘솔창 리셋

void initializeArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = 0;
    }
} //"1" 움직이기

void printArray(int arr[], int size, int position) {
    for (int i = 0; i < size; ++i) {
        printf("%c ", (i == position) ? '1' : '0');
    }
    printf("\n");
} //"1" 움직이기

int main() {
    int array[SIZE];
    int position = 0; // 현재 위치

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
        } // 방향키 움직이기

        Sleep(100); // 딜레이
    }

    return 0;
}
