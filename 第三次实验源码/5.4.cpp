#include<iostream>
using namespace std;
class Student {
private:
	int id;
	double score;
public:
	Student(int i, double s) :id(i), score(s) {

	}
	int GetId() {
		return id;
	}
	double GetScore()
	{
		return score;
	}

};
void max(Student student[], int size) {
	Student* hightest = &student[0];
	for (int i = 1; i < size; i++) {
		if (student[i].GetScore() > hightest->GetScore())
			hightest = &student[i];
	}
	cout << "5人中最高分为" << hightest->GetScore() << endl;
}
int main() {
	Student students[5] = {
		Student(1,85),Student(2,97),Student(3,87),Student(4,98),Student(5,93)
	};
	int size = sizeof(students) / sizeof(students[0]);
	max(students, size);
	return 0;
}