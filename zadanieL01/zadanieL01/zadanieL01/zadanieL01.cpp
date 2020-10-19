#define WERSJA 2
#if (WERSJA == 1)

#include <iostream>
#include <cmath>
void main(void)
{
	double a, b, c;															// Tu odbywa się deklaracja zmiennych a, b, c typu double.
	std::cout << "Podaj a: ";												// Tutaj wyświetlamy w konsoli tekst "Podaj a:"
	std::cin >> a;															// Tutaj zapisujemy wartość naszego "a" do zmiennej a
	std::cout << "Podaj b: ";												// Tutaj wyświetlamy w konsoli tekst "Podaj b:"
	std::cin >> b;															// Tutaj zapisujemy wartość naszego "b" do zmiennej b
	c = (a + b) / 2;														// Tutaj obliczamy wartość (a+b)/2 i zapisujemy ją do zmiennej c
	std::cout << "Wynik to: " << c << std::endl;							// Tutaj wyświetlamy w konsoli tekst "Wynik to:" a następnie wyświetlamy wartość c
}
#endif

																			// W powyższym kodzie zmieniłem typ zmiennych z int na double, by zmienne przyjmowały i operowały liczbami zmiennoprzecinkowymi, 
																			// a nie jak to w przypadku int - całkowitymi. 
																			// Dodałem też std::, wszędzie tam, gdzie wymagała tego funkcja pochodząca z biblioteki iostream. Można było też rozwiązać ten 
																			// problem zapisując przestrzeń nazw - "using namespace std;".

#if (WERSJA == 2)

#include <iostream>
#include <cmath>
void main(void)
{
	double d, f, g, h;
	std::cout << "Podaj wartosc zmiennej d: ";
	std::cin >> d;
	std::cout << "Podaj wartosc zmiennej f: ";
	std::cin >> f;
	g = (d + f) / (d - f);
	h = (pow(d, 2)) + (f / g);
	std::cout << "Wynik g: " << g << ", wynik h: " << h << std::endl;		// W przypadku testu d=1, f=1 w h występuje 1, a powinien błąd (dzielenie przez 0), lecz podejrzewam, że wynika to z 
}																			// kompilatora oraz IDE.
#endif