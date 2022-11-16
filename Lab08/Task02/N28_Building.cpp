#include "N28_Building.h"
string N28_Building::Lab::getlabName() {
	return labName;
}
void N28_Building::Lab::setlabName(string val) {
	labName = val;
}
int N28_Building::Lab::getCapacity() {
	return capacity;
}
void N28_Building::Lab::setCapacity(int val) {
	capacity = val;
}

string N28_Building::Lecturer_Room::getRoomName() {
	return roomName;
}
void N28_Building::Lecturer_Room::setRoomName(string val) {
	roomName = val;
}
int N28_Building::Lecturer_Room::getRoomNo() {
	return roomNo;
}
void N28_Building::Lecturer_Room::setRoomNo(int val) {
	roomNo = val;
}
int N28_Building::Lecturer_Room::getCapacity() {
	return capacity;
}
void N28_Building::Lecturer_Room::setCapacity(int val) {
	capacity = val;
}

void N28_Building::showAllLabs(Lab val[],int cnt) {
	
	cout << "Show all Labs: " << endl;
	for (int i = 0; i < cnt; i++) {
		
		cout << "Lab " << val[i].getlabName() << " " << val[i].getCapacity() << " Capacity" << endl;
	}
}
void N28_Building::showAllLecturerRoom(Lecturer_Room val[],int cnt) {
	cout << "Show all Lecturers room: " << endl;
	for (int i = 0; i < cnt; i++) {

		cout << val[i].getRoomName() << " " << val[i].getRoomNo() << " " << val[i].getCapacity() << " Capacity" << endl;
	}
}
