// main.cpp : définit le point d'entrée pour l'application console.
//
#include "gtest/gtest.h"
#include "Checker.h"

int factorielle(int n) {
	if (n==0) {
		return 1;
	}
	else {
		return n*factorielle(n-1);
	}
}

int main() {

	vector<vector<checker>> damier;

	initialisation(&damier);

	bool gameIsNOTOVER = true;

	while(gameIsNOTOVER) {
		// c'est très la boucle de jeu

	}

}

void initialisation(vector<vector<checker>>* damier) {
	for (int i=0; i<10; i++) {
		vector<checker> ligne;
		for (int j=0; j<10; j++) {
			if((i+j)%2 == 0) {
				if(i<4){
					ligne.push_back(checker(i,j,true));
				}
				if(i>5){
					ligne.push_back(checker(i,j,false));
				}
			}
			else {
				ligne.push_back(NULL);
			}


		}

}

TEST(initialisation, PlaceAuxBonsEndroits) {
	EXPECT_EQ(true, damier[0][0].);
}


TEST(factorielle_test, GereLesPositifs) {
	EXPECT_EQ(2,factorielle(2));
	EXPECT_EQ(6,factorielle(3));
	EXPECT_EQ(120,factorielle(5));

}
