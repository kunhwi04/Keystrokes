## 코드 풀이 및 설명

이 코드는 10개의 배열 안에서 키 입력을 통해 좌우 이동을 시켜보는 키 입력 방식을 이해하기 위해서 만들어진 코드입니다.
### 1. 헤더 파일 포함

```markdown
#include <stdio.h>
#include <windows.h>

```
'stdio.h:' 표준 입출력 함수들이 선언된 헤더 파일입니다.
'windows.h': Windows API 함수들이 선언된 헤더 파일입니다. 여기서는 
'GetAsyncKeyState()' 함수를 사용하기 위해 포함했습니다.

### 2. 매크로와 함수 선언

```markdown
#define SIZE 10

void clearScreen();
void initializeArray(int arr[], int size);
void printArray(int arr[], int size, int position);

```
'SIZE': 배열의 크기를 정의한 매크로 상수입니다.
'clearScreen()', 'initializeArray()', 'printArray()': 각각 화면을 지우는 함수, 배열을 초기화하는 함수, 배열을 출력하는 함수입니다.

### 3. clearScreen 함수

```markdown
void clearScreen() {
    system("cls");
}

```
'system("cls")': Windows에서 화면을 지우는 명령어입니다.

### 4. initializeArray 함수

```markdown
void initializeArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = 0;
    }
}

```
주어진 배열을 0으로 초기화하는 함수입니다.

### 5. printArray 함수

```markdown
void printArray(int arr[], int size, int position) {
    for (int i = 0; i < size; ++i) {
        printf("%c ", (i == position) ? '1' : '0');
    }
    printf("\n");
}

```
주어진 배열을 출력하는 함수입니다. 현재 위치에는 '1'을 출력하고, 나머지 위치에는 '0'을 출력합니다.

### 6. main 함수

```markdown
int main() {
    // ... (생략)

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
'main' 함수는 프로그램의 시작점입니다.
'while(1)' 루프는 계속해서 화면을 갱신하며 사용자 입력을 확인하는 무한 루프입니다.
'clearScreen()' 함수로 화면을 지우고, 'printArray()' 함수로 배열의 현재 상태를 출력합니다.
'GetAsyncKeyState()' 함수로 왼쪽 화살표 키와 오른쪽 화살표 키의 상태를 확인하고, 해당 키가 눌려 있으면 배열의 위치를 조절합니다.
'Sleep(100)'은 입력이 너무 빠르게 감지되지 않도록 100밀리초 동안 대기합니다.


## main 함수에서 생략된 코드 풀이

### 1. 배열 선언

```markdown
int array[SIZE];

```
'int array[SIZE];': 크기가 'SIZE'인 정수형 배열을 선언합니다. 이 배열은 사용자가 움직일 '1'의 위치를 나타냅니다.

### 2. 현재 위치 변수 초기화

```markdown
int position = 0;

```
'int position = 0;': 배열에서 '1'의 현재 위치를 나타내는 변수입니다. 초기 값은 0으로 설정되어 배열의 첫 번째 요소를 가리킵니다.

### 3. 배열 초기화 함수 호출

```markdown
initializeArray(array, SIZE);

```
'initializeArray(array, SIZE);': 'initializeArray' 함수를 호출하여 배열을 0으로 초기화합니다. 이 함수는 아래에 정의되어 있습니다.

### 4. 현재 위치에 '1' 설정

```markdown
array[position] = 1;

```
'array[position] = 1;': 초기에 '1'을 배열에서 현재 위치에 설정합니다. 이렇게 함으로써 사용자는 시작부터 '1'을 움직일 수 있게 됩니다.
