/*
 5주차 lab3
 #1
 */

#include <iostream>
#include "OneDPattern.h"
using namespace std;

int main() {
	OneDPattern odp(5);
	char p1[6] = "#@$*%";
	odp.Fill(p1);
	odp.draw();

	odp.changeWidth(10);
	char p2[10];
	cin >> p2;
	odp.Fill(p2);
	odp.draw();
}
