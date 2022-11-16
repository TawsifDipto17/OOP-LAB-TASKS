// Task02.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "N28_Building.h"

int main()
{	
	N28_Building::Lab lab[4];
	lab[0].setlabName("MPK1");
	lab[0].setCapacity(60);
	lab[1].setlabName("MPK2");
	lab[1].setCapacity(60);
	lab[2].setlabName("MPK3");
	lab[2].setCapacity(50);
	lab[3].setlabName("MPK4");
	lab[3].setCapacity(50);

	N28_Building::Lecturer_Room lec[4];
	lec[0].setRoomName("Hafiz");
	lec[0].setRoomNo(102);
	lec[0].setCapacity(3);
	lec[1].setRoomName("Shafie");
	lec[1].setRoomNo(105);
	lec[1].setCapacity(3);
	lec[2].setRoomName("Aisyah");
	lec[2].setRoomNo(202);
	lec[2].setCapacity(3);
	lec[3].setRoomName("Rahim");
	lec[3].setRoomNo(208);
	lec[3].setCapacity(3);

	N28_Building building;
	building.showAllLabs(lab, 4);
	building.showAllLecturerRoom(lec, 4);

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
