## Code unpacking and explanation

This code was created to understand how keystrokes can be used to pan left and right within an array of 10.
### 1. Include header files

```markdown
#include <stdio.h>
#include <windows.h>

```
'stdio.h:' Header file where standard input and output functions are declared.
'windows.h': The header file where Windows API functions are declared. Here, the 
'GetAsyncKeyState()' function.

### 2. Declaring macros and functions

```markdown
#define SIZE 10

void clearScreen();
void initializeArray(int arr[], int size);
void printArray(int arr[], int size, int position);

```
'SIZE': A macro constant that defines the size of the array.
'clearScreen()', 'initializeArray()', 'printArray()': Functions to clear the screen, initialize the array, and print the array, respectively.

### 3. clearScreen Function

```markdown
void clearScreen() {
    system("cls");
}

```
'system("cls")': The command to clear the screen in Windows.

### 4. initializeArray Function

```markdown
void initializeArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = 0;
    }
}

```
A function that initializes the given array to zero.

### 5. printArray Function

```markdown
void printArray(int arr[], int size, int position) {
    for (int i = 0; i < size; ++i) {
        printf("%c ", (i == position) ? '1' : '0');
    }
    printf("\n");
}

```
Function that outputs the given array. Outputs a '1' at the current position, and a '0' at the rest of the positions.

### 6. main function

```markdown
int main() {
    // ... (skip)

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
```
The 'main' function is the starting point of the program.
The 'while(1)' loop is an infinite loop that continually updates the screen and checks for user input.
The 'clearScreen()' function clears the screen, and the 'printArray()' function prints the current state of the array.
The 'GetAsyncKeyState()' function checks the state of the left and right arrow keys, and adjusts the position of the array when those keys are pressed.
'Sleep(100)' waits for 100 milliseconds to prevent input from being detected too quickly.


## Unpacking omitted code in the main function

### 1. Declaring arrays

```markdown
int array[SIZE];

```
'int array[SIZE];': Declares an integer array with size 'SIZE'. This array represents the position of the '1' that the user will move to.

### 2. Initialize the current location variable

```markdown
int position = 0;

```
'int position = 0;': A variable representing the current position of '1' in the array. The initial value is set to 0, pointing to the first element in the array.

### 3. Calling array initialization functions

```markdown
initializeArray(array, SIZE);

```
'initializeArray(array, SIZE);': Initializes the array to zero by calling the 'initializeArray' function. This function is defined below.

### 4. Set '1' to the current position

```markdown
array[position] = 1;

```
'array[position] = 1;': Initially sets '1' to the current position in the array. This allows the user to move '1' from the beginning.
