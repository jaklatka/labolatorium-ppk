#define WERSJA 2
#if (WERSJA == 1)

#include <iostream>
#include <math.h>

int main(void)
{
	double x, a, b, c, f, g, h;

	const double D = 2.5;
	const double pi = 3.1415;
	const double e = 2.7182;
	const double E = 5 * pi * sqrt(5);

	std::cout << "Podaj zmienna a: ";
	std::cin >> a;
	std::cout << "Podaj zmienna b: ";
	std::cin >> b;
	std::cout << "Podaj zmienna c: ";
	std::cin >> c;
	std::cout << "Podaj zmienna x: ";
	std::cin >> x;

	f = E + D * pow((2 * (b / (5 + a) * x) + log(c)), (e + x / 2));
	g = E * (abs(a * (x * x * x) - D)) / (b * x * x + c * x);
	h = abs((a * (sin(E * x))) + (b * cos(E * x))) / (D * (c + 5));

	std::cout << "Wynik dzialania funkcji f: " << f << std::endl;
	std::cout << "Wynik dzialania funkcji g: " << g << std::endl;
	std::cout << "Wynik dzialania funckji h: " << h << std::endl;
}
#endif

#if (WERSJA == 2)
#include <iostream>

int main(void)
{
	unsigned char znak;
	unsigned int liczba;

	std::cout << "Podaj znak: ";
	std::cin >> znak;
	std::cout << "Podaj liczbe calkowita: ";
	std::cin >> liczba;

	unsigned char wyswietlanyznak = char((int)znak + liczba);

	std::cout << znak << " (" << (int)znak << ")" << " => " << wyswietlanyznak << " (" << (int)wyswietlanyznak << ")";
	return 0;
}
#endif


