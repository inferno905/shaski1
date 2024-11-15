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
	pair<int, int> Occupied[6][4]  {
	{kl1A,kl1C,kl1E,kl1G},{kl2B,kl2D,kl2F,kl2H},
	{kl3A,kl3C,kl3E,kl3G},{kl6B,kl6D,kl6F,kl6H},
	{kl7A,kl7C,kl7E,kl7G},{kl8B,kl8D,kl8F,kl8H}
	};
}
