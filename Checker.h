#include <iostream>
#include <vector>
using namespace std;

class checker {
protected:
	bool color; // 0 black, 1 white
	int posX; // posX in [0;10[
	int posY; // posY in [0;10[
	bool isKing; // je sui le roa lol

public:
	void getPos();
};