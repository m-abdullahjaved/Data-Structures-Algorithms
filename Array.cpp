//#include <iostream>
//using namespace std;
//
//class Array {
//
//private:
//    int* A;
//    int size;  // Actual Size of Array
//    int length; // Number of Elements in Array
//
//public:
//    Array(int size):length(0) {
//        this->size = size;
//        A = new int[size];
//    }
//
//    void create() {
//        cout << "Enter number of elements: " << flush;
//        cin >> length;
//        cout << "Enter the array elements: " << endl;
//        for (int i = 0; i < length; i++) {
//            cout << "Array element: " << i+1 << " = " << flush;
//            cin >> A[i];
//        }
//    }
//
//    void display() {
//        for (int i = 0; i < length; i++) {
//            cout << A[i] << " ";
//        }
//        cout << endl;
//    }
//
//    void append(int data) {
//        if (length < size) {
//            this->A[length++] = data;
//        }
//    }
//
//    void insert(int index, int data) {
//        if (index < 0 || index > length) {
//            return;
//        }
//        else {
//            int i = 0;
//            for (i = length; i > index; i--)
//                A[i] = A[i - 1];
//
//            A[i] = data;
//            length++;
//        }
//    }
//    int deleteElement(int index) {
//        int x = 0;
//        if ( (index < 0) || (index > length) ) {
//            return 0;
//        }
//        x = A[index];
//        for (int i = index; i < (length - 1); i++) {
//            A[i] = A[i + 1];
//        }
//        length--;
//        return x;
//    }
//    ~Array() {
//        delete[] A;
//    }
//};
//
//int main() {
//    Array arr(10);
//    for (int i = 0; i < 10; i++) {
//        arr.append(i * 10);
//    }
//    arr.display();
//    cout << "Deleting Index 3...\n";
//    cout << arr.deleteElement(3) << endl;
//    arr.display();
//    return 0;
//}