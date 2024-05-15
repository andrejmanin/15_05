#include <iostream>
#include <random>
#include <vector>

using namespace std;

void task_1() {
    const int size = 6;
    int month[size];
    int sum = 0;

    for(int i = 0; i < size; i++) {
        month[i] = i;
        sum += month[i];
    }

    cout << "Sum: " << sum << endl;

}

void task_2() {
    const int size = 5;
    int arr[size];
    for(int i = 0; i < size; i++) {
        arr[i] = i;
    }
    for(int i = 4; i >= 0; i--) {
        cout << arr[i] << endl;
    }
}

void task_3() {
    const int size = 5;
    int arr[size];
    int per = 0;

    for(int & i : arr) {
        cin >> i;
        per += i;
    }
    cout << "Perimeter: " << per << endl;
}

void task_4() {
    const int size = 12;
    int arr[size];
    int min = 0, max = 0;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
        cout << arr[i] << endl;
    }
    min = arr[0];
    max = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
}

int main() {
    task_4();

    return 0;
}
