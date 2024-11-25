#include <iostream>
using namespace std;
// ��������Ԫ�صĺ���
void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

// ����������
void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

int main() {
    double list[10];
    cout << "������ 10 ��˫�������֣�" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> list[i];
    }

    bubbleSort(list, 10);

    cout << "���������֣�" << endl;
    for (int i = 0; i < 10; i++) {
       cout << list[i] << " ";
    }
    cout << std::endl;

    return 0;
}
