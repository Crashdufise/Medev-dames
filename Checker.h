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
	bool isNull;												// permet de gérer la case vide

public:
	vector<int> getPos();										// accesseur en lecture de la position
	void setPos(int posX, int posY);							// accesseur en ecriture de la position
	bool getColor();											// accesseur en lecture de la couleur
	void setColor(bool color);									// accesseur en ecriture de la position
	bool getRoyalty();											// accesseur en lecture du type de pion
	void setRoyalty();											// accesseur en ecriture du type de pion
	bool getIsNull();											// accesseur en lecture du type de pion
	void setIsNull(bool _isNull);								// accesseur en ecriture du type de pion
	void deplacement(int dir, vector<vector<checker>> damier);	// méthode de déplacement du pion : 1 en haut à droite, 2 en bas à droite, 3 en bas à gauche, 4 en haut à gauche


	checker();													// constructeur sans argument (ne sert normalement à rien)
	checker(int _posX, int _posY, bool _color, bool _isNull);	// constructeur avec arguments

	~checker();													// destructeur
};