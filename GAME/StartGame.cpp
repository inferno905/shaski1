#include "StartGame.h"
void StartGame()
{
  	pair<int, int> kl1A(510, 894);
	pair<int, int> kl1C(734, 894);
	pair<int, int> kl1E(960, 894);
	pair<int, int> kl1G(1186, 894);

	pair<int, int> kl2B(625, 782);
	pair<int, int> kl2D(849, 782);
	pair<int, int> kl2F(1075, 782);
	pair<int, int> kl2H(1300, 782);

	pair<int, int> kl3A(510, 670);
	pair<int, int> kl3C(734, 670);
	pair<int, int> kl3E(960, 670);
	pair<int, int> kl3G(1186, 670);

	pair<int, int> kl4B(625, 560);
	pair<int, int> kl4D(849, 560);
	pair<int, int> kl4F(1075, 560);
	pair<int, int> kl4H(1300, 560);

	pair<int, int> kl5A(510, 445);
	pair<int, int> kl5C(734, 445);
	pair<int, int> kl5E(960, 445);
	pair<int, int> kl5G(1186, 445);

	pair<int, int> kl6B(625, 330);
	pair<int, int> kl6D(849, 330);
	pair<int, int> kl6F(1075, 330);
	pair<int, int> kl6H(1300, 330);

	pair<int, int> kl7A(510, 220);
	pair<int, int> kl7C(734, 220);
	pair<int, int> kl7E(960, 220);
	pair<int, int> kl7G(1185, 220);

	pair<int, int> kl8B(625, 105);
	pair<int, int> kl8D(849, 105);
	pair<int, int> kl8F(1075, 105);
	pair<int, int> kl8H(1300, 105);

	pair<int, int> Doska[8][4]  {
	{kl1A,kl1C,kl1E,kl1G},{kl2B,kl2D,kl2F,kl2H},
	{kl3A,kl3C,kl3E,kl3G},{kl4B,kl4D,kl4F,kl4H},
	{kl5A,kl5C,kl5E,kl5G},{kl6B,kl6D,kl6F,kl6H},
	{kl7A,kl7C,kl7E,kl7G},{kl8B,kl8D,kl8F,kl8H}
	};
	int Occupied[8][4]{
	{1,1,1,1},{1,1,1,1},
	{1,1,1,1},{0,0,0,0},
	{0,0,0,0},{2,2,2,2},
	{2,2,2,2},{2,2,2,2}
	};
	
RenderWindow window(VideoMode(1920, 1080), "New RTY", Style::Fullscreen);
window.setFramerateLimit(60);
	
Texture glav, pole;
glav.loadFromFile("shashki2.png");
pole.loadFromFile("Pole1.jpg");
Sprite screen, polyana;
screen.setTexture(glav);
screen.setPosition(22, 0);
polyana.setTexture(pole);
polyana.setPosition(419, 0);

Texture negrov, texture_white;
negrov.loadFromFile("Black1.png");
texture_white.loadFromFile("White1.png");
Sprite white_s, black_s;
white_s.setTexture(texture_white);
black_s.setTexture(negrov);

Text text_exit_menu, text_start, exit_main_menu, text_inmenu_go, text_inmenu_restart, text_inmenu_exit;
Font font;
font.loadFromFile("NK123.ttf");
text_exit_menu.setFont(font);
text_exit_menu.setString("Exit");
text_exit_menu.setFillColor(Color::White);
text_exit_menu.setCharacterSize(30);
text_exit_menu.setPosition(1845, 0);
text_start.setFont(font);
text_start.setString("START GAME");
text_start.setFillColor(Color::White);
text_start.setCharacterSize(60);
text_start.setPosition(115, 810);
exit_main_menu.setFont(font);
exit_main_menu.setString("EXIT");
exit_main_menu.setFillColor(Color::White);
exit_main_menu.setCharacterSize(60);
exit_main_menu.setPosition(230, 960);
text_inmenu_go.setFont(font);
text_inmenu_go.setString("Continue");
text_inmenu_go.setFillColor(Color::Black);
text_inmenu_go.setCharacterSize(50);
text_inmenu_go.setPosition(860, 265);
text_inmenu_restart.setFont(font);
text_inmenu_restart.setString("Restart");
text_inmenu_restart.setFillColor(Color::Black);
text_inmenu_restart.setCharacterSize(50);
text_inmenu_restart.setPosition(875, 355);
text_inmenu_exit.setFont(font);
text_inmenu_exit.setString("Exit");
text_inmenu_exit.setFillColor(Color::Black);
text_inmenu_exit.setCharacterSize(50);
text_inmenu_exit.setPosition(920, 746);

RectangleShape mini_exit(Vector2f(100.f, 40.f));
mini_exit.setFillColor(Color::Red);
mini_exit.setPosition(1820, 0);
RectangleShape start(Vector2f(400.f, 100.f));
start.setFillColor(Color::Blue);
start.setPosition(100, 800);
RectangleShape exit(Vector2f(400.f, 100.f));
exit.setFillColor(Color::Red);
exit.setPosition(100, 950);
RectangleShape menu(Vector2f(400.f, 600.f));
menu.setFillColor(Color{ 0x373737FF });
menu.setPosition(760, 240);

RectangleShape inmenu_go(Vector2f(360.f, 70.f));
inmenu_go.setFillColor(Color::White);
inmenu_go.setPosition(780, 265);

RectangleShape inmenu_restart(Vector2f(360.f, 70.f));
inmenu_restart.setFillColor(Color::White);
inmenu_restart.setPosition(780, 355);

RectangleShape inmenu_exit(Vector2f(360.f, 70.f));
inmenu_exit.setFillColor(Color::Red);
inmenu_exit.setPosition(780, 745);

bool start_menu = false;
bool start_game1 = false;
	while (window.isOpen())
		{
		Event event;
		        while (window.pollEvent(event))
			{
				switch (event.type) 
				{
	                    case Event::Closed:
		                     window.close();
		                     break;
						case Event::KeyPressed:
							if (event.key.scancode == Keyboard::Scan::Escape)
							{
								if (start_menu)
									start_menu = false;
								else
									start_menu = true;
							}
							break;
						case Event::MouseButtonPressed:
							Vector2i mousePos = Mouse::getPosition(window);
							Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
							if (start_game1)
							{
								if (mini_exit.getGlobalBounds().contains(mousePosF))
								{
									window.close();
									break;
								}
							}
							else
							{
								if (start.getGlobalBounds().contains(mousePosF))
								{
									start_game1 = true;
									break;
								}
								if (exit.getGlobalBounds().contains(mousePosF))
								{
									window.close();
									break;
								}
							}
				}
			}
		window.clear(Color::Black);

		if (!start_game1) {
			window.draw(screen);
			window.draw(start);
			window.draw(text_start);
			window.draw(exit);
			window.draw(exit_main_menu);
		}
		else
		{
			window.draw(polyana);

			for (int i = 0; i < 8; i++)
			{
				for (int y = 0; y < 4; y++)
				{
					if (Occupied[i][y] == 1)
					{
						white_s.setPosition(Doska[i][y].first, Doska[i][y].second);
						window.draw(white_s);
					}
					else if (Occupied[i][y] == 2)
					{
						black_s.setPosition(Doska[i][y].first, Doska[i][y].second);
						window.draw(black_s);
					}
				}
			}
			if (start_menu) {
				window.draw(menu);
				window.draw(inmenu_go);
				window.draw(inmenu_exit);
				window.draw(inmenu_restart);
				window.draw(text_inmenu_go);
				window.draw(text_inmenu_restart);
				window.draw(text_inmenu_exit);
			}
			window.draw(mini_exit);
			window.draw(text_exit_menu);
		}

		window.display();
		}
}
