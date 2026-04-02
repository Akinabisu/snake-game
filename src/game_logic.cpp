#include "..\includes\game_logic.h"

#include "..\includes\field.h"
#include "..\includes\snake.h"
#include "..\includes\keyboard_controller.h"
#include <thread>
#include <iostream>


void GameLogic::game() {
	size_t h, w;
	std::cout << "Enter field height and width: ";
	std::cin >> h >> w;

	Field _field = Field(h, w);
	Snake _snake = Snake(_field);
	KeyboardController _keyboard_controller;

	std::thread listener([&_keyboard_controller]() {
		_keyboard_controller.key_listener(); });

	//print_field


	if (listener.joinable())
		listener.join();
};
