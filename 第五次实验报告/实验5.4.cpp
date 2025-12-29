#include<iostream>
class Student {
private:
	int id;
	int score;
public:
	Student(int id = 0, int score = 0) :id(id), score(score) {}
	void max(Student* id);
	void showmaxid() {
		std::cout << "The student with the highest score is ID: " << id  << std::endl;
	}
};
void Student::max(Student* s) {
	for (int i = 0; i < 5; i++) {
		if (s[i].score > score) {
		score = s[i].score;
		id = s[i].id;
		}
	}
}
int main() {
	Student s[5] = { Student(1, 85), Student(2, 90), Student(3, 78), Student(4, 92), Student(5, 88) };
	s->max(s);
	s->showmaxid();
	return 0;
}