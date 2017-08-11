#pragma once
#include <fstream>
#include <iostream>
#include "Player.hpp"
#include "DEFINITIONS.hpp"

using namespace std;
namespace Sonar {

	Player::Player() {
		this->setName("Unknown");
		this->setPoints(0);
		this->setGamemode(false);
	}
	Player::Player(string name, int points) {
		this->setName(name);
		this->setPoints(points);
		this->setGamemode(false);
	}


	void Player::lesePoints() {
		int punkte = 0;
		ifstream file(POINTS_FILEPATH);
		file >> punkte;
		file.close();
		this->setPoints(punkte);
	}
	void Player::schreibePoints(int punkte) {

		fstream f;
		f.open(POINTS_FILEPATH, ios::out);
		int neu = this->getPoints();
		neu += punkte;
		this->setPoints(neu);
		f << neu << endl;
		f.close();
		
	}

}