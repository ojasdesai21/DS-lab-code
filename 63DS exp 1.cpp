#include <iostream>
using namespace std;

int main() {
    int a[50], n, choice, pos, val, key, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    do {
        cout << "\n ARRAY OPERATIONS  \n";
        cout << "1. Display\n";
        cout << "2. Insert\n";
        cout << "3. Delete\n";
        cout << "4. Search\n";
        cout << "5. Sort\n";
        cout << "6. Reverse\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                cout << "Array elements: ";
                for(int i = 0; i < n; i++)
                    cout << a[i] << " ";
                break;

            case 2:
                cout << "Enter position and value: ";
                cin >> pos >> val;

                for(int i = n; i > pos; i--)
                    a[i] = a[i - 1];

                a[pos] = val;
                n++;
                cout << "Element inserted";
                break;

            case 3:
                cout << "Enter position to delete: ";
                cin >> pos;

                for(int i = pos; i < n - 1; i++)
                    a[i] = a[i + 1];

                n--;
                cout << "Element deleted";
                break;

            case 4:
                cout << "Enter element to search: ";
                cin >> key;

                for(int i = 0; i < n; i++) {
                    if(a[i] == key) {
                        cout << "Element found at position " << i;
                        break;
                    }
                    if(i == n - 1)
                        cout << "Element not found";
                }
                break;

            case 5:
                for(int i = 0; i < n; i++) {
                    for(int j = i + 1; j < n; j++) {
                        if(a[i] > a[j]) {
                            temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                        }
                    }
                }
                cout << "Array sorted";
                break;

            case 6:
                for(int i = 0; i < n / 2; i++) {
                    temp = a[i];
                    a[i] = a[n - i - 1];
                    a[n - i - 1] = temp;
                }
                cout << "Array reversed";
                break;

            case 7:
                cout << "Exiting program";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 7);

    return 0;
}
