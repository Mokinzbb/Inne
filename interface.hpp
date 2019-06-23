#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

/* Funkcje obliczeniowa, zapisu oraz wykresow, mozna dac tutaj w klasie, po czym w mainie bedzie tylko obiekt i wywolana metoda.
Miejsce zaznaczylem komentarzem gdzie mozna ja przywolac*/



class Interface
{
public:
    //atrybuty
    float predkosc_paczatkowa;
    float kat_w_stopniach;
    float masa_obiektu;
    float przyspieszenie_grawitacyjne;
    float predkosc_wiatru_x;
    float predkosc_wiatru_y;
    float wspolczynnik_do_oporu_powietrza = -999;

    //metody
    pokaz()
    {
        int a, b;

        std::cout << "SYMULATOR BRYLY SZTYWNEJ W CENTRALNYM POU GRAWITACYJNYM" << std::endl;

        std::cout << "1 - Ropocznij symulacje" << std::endl;
        std::cout << "2 - Wyjdz\n"
                  << std::endl;

        std::cin >> a;

        switch (a)
        {
        case 1:

            system("cls");

            std::cout << "PODAJ DANE" << std::endl;
            std::cout << "Masa obiektu: ";
            std::cin >> masa_obiektu;

            if (masa_obiektu <= 0)
            {

                do
                {
                    std::cout << "Wprowadz mase obiektu jeszcze raz ((nie moze byc mniejsze lub rowne 0): ";
                    std::cin >> masa_obiektu;
                } while (masa_obiektu <= 0);
            }

            std::cout << "Predkosc poczatkowa: ";
            std::cin >> predkosc_paczatkowa;

            if (predkosc_paczatkowa < 0)
            {

                do
                {
                    std::cout << "Wprowadz predkosc poczatkowa jeszcze raz (nie moze byc mniejsze niz 0): ";
                    std::cin >> predkosc_paczatkowa;
                } while (predkosc_paczatkowa < 0);
            }

            std::cout << "Kat rzutu w stopniach: ";
            std::cin >> kat_w_stopniach;

            if (kat_w_stopniach < 0)
            {

                do
                {
                    std::cout << "Wprowadz kat rzutu jeszcze raz (nie moze byc mniejsza niz 0): ";
                    std::cin >> kat_w_stopniach;
                } while (kat_w_stopniach < 0);
            }

            std::cout << "Przyspieszenie grawitacyjne (dla Ziemi g = 9.81): ";
            std::cin >> przyspieszenie_grawitacyjne;

            if (przyspieszenie_grawitacyjne < 0)
            {

                do
                {
                    std::cout << "Wprowadz przyspieszenie jeszcze raz (nie moze byc mniejsze niz 0): ";
                    std::cin >> przyspieszenie_grawitacyjne;
                } while (przyspieszenie_grawitacyjne < 0);
            }

            std::cout << "Predkosc wiatru w osi x: ";
            std::cin >> predkosc_wiatru_x;

            if (predkosc_wiatru_x < 0)
            {

                do
                {
                    std::cout << "Wprowadz predkosc jeszcze raz (nie moze byc mniejsze niz 0): ";
                    std::cin >> predkosc_wiatru_x;
                } while (predkosc_wiatru_x < 0);
            }

            std::cout << "Predkosc wiatru w osi y: ";
            std::cin >> predkosc_wiatru_y;

            if (predkosc_wiatru_y < 0)
            {

                do
                {
                    std::cout << "Wprowadz predkosc jeszcze raz (nie moze byc mniejsze niz 0): ";
                    std::cin >> predkosc_wiatru_y;
                } while (predkosc_wiatru_y < 0);
            }

            system("cls");

            std::cout << "Czy chcesz zmienic wspolczynnik oporu powietrza?\n1 - TAK\n2 - NIE" << std::endl;
            std::cin >> b;

            system("cls");

            switch (b)
            {
            case 1:

                std::cout << "Wspolczynnik oporu powietrza: ";
                std::cin >> wspolczynnik_do_oporu_powietrza;

                break;

            case 2:

                break;
            }
            
            
        // TUTAJ MOZNA PRZYWOLAC FUNKCE OBLICZAJACA, ZAPISU ORAZ WYKRESOW
            
            
            break;
        case 2:

            return 0;
            break;

        default:

            std::cout << "NIE ZNALEZIONO TAKIEJ OPCJI" << std::endl;
            pokaz();

            break;
        }
    }
};
