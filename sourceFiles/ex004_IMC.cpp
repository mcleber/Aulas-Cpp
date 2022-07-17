#include <iostream>
#include <math.h> 
#include <iomanip>
#include <tchar.h>


int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	float altura, peso, imc;
	int continua;
	bool calculo{ true };

	while (calculo)
	{
		system("CLS");
		std::cout << "----------------------------------------------------------------------------" << std::endl;
		std::cout << "C�lculo do �ndice de massa corporal - IMC." << std::endl;
		std::cout << "Para digitar a altura e o peso, utilize ponto (.) ao inv�s da v�rgula (,)." << std::endl;
		std::cout << "----------------------------------------------------------------------------" << std::endl;

		std::cout << "\nDigite sua altura (m): ";
		std::cin >> altura;
		std::cout << "Digite seu peso (kg): ";
		std::cin >> peso;

		imc = peso / pow(altura, 2);

		std::cout << std::fixed << std::setprecision(1);

		std::cout << "\nSeu IMC �: " << imc << "\n\n";

		if (imc < 18.5)
		{
			std::cout << "Voc� est� abaixo do peso." << std::endl;
		}

		else if (imc >= 18.5 && imc < 24.9)
		{
			std::cout << "Voc� est� no peso normal." << std::endl;
		}

		else if (imc >= 24.9 && imc < 29.9)
		{
			std::cout << "Voc� est� com sobrepeso." << std::endl;
		}

		else if (imc >= 29.9 && imc < 34.9)
		{
			std::cout << "Voc� est� com obesidade grau 1." << std::endl;
		}

		else if (imc >= 34.9 && imc < 39.9)
		{
			std::cout << "Voc� est� com obesidade grau 2." << std::endl;
		}

		else
		{
			std::cout << "Voc� est� com obesidade grau 3." << std::endl;
		}

		/* Loop para verificar se deseja fazer novo c�lculo. */

		std::cout << "\nDeseja calcular novamente? (Digite 0 para N�o e 1 para Sim): ";
		std::cin >> continua;

		if ((continua == 0) || (continua == 1))
		{
			calculo = (continua == 1) ? true : false;
		}
		else
		{
			do
			{
				system("CLS");
				std::cout << "\nOp��o inv�lida.";
				std::cout << "\nDeseja calcular novamente? (Digite 0 para N�o e 1 para Sim) ";
				std::cin >> continua;

			} while ((continua != 1) && (continua != 0));

			calculo = (continua == 1) ? true : false;

		}

	}

	std::cout << std::endl;
	system("PAUSE");
	return 0;

}
