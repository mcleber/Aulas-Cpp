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

	std::cout << "\nSua parede tem a dimensão de " << largura << " x " << altura << " e sua área é de " << area << "m²." << "\n";

	std::cout << "\nDigite o rendimento (m²) da tinta por litro (vide lata): ";
	std::cin >> rendimento;

	std::cout << "\nDigite a quantidade de demãos: ";
	std::cin >> demaos;

	quantidadeTinta = (area / rendimento) * demaos;

	std::cout << "\nSerão necessários " << quantidadeTinta << " litros de tinta." << "\n";

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}