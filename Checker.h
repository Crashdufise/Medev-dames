#include <iostream>
#include <vector>
using namespace std;

#pragma once

class checker {
protected:
	bool color;													// 0 black, 1 white
	int posX;													// posX in [0;10[
	int posY;													// posY in [0;10[
	bool isKing;												// je sui le roa lol
	bool isNull;												// permet de g�rer la case vide

public:
	vector<int> getPos();										// accesseur en lecture de la position
	void setPos(int posX, int posY);							// accesseur en ecriture de la position
	bool getColor();											// accesseur en lecture de la couleur
	void setColor(bool color);									// accesseur en ecriture de la position
	bool getRoyalty();											// accesseur en lecture du type de pion
	void setRoyalty();											// accesseur en ecriture du type de pion
	bool getIsNull();											// accesseur en lecture du type de pion
	void setIsNull(bool _isNull);								// accesseur en ecriture du type de pion
	void deplacement(int dir, vector<vector<checker>> damier);	// m�thode de d�placement du pion : 1 en haut � droite, 2 en bas � droite, 3 en bas � gauche, 4 en haut � gauche


	checker();													// constructeur sans argument (ne sert normalement � rien)
	checker(int _posX, int _posY, bool _color, bool _isNull);	// constructeur avec arguments

	~checker();													// destructeur
};