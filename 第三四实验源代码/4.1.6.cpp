
#include <iostream>
#include <cctype>
using namespace std;
void count(const char s[], int counts[]) {
    // ��ʼ�� counts ����
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    for (int i = 0; s[i] != '\0'; i++) { 
        char c = tolower(s[i]);  // ���ַ�ת��ΪСд��Сд����tolower����ѧһ����֪ʶ��
        if (isalpha(c)) {  // �ж��Ƿ�Ϊ��ĸ���Ͻ�һ��
            counts[c - 'a']++;
        }
    }
}

int main() {
    const int size = 1000; 
    char str[size];

    cout << "Enter a string: ";
    cin >> str;


    int counts[26];
    count(str, counts);  

    for (int i = 0; i < 26; i++) {
        if (counts[i] != 0) {
            char c = 'a' + i;  
            cout << static_cast<char>(c) << ": " << counts[i] << " times " << endl;
        }
    }

    return 0;
}