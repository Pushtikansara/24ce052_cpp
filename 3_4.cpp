 #include <iostream>
using namespace std;


template <typename T>
void display(T* arr, int size) {
    cout << "Collection: ";
    for (int i = 0; i < size; ++i)
        cout << arr[i] << " ";
    cout << endl;
}


template <typename T>
void reverse(T* arr, int size) {
    for (int i = 0; i < size / 2; ++i)
        swap(arr[i], arr[size - 1 - i]);
}


template <typename T>
T findMax(T* arr, int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; ++i)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}

int main() {
    int size;


    cout << "Enter size of integer collection: ";
    cin >> size;
    int* intArr = new int[size];
    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i)
        cin >> intArr[i];
    display(intArr, size);
    cout << "Max integer: " << findMax(intArr, size) << endl;
    reverse(intArr, size);
    display(intArr, size);
    delete[] intArr;

    cout << "\nEnter size of float collection: ";
    cin >> size;
    float* floatArr = new float[size];
    cout << "Enter " << size << " floats: ";
    for (int i = 0; i < size; ++i)
        cin >> floatArr[i];
    display(floatArr, size);
    cout << "Max float: " << findMax(floatArr, size) << endl;
    reverse(floatArr, size);
    display(floatArr, size);
    delete[] floatArr;


    cout << "\nEnter size of character collection: ";
    cin >> size;
    char* charArr = new char[size];
    cout << "Enter " << size << " characters: ";
    for (int i = 0; i < size; ++i)
        cin >> charArr[i];
    display(charArr, size);
    cout << "Max character: " << findMax(charArr, size) << endl;
    reverse(charArr, size);
    display(charArr, size);
    delete[] charArr;
    cout<<"24ce052_pushti";

    return 0;
}
