#include "..\includes\game_logic.h"

#include "..\includes\field.h"
#include "..\includes\snake.h"
#include "..\includes\keyboard_controller.h"
#include <thread>
#include <iostream>
#include <cstdlib>

void GameLogic::game() {
	size_t h, w;
	std::cout << "Enter field height and width: ";
	std::cin >> h >> w;

	Field field = Field(h, w);
	Snake snake = Snake(field);
	KeyboardController keyboard_controller;

	std::thread listener([&keyboard_controller]() {
		keyboard_controller.key_listener(); });

	while (true) {
		snake.print_snake();
		snake.move_snake(keyboard_controller.current_direction());
		std::this_thread::sleep_for(std::chrono::milliseconds(500));
		system("cls");
	}

	if (listener.joinable())
		listener.join();

	return;
};
