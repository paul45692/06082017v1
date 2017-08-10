#pragma once 
#include "ScoreState.hpp"
#include "Game.hpp"
#include "DEFINITIONS.hpp"

#include "MainMenuState.hpp"
// Diese Klasse wird später den HighScore abbilden

namespace Sonar {


	ScoreState::ScoreState(GameDataRef data) : _data(data) {

	 }
	

	void ScoreState::Init(){
		
		this->_data->assets.LoadTexture("Home Button", HOME_BUTTON);
		this->_homeButton.setTexture(this->_data->assets.GetTexture("Home Button"));
		this->_homeButton.setPosition((this->_data->window.getSize().x / 2) - (this->_homeButton.getLocalBounds().width / 2), (this->_data->window.getSize().y / 3 * 2) - (this->_homeButton.getLocalBounds().height / 2));

	}

	void ScoreState::HandleInput() {
		sf::Event event;

		while (this->_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				this->_data->window.close();
			}

			

			if (this->_data->input.IsSpriteClicked(this->_homeButton, sf::Mouse::Left, this->_data->window))
			{
				// Switch To Main Menu State By Replacing The Game Over State
				this->_data->machine.AddState(StateRef(new MainMenuState(_data)), true);

			}
		}



	}

	void ScoreState::Draw(float dt) {

	}

	void ScoreState::Update(float dt) {

		this->_data->window.clear(sf::Color::Green);

		this->_data->window.draw(this->_retryButton);
		this->_data->window.draw(this->_homeButton);

		this->_data->window.display();
	}
}
