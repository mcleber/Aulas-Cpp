#include <iostream>
#include <iomanip>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	float largura, altura, area, rendimento, quantidadeTinta, demaos;

	std::cout << "Calculando a quantidade tinta para pintar uma parede" << "\n";
	std::cout << "----------------------------------------------------" << "\n\n";
	
	std::cout << "Digite a largura da parede: ";
	std::cin >> largura;
	std::cout << "\nDigite a altura da parede: ";
	std::cin >> altura;

	area = largura * altura;

	std::cout << std::fixed << std::setprecision(2);

	std::cout << "\nSua parede tem a dimens�o de " << largura << " x " << altura << " e sua �rea � de " << area << "m�." << "\n";

	std::cout << "\nDigite o rendimento (m�) da tinta por litro (vide lata): ";
	std::cin >> rendimento;

	std::cout << "\nDigite a quantidade de dem�os: ";
	std::cin >> demaos;

	quantidadeTinta = (area / rendimento) * demaos;

	std::cout << "\nSer�o necess�rios " << quantidadeTinta << " litros de tinta." << "\n";

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}