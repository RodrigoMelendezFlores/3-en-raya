/*
Universidad Católica San Pablo - Departamento de Ciencia de la Computación

------------- 3 en raya ----------------

Curso: Ciencia de la Computación I - CCOMP2-1 - Semestre 2021-2
Profesor: DSc. Manuel Eduardo Loaiza Fernández
Integrantes: 
- Leonardo Alonso Ramirez Quiroz
- Diego Enrique Zegarra Zenteno
- Rodrigo del Piero Meléndez Flores
- Jair Lino Paul Quispe Rodriguez

Arequipa - Perú
*/

#include <iostream>
using namespace std;


int main()
{
    char a1 = '1', a2 = '2', a3 = '3', b1 = '4', b2 = '5', b3 = '6', c1 = '7', c2 = '8', c3 = '9';
    cout << '\n' << "--------------" << '\n';
    cout << " | " << a1 << " | " << a2 << " | " << a3 << " | ";
    cout << '\n' << "--------------" << '\n';
    cout << " | " << b1 << " | " << b2 << " | " << b3 << " | ";
    cout << '\n' << "--------------" << '\n';
    cout << " | " << c1 << " | " << c2 << " | " << c3 << " | ";
    cout << '\n' << "--------------" << '\n';
    char jugador_1;
    char jugador_2;
    bool juego = true;
    bool bucle = true;

    cout << "¡Juguemos 3 en raya!" << endl << "-----------------------" << endl << "REGLAS: " << endl;
    cout << "Si usas tu turno para poner tu caracter en un lugar que ya estaba ocupado por otro, pierdes tu turno, diviértete" << endl << endl << endl << endl;


    while (bucle)
    {
        cout << "Ficha de jugador 1 (X/O): ";
        cin >> jugador_1;
        if (jugador_1 == 'X' || jugador_1 == 'O')
            bucle = false;
    }

    if (jugador_1 == 'X')
    {
        jugador_2 = 'O';
    }
    else if (jugador_1 == 'O')
    {
        jugador_2 = 'X';
    }
    int num = 1;
    cout << "Jugador 1: " << jugador_1 << endl << "Jugador 2 : " << jugador_2 << endl << endl << endl << endl;
    a1 = ' ', a2 = ' ', a3 = ' ', b1 = ' ', b2 = ' ', b3 = ' ', c1 = ' ', c2 = ' ', c3 = ' ';
    while (juego)
    {
        if (num % 2 != 0)
        {
            cout << "Jugador 1 inserte la posicion: ";
            int posicion1;
            cin >> posicion1;
            if (posicion1 == 1)
            {
                if (a1 == ' ')
                    a1 = jugador_1;
                else {
                    cout << "Jugador 1 pierde su turno" << endl;
                }
            }
            else if (posicion1 == 2)
            {
                if (a2 == ' ')
                    a2 = jugador_1;
                else {
                    cout << "Jugador 1 pierde su turno" << endl;
                }
            }
            else if (posicion1 == 3)
            {
                if (a3 == ' ')
                    a3 = jugador_1;
                else {
                    cout << "Jugador 1 pierde su turno" << endl;
                }
            }
            else if (posicion1 == 4)
            {
                if (b1 == ' ')
                    b1 = jugador_1;
                else {
                    cout << "Jugador 1 pierde su turno" << endl;
                }
            }
            else if (posicion1 == 5)
            {
                if (b2 == ' ')
                    b2 = jugador_1;
                else {
                    cout << "Jugador 1 pierde su turno" << endl;
                }
            }
            else if (posicion1 == 6)
            {
                if (b3 == ' ')
                    b3 = jugador_1;
                else {
                    cout << "Jugador 1 pierde su turno" << endl;
                }
            }
            else if (posicion1 == 7)
            {
                if (c1 == ' ')
                    c1 = jugador_1;
                else {
                    cout << "Jugador 1 pierde su turno" << endl;
                }
            }
            else if (posicion1 == 8)
            {
                if (c2 == ' ')
                    c2 = jugador_1;
                else {
                    cout << "Jugador 1 pierde su turno" << endl;
                }
            }
            else if (posicion1 == 9)
            {
                if (c3 == ' ')
                    c3 = jugador_1;
                else {
                    cout << "Jugador 1 pierde su turno" << endl;
                }
            }
        }
        if (num % 2 == 0)
        {
            cout << "Jugador 2 inserte la posicion: ";
            int posicion2;
            cin >> posicion2;
            if (posicion2 == 1)
            {
                if (a1 == ' ')
                    a1 = jugador_2;
                else
                {
                    cout << "Jugador 2 pierde su turno" << endl;
                }
            }
            else if (posicion2 == 2)
            {
                if (a2 == ' ')
                    a2 = jugador_2;
                else
                {
                    cout << "Jugador 2 pierde su turno" << endl;
                }
            }
            else if (posicion2 == 3)
            {
                if (a3 == ' ')
                    a3 = jugador_2;
                else
                {
                    cout << "Jugador 2 pierde su turno" << endl;
                }
            }
            else if (posicion2 == 4)
            {
                if (b1 == ' ')
                    b1 = jugador_2;
                else
                {
                    cout << "Jugador 2 pierde su turno" << endl;
                }
            }
            else if (posicion2 == 5)
            {
                if (b2 == ' ')
                    b2 = jugador_2;
                else
                {
                    cout << "Jugador 2 pierde su turno" << endl;
                }
            }
            else if (posicion2 == 6)
            {
                if (b3 == ' ')
                    b3 = jugador_2;
                else
                {
                    cout << "Jugador 2 pierde su turno" << endl;
                }
            }
            else if (posicion2 == 7)
            {
                if (c1 == ' ')
                    c1 = jugador_2;
                else
                {
                    cout << "Jugador 2 pierde su turno" << endl;
                }
            }
            else if (posicion2 == 8)
            {
                if (c2 == ' ')
                    c2 = jugador_2;
                else
                {
                    cout << "Jugador 2 pierde su turno" << endl;
                }
            }
            else if (posicion2 == 9)
            {
                if (c3 == ' ')
                    c3 = jugador_2;
                else
                {
                    cout << "Jugador 2 pierde su turno" << endl;
                }
            }
        }
        num = num + 1;
        cout << '\n' << "--------------" << '\n';
        cout << " | " << a1 << " | " << a2 << " | " << a3 << " | ";
        cout << '\n' << "--------------" << '\n';
        cout << " | " << b1 << " | " << b2 << " | " << b3 << " | ";
        cout << '\n' << "--------------" << '\n';
        cout << " | " << c1 << " | " << c2 << " | " << c3 << " | ";
        cout << '\n' << "--------------" << '\n';

        if (a1 == jugador_1 && a2 == jugador_1 && a3 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (b1 == jugador_1 && b2 == jugador_1 && b3 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (c1 == jugador_1 && c2 == jugador_1 && c3 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (a1 == jugador_1 && b1 == jugador_1 && c1 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (a2 == jugador_1 && b2 == jugador_1 && c2 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (a3 == jugador_1 && b3 == jugador_1 && c3 == jugador_1)
        {
            cout << "gana jugador uno" << endl;

            break;
        }
        if (a1 == jugador_1 && b2 == jugador_1 && c3 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }
        if (a3 == jugador_1 && b2 == jugador_1 && c1 == jugador_1)
        {
            cout << "gana jugador uno" << endl;
            break;
        }



        if (a1 == jugador_2 && a2 == jugador_2 && a3 == jugador_2)
        {
            cout << "gana jugador dos" << endl;
            break;
        }
        if (b1 == jugador_2 && b2 == jugador_2 && b3 == jugador_2)
        {
            cout << "gana jugador dos" << endl;
            break;
        }
        if (c1 == jugador_2 && c2 == jugador_2 && c3 == jugador_2)
        {
            cout << "gana jugador dos" << endl;
            break;
        }
        if (a1 == jugador_2 && b1 == jugador_2 && c1 == jugador_2)
        {
            cout << "gana jugador dos" << endl;
            break;
        }
        if (a2 == jugador_2 && b2 == jugador_2 && c2 == jugador_2)
        {
            cout << "gana jugador dos" << endl;
            break;
        }
        if (a3 == jugador_2 && b3 == jugador_2 && c3 == jugador_2)
        {
            cout << "gana jugador dos" << endl;

            break;
        }
        if (a1 == jugador_2 && b2 == jugador_2 && c3 == jugador_2)
        {
            cout << "gana jugador dos" << endl;
            break;
        }
        if (a3 == jugador_2 && b2 == jugador_2 && c1 == jugador_2)
        {
            cout << "gana jugador dos" << endl;
            break;
        }
        if (a1 != ' ' && a2 != ' ' && a3 != ' ' && b1 != ' ' && b2 != ' ' && b3 != ' ' && c1 != ' ' && c2 != ' ' && c3 != ' ')
        {
            cout << "EMPATE" << endl;
            break;
        }
    }	
