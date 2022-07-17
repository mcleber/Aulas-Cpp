/*
 CONVERSOR DE TEMPERATURA
 Fórmulas:
 °F = (°C * 9/5) + 32
 °C = (°F − 32) * 5/9


 Cleber Moretti
 https://github.com/mcleber

 v.0.1
 17/06/2022
 */

#include <iostream>
#include <tchar.h>
#include <iomanip>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int continuarConversao;
	char opcao;
	float celsius{ 0.0f }, fahrenheit{ 0.0f };
	bool verificacao{ true };

	while (verificacao)
	{

		system("CLS");
		std::cout << "----------- OPÇÔES -----------" << "\n[ c ] Celsius para Fahrenheit\n" << "[ f ] Fahrenheit para Celsius\n" << "[ 0 ] Sair\n";
		std::cout << "\nEscolha a conversão: ";
		std::cin >> opcao;

		std::cout << std::fixed << std::setprecision(2);

		if ((opcao == 'c') || (opcao == 'C'))
		{
			std::cout << "\nDigite a temperatura em graus Celsius (°C): ";
			std::cin >> celsius;

			fahrenheit = ((celsius * 9) / 5) + 32;

			std::cout << "A temperatura de " << celsius << "°C corresponde a " << fahrenheit << "°F." << std::endl;
		}

		else if ((opcao == 'f') || (opcao == 'F'))
		{
			std::cout << "\nDigite a temperatura em graus Fahrenheit (°F): ";
			std::cin >> fahrenheit;

			celsius = ((fahrenheit - 32) * 5) / 9;

			std::cout << "A temperatura de " << fahrenheit << "°F corresponde a " << celsius << "°C." << std::endl;
		}

		else
		{
			std::cout << "\nOpção inválida.";
		}

		std::cout << "\nDeseja converter novamente? (Digite 0 para Não e 1 para Sim): ";
		std::cin >> continuarConversao;

		if ((continuarConversao == 0) || (continuarConversao == 1))
		{

			verificacao = (continuarConversao == 1) ? true : false;
		}

		else
		{
			do
			{
				system("CLS");
				std::cout << "\nOpção inválida.";
				std::cout << "\nDeseja converter novamente? (Digite 0 para Não e 1 para Sim): ";
				std::cin >> continuarConversao;

			} while ((continuarConversao != 0) && (continuarConversao != 1));


			verificacao = (continuarConversao == 1) ? true : false;

		}
	}

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}