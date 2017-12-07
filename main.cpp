// main.cpp : définit le point d'entrée pour l'application console.
//
#include "gtest/gtest.h"

int factorielle(int n) {
	if (n==0) {
		return 1;
	}
	else {
		return n*factorielle(n-1);
	}
}


TEST(factorielle_test, GereLeZero) {
	EXPECT_EQ(1,factorielle(0));
}


TEST(factorielle_test, GereLesPositifs) {
	EXPECT_EQ(2,factorielle(2));
	EXPECT_EQ(6,factorielle(3));
	EXPECT_EQ(120,factorielle(5));

}
