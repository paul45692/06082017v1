#pragma once
#include "State.hpp"
#include <map>
#include <SFML\Graphics.hpp>
#include "Game.hpp"

namespace Sonar {
	
	class ScoreState {

	public:
		ScoreState(GameDataRef _data);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);



	private:
		std::map <std::string, float> _Points;
		GameDataRef _data;

		sf::Sprite _retryButton;
		sf::Sprite _homeButton;
	};


}