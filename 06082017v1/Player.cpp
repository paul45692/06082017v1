#pragma once

#include "Player.hpp"

namespace Sonar {

	Player::Player() {
		this->setName("Unknown");
		this->setPoints(0);
		this->setGamemode(false);
	}
	Player::Player(std::string name, int points) {
		this->setName(name);
		this->setPoints(points);
		this->setGamemode(false);
	}


	void Player::lesePoints(std::string filename) {
	// Diese Methode bereitet das Lesen aus einer textdatei vor;

	}
	void Player::schreibePoints(int punkte) {
		int neu = this->getPoints();
		neu += punkte;
		this->setPoints(neu);
		// bei Veränderungen schreibt diese methode die Punkte neu.
	}

}