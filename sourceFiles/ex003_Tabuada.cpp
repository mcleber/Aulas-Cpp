#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	int num;

	std::cout << "TABUADA" << std::endl;
	std::cout << "\nDigite um número: ";
	std::cin >> num;

	std::cout << std::endl;

	for (int i = 1; i <= 10; i++)
	{
		std::cout << num << " x " << i << " = " << num * i << "\n";
	}

	std::cout << std::endl;
	system("PAUSE");
	return 0;
}

/*

#include <iostream>

using namespace std;

int main()
{
	int num, aux;

	do{
		cout << "Tabuada do numero: ";
		cin >> num;

		for(aux=1; aux<=10 ; aux++)
			cout<<num<<" * "<<aux<<" = " << num*aux <<endl;
		cout<<endl;
	}while(num); // enquanto o numero nao for 0 ele repete

	return 0;
}




*/