#include <iostream>
#include <ctime>

using namespace std;

void hm_1() {
    const int size = 10;
    int arr[size];
    int min = 0, max = 0;
    for(int i = 0; i < size; i++) {
       arr[i] = rand() % 100 - 10;
    }

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

void hm_2() {
    const int size = 12;
    int arr[size];

    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int first, seccond;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter seccond number: ";
    cin >> seccond;


    if(first > seccond) {
        int i = first;
        first = seccond;
        seccond = i;
    }
    int min = arr[first], max = arr[first];
    for(int i = first - 1; i < seccond - 1; i++) {
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

void hm_3() {
    const int size = 1000;
    int n;
    int arr[size];

    cout << "Enter len of array: ";
    cin >> n;

    srand(time(0));

    for(int i = 0; i < n; i++) {
        arr[i] = rand() % 40 - 20;
        cout << arr[i] << " ";
    }
    cout << endl;

    int i;
    do {
        cout << "#------------------------------- MENU -------------------------------#" << endl;
        cout << "#                      1. Sum of array elements                      #" << endl;
        cout << "#                      2. Dob min and max                            #" << endl;
        cout << "#                      3. Dob even numbers                           #" << endl;
        cout << "#                      4. Sum first -num to last -num                #" << endl;
        cout << "#                      5. Exit                                       #" << endl;
        cout << "#--------------------------------------------------------------------#" << endl;
        cout << "Enter number: ";
        cin >> i;
        switch(i) {
            case 1: {
                int sum = 0;
                for(int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                cout << "Sum: " << sum << endl;
                break;
            }
            case 2: {
                int min = arr[0], max = arr[0], min_i = 0, max_i = 0, dob = 1;
                for(int i = 0; i < n; i++) {
                    if(arr[i] < min) {
                        min = arr[i];
                        min_i = i;
                    }
                    if(arr[i] > max) {
                        max = arr[i];
                        max_i = i;
                    }
                }
                if(min_i > max_i) {
                    int i = min_i;
                    min_i = max_i;
                    max_i = i;
                }
                for(int i = min_i; i <= max_i; i++) {
                    dob *= arr[i];
                }
                cout << "Dob from min to max: " << dob << endl;
                break;
            }
            case 3: {
                int dob = 1;
                for(int i = 0; i < n; i++) {
                    if(arr[i] % 2 == 0) {
                        dob *= arr[i];
                    }
                }
                cout << "Dob even numbers: " << dob << endl;
                break;
            }
            case 4: {
                int sum = 0, first = 0, seccond;
                for(int i = 0; i < n; i++) {
                    if(arr[i] < 0) {
                        first = i;
                        break;
                    }
                }
                if(first != NULL) {
                    for (int i = n; i > 0; i--) {
                        if(arr[i] < 0) {
                            seccond = i;
                            break;
                        }
                    }
                    for(int i = first; i < seccond; i++) {
                        sum += arr[i];
                    }
                    cout << "Sum first -num to last -num: " << sum << endl;
                }
                else {
                    cout << "In array not have negative numbers" << endl;
                }
                break;
            }
            case 5: {
                break;
            }
            default: {
                cout << "Error" << endl;
            }
        }
    }while (i != 5);
}

int main() {
    hm_2();

    return 0;
}
