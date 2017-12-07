#include <iostream>
#include <vector>
using namespace std;

#include "Checker.h"

vector<int> checker::getPos() {											// Accesseur en lecture de la position
	vector<int> _pos;
	_pos[0] = posX;
	_pos[1] = posY;
	return _pos;
}

void checker::setPos(int _posX, int _posY) {							// Accesseur en �criture de la position
	posX = _posX;
	posY = _posY;
}

bool checker::getColor() {												// Accesseur en lecture de la couleur
	return color;
}

void checker::setColor(bool _Color) {									// Accesseur en �criture de la couleur
	color = _Color;
}

bool checker::getRoyalty() {											// Accesseur en lecture de la royaut� (pion ou dame)
	return isKing;
}

void checker::setRoyalty() {											// Accesseur en �criture de la royaut� (passe de pion � dame)
	isKing = !isKing;
}

bool checker::getIsNull() {												// Accesseur en lecture de la royaut� (pion ou dame)
	return isNull;
}

void checker::setIsNull(bool _isNull) {									// Accesseur en �criture de la royaut� (passe de pion � dame)
	isNull = _isNull;
}

checker::checker() {													// constructeur sans argument (ne sert normalement � rien)
	setPos(0,0);
	setColor(false);
	isKing = false;
}

checker::checker(int _posX, int _posY, bool _color, bool _isNull) {		// constructeur avec arguments
	setPos(_posX, _posY);
	setColor(_color);
	isKing = false;
	setIsNull(_isNull);
}

void checker::deplacement(int dir, vector<vector<checker>> _damier) {	// m�thode de d�placement du pion : 1 en haut � droite, 2 en bas � droite, 3 en bas � gauche, 4 en haut � gauche
	int i = posX;
	int j = posY;

	switch (dir)
	{
	case 1:																// en haut � droite
		i++;
		j++;
		break;
	case 2:																// en bas � droite
		i--;
		j++;
		break;
	case 3:																// en bas � gauche
		i--;
		j--;
		break;
	case 4:																// en haut � gauche
		i++;
		j--;
		break;
	default:															// on consid�re l'utilisateur civilis� : s'il ne l'est pas on consid�re qu'il ne veut pas bouger.
		break;
	}
}

checker::~checker() {													// destructeur
}