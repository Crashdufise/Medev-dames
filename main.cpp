// main.cpp : définit le point d'entrée pour l'application console.
//
#include "gtest/gtest.h"
#include "Checker.h"


vector<vector<checker>> initialisation() {
	vector<vector<checker>> _damier;
	for (int i=0; i<10; i++) {
		vector<checker> ligne;
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


TEST(initialisation, PlaceAuxBonsEndroits) {
	EXPECT_EQ(true, initialisation()[0][0].getColor());
}

int main(int argc, char*argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();

	vector<vector<checker>> damier;

	damier = initialisation();


	bool gameIsNOTOVER = true;

	while(gameIsNOTOVER) {
		gameIsNOTOVER = false;

	}
}
