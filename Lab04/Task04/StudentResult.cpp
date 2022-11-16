#include "StudentResult.h"

int StudentResult::passingMark = 40;
void StudentResult::displayMarks() {
	for (int i = 0; i < 6; i++) {
		cout << "The mark of subject " << i + 1 << " is " << subjectMark[i] << endl;
	}
}
void StudentResult::setMarks(int m1, int m2, int m3, int m4, int m5, int m6) {
	subjectMark[0] = m1;
	subjectMark[1] = m2;
	subjectMark[2] = m3;
	subjectMark[3] = m4;
	subjectMark[4] = m5;
	subjectMark[5] = m6;
}
void StudentResult::checkpassing() {
	for (int i = 0; i < 6; i++) {
		if (subjectMark[i] < passingMark) {
			fail = 1;
		}
		else fail = 0;
	}
	if (fail) cout << "The student has failed the semester" << endl;
	else cout << "The student has passed the semester" << endl;
}
