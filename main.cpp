// main.cpp�: d�finit le point d'entr�e pour l'application console.
//
#include "gtest/gtest.h"
#include "Checker.h"


vector<vector<checker>> initialisation() {
	vector<vector<checker>> _damier; // Cet objet sera rempli selon les r�gles classiques du jeu de dames
	for (int i=0; i<10; i++) {
		vector<checker> ligne; // On remplit ligne par ligne
		for (int j=0; j<10; j++) {
			if((i+j)%2 == 0) 
			{
				if(i<4)			// On place les pions blancs
				{
					ligne.push_back(checker(i,j,true,false));
				}

				else
				{
					if(i>5)		// On place les pions noirs
					{
						ligne.push_back(checker(i,j,false,false));
					}

					else		// On remplit le centre de vide
					{
						ligne.push_back(checker(i,j,false,true));
					}
				}
			}

			else				// On remplit le reste de vide
			{
				ligne.push_back(checker(i,j,false,true));
			}
		}
		_damier.push_back(ligne);
	}
	return _damier;
}

void affichage(vector<vector<checker>> damier) {
	cout<<endl; // S�pare la grille des r�sultats des tests
	for(int i=0; i < 10; i++) {
		cout<<"|"; // Ajoute la colonne de gauche
		for(int j=0; j < 10; j++) {
			cout<<((damier[9-i][j].getIsNull() == true)?" ":((damier[9-i][j].getColor() == true)?"b":"n"))<<"|"; // Affiche les pions par colonne
		}
		cout<<endl;
	}
}

TEST(initialisation, PlaceBlanc) { // V�rifie si l'initialisation place bien un pion blanc en [0,0]
	EXPECT_EQ(true, initialisation()[0][0].getColor());
}
TEST(initialisation, PlaceNoir) { // V�rifie si l'initialisation place bien un pion noir en [9,9]
	EXPECT_EQ(false, initialisation()[9][9].getColor());
}
TEST(initialisation, PlaceNull) { // V�rifie si l'initialisation place bien des pions Null en [5,5], en [0,1], et en [8,9]
	EXPECT_EQ(true, initialisation()[5][5].getIsNull());
	EXPECT_EQ(true, initialisation()[0][1].getIsNull());
	EXPECT_EQ(true, initialisation()[8][9].getIsNull());
}

int main(int argc, char*argv[]) {
	// Permet d'ex�cuter les tests Google Test
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();

	vector<vector<checker>> damier; // Grille du jeu de dames

	damier = initialisation(); // Remplissage de la grille


	bool gameIsOVER = false; // Permettra d'arr�ter le jeu

	affichage(damier);

	while(!gameIsOVER) { // Ex�cution du jeu de dame � deux joueurs humains
		int _posX; 
		int _posY;
		// S�lection du pion qui sera jou�
		cout << endl << "Position X du pion choisi : "; 
		cin >> _posX;
		cout << endl << "Position Y du pion choisi : ";
		cin >> _posY;

		// D�placement du pion


		gameIsOVER = true;

	}
}
