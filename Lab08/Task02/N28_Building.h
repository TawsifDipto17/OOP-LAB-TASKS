#pragma once
#include<iostream>
#include<string>
using namespace std;
class N28_Building
{
public:

	class Lab
	{
	private:
		string labName;
		int capacity;
	public:
		string getlabName();
		void setlabName(string val);
		int getCapacity();
		void setCapacity(int val);

	};

	class Lecturer_Room
	{
	
	private:
		string roomName;
		int roomNo;
		int capacity;
	public:
		string getRoomName();
		void setRoomName(string val);
		int getRoomNo();
		void setRoomNo(int val);
		int getCapacity();
		void setCapacity(int val);

	};

	void showAllLabs(Lab val[], int cnt);
	void showAllLecturerRoom(Lecturer_Room val[],int cnt);

};

