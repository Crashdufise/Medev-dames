#include <iostream>
#include <vector>
using namespace std;

#include "Checker.h"

vector<int> checker::getPos() {					// Accesseur en lecture de la position
	vector<int> _pos;
	_pos[0] = posX;
	_pos[1] = posY;
	return _pos;
}

void checker::setPos(int _posX, int _posY) {	// Accesseur en écriture de la position
	posX = _posX;
	posY = _posY;
}

bool checker::getColor() {						// Accesseur en lecture de la couleur
	return color;
}

void checker::setColor(bool _Color) {			// Accesseur en écriture de la couleur
	color = _Color;
}

bool checker::getRoyalty() {					// Accesseur en lecture de la royauté (pion ou dame)
	return isKing;
}

void checker::setRoyalty() {					// Accesseur en écriture de la royauté (passe de pion à dame)
	isKing = !isKing;
}

checker::checker() {
	setPos(0,0);
	setColor(false);
	isKing = false;
}

checker::checker(int _posX, int _posY, bool _color) {
	setPos(_posX, _posY);
	setColor(_color);
	isKing = false;
}
