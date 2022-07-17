#include <iostream>
#include <math.h>
#include <iomanip>
#include <tchar.h>


int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	float cateto1, cateto2, hipotenusa;

	std::cout << "Cálculo da hipotenusa de um triângulo retângulo" << std::endl;

	std::cout << std::fixed << std::setprecision(2);

	std::cout << "\nDigite o primeiro cateto: ";
	std::cin >> cateto1;
	std::cout << "\nDigite o segundo cateto: ";
	std::cin >> cateto2;

	hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

	std::cout << "\nA hipotenusa é: " << hipotenusa;

	std::cout << "\n\n";

	system("PAUSE");
	return 0;
}