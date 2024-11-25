#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    //判断大小顺序输入排好的数组，并移动标签
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];  
        }
        else {
            list3[k++] = list2[j++]; 
        }
    }

    //先进的肯定是小的 剩余元素全在一个数组里，直接放进去
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    int size1, size2;

 cout << "Enter list1: ";
  cin >> size1;
    int list1[80];
    for (int i = 0; i < size1; i++) {
        cin >> list1[i];
    }

    cout << "Enter list2: ";
    cin >> size2;
    int list2[80];
    for (int i = 0; i < size2; i++) {
        cin >> list2[i];
    }

    int list3[80];
    merge(list1, size1, list2, size2, list3);

    cout << "The merged list is ";
    for (int i = 0; i < size1 + size2; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}
