#include <iostream>
using namespace std;

int main() {
    int numbers[10]; 
    int uniqueNumbers[10] = { 0 }; 
    int uniqueCount = 0; 
    cout << "请输入10个数：" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> numbers[i];
    }
    for (int i = 0; i < 10; ++i) {
        bool isUnique = true;
        for (int j = 0; j < uniqueCount; ++j) {
            if (uniqueNumbers[j] == numbers[i]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            uniqueNumbers[uniqueCount++] = numbers[i];
        }
    }
    cout << "不同的数有：" << endl;
    for (int i = 0; i < uniqueCount; ++i) {
        cout << uniqueNumbers[i] << " ";
    }
    cout << endl;

    return 0;
}