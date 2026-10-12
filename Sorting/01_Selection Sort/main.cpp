#include <iostream>
using namespace std;

int main() {
    int arr[5] = {9, 4, 7, 1, 6};

    for (int i = 0; i < 4; i++) {
        int minIdx = i; 

        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }

    // 3. 정렬된 배열 출력
    for (int x : arr) {
        cout << x << " ";
    }
    
}