#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    const int max_size = 10;
    int arr1[max_size], arr2[max_size], merged[max_size * 2];
    int el1, el2;

    
    cout << "Enter the number of elements in the first array (max 10): ";
    cin >> el1;
    if(el1 > max_size) {
        cout << "Exceeded maximum array size of 10." << endl;
        return 1;
    }

    cout << "Enter elements of the first array: \n";
    for(int i = 0; i < el1; i++) {
        cin >> arr1[i];
    }

    
    cout << "Enter the number of elements in the second array (max 10): ";
    cin >> el2;
    if(el2 > max_size) {
        cout << "Exceeded maximum array size of 10." << endl;
        return 1;
    }

    cout << "Enter elements of the second array: \n";
    for(int i = 0; i < el2; i++) {
        cin >> arr2[i];
    }

    
    for(int i = 0; i < el1; i++) {
        merged[i] = arr1[i];
    }
    for(int i = 0; i < el2; i++) {
        merged[el1 + i] = arr2[i];
    }

    
    sort(merged, merged + el1 + el2, greater<int>());

    
    cout << "Merged array in descending order: ";
    for(int i = 0; i < el1 + el2; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}
