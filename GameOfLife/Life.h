#pragma once
#define spaceX 20
#define spaceY 50

const int a = spaceX + 2;
const int b = spaceY + 2;


class Life
{

	int space[a][b];

	int check(int i, int j);
	void printSpace();
	void generateLife();


public:
	Life();
	~Life();

	void runLife();
};

