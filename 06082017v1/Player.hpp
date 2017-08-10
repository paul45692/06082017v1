#pragma once
#include <string>
namespace Sonar {

	class Player {
	private:
		std::string Name;
		int Points;
		bool Gamemode;
	public:
		Player();
		Player(std::string name, int points);
		~Player() {};

		void lesePoints(std::string filename);
		void schreibePoints(int punkte);
		inline  const std::string &getName() {
			return this->Name;}

		inline void setName(std::string name) {
			this->Name = name;
		}
		inline int const getPoints() {
			return this->Points;
		}

		inline void setPoints(int p) {
			this->Points = p;
		}

		inline bool &const getGamemode() {
			return this->Gamemode;
		}

		inline void setGamemode(bool gm) {
			this->Gamemode = gm;
		}

	};
}
