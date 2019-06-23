#include "Menu.h"
#include <string> 
#include <sstream>




Menu::Menu(float width, float height)
{
	if (!font.loadFromFile("Fonts/bebas.ttf"))
	{
		////
	}
	menu[0].setFont(font);
	menu[0].setCharacterSize(50);
	menu[0].setFillColor(Color::Red);
	menu[0].setString("Play");
	menu[0].setPosition(Vector2f((width / 2)-50, height / (3+1)*1));

	menu[1].setFont(font);
	menu[1].setCharacterSize(50);
	menu[1].setFillColor(Color::White);
	menu[1].setString("Options");
	menu[1].setPosition(Vector2f((width / 2)-50, height /(3+1)*2 ));

	menu[2].setFont(font);
	menu[2].setCharacterSize(50);
	menu[2].setFillColor(Color::White);
	menu[2].setString("Exit");
	menu[2].setPosition(Vector2f((width / 2)-50, height / (3+1)*3));

	menu[3].setFont(font);
	menu[3].setCharacterSize(35);
	menu[3].setFillColor(Color::White);
	menu[3].setString("Score : ");
	menu[3].setPosition(Vector2f((width / 2) - 50, 40.f));


	selectedItemIndex = 0;
}


Menu::~Menu()
{
}

void Menu::draw(RenderWindow &window)
{
	for (int i = 0; i < 3; i++)
	{
		window.draw(menu[i]);
	}
}

void Menu::MoveUp()
{
	if (selectedItemIndex - 1 >= 0)
	{
		menu[selectedItemIndex].setFillColor(Color::White);
		selectedItemIndex--;
		menu[selectedItemIndex].setFillColor(Color::Red);
	}
}

void Menu::MoveDown()
{
	if (selectedItemIndex + 1 < 3)
	{
		menu[selectedItemIndex].setFillColor(Color::White);
		selectedItemIndex++;
		menu[selectedItemIndex].setFillColor(Color::Red);
	}
}

void Menu::drawScore(RenderWindow & window,int score)
{
	stringstream ss;
	ss << score;
	string str = "Score: " + ss.str();

	menu[3].setString(str);
	window.draw(menu[3]);
}
