#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int num, i, mA{ 0 }, mB{ 0 }, mC{ 0 }, nM{ 0 };

	std::cout << "Digite um número limite: ";
	std::cin >> num;

	for (i = 0; i < num; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			std::cout << "\nO número " << i << " É multiplo de 3 e 5";
			mA += 1;
		}

		else if (i % 3 == 0 && i % 5 != 0)
		{
			std::cout << "\nO número " << i << " É multiplo de 3";
			mB += 1;
		}

		else if (i % 3 != 0 && i % 5 == 0)
		{
			std::cout << "\nO número " << i << " É multiplo de 5";
			mC += 1;
		}

		else if (i % 3 != 0 && i % 5 != 0)
		{
			nM += 1;
		}
	}

	std::cout << std::endl;

	std::cout << "\n***************RESULTADOS***************";
	std::cout << "\nIntervalo digitado: " << num;
	std::cout << "\nQuantidade de Multiplos de 3: " << mB;
	std::cout << "\nQuantidade de Multiplos de 5: " << mC;
	std::cout << "\nQuantidade de Multiplos de 3 e 5: " << mA;
	std::cout << "\nQuantidade de Não Multiplos: " << nM;
	std::cout << "\n****************************************\n";

	std::cout << std::endl;
	system("PAUSE");
	return 0;

}