moficacion 8
#include <iostream>
#include <limits> // Para limpiar el buffer del cin después de leer un tipo incorrecto

using namespace std;

int main() 
{
    int vida = 1;  // Elemento recolectable: vida
    int decision;
    int decisionJuego;  // Nueva variable para manejar las elecciones dentro del bucle interno
    bool regresarAlMenuPrincipal;  // Nueva variable para controlar el regreso al menú principal

    cout << "****** ¡Bienvenido a la historia interactiva! ******" << endl;

    do 
    {
        // Reiniciar la variable para cada iteración del bucle principal
        regresarAlMenuPrincipal = false;

        // Mostrar estado actual
        cout << "-- Menú Principal ;) --" << endl;
        cout << "1. Iniciar juego" << endl;
        cout << "2. Salir" << endl;
        cout << "3. Opción adicional 1" << endl;
        cout << "4. Opción adicional 2" << endl;
        cout << "Selecciona una opción: ";

        // Limpiar el buffer del cin antes de leer la opción
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> decision;

        switch (decision)
        {
            case 1:
                do 
                {
                    // Reiniciar la variable para cada iteración del bucle interno
                    regresarAlMenuPrincipal = false;

                    // Mostrar estado actual
                    cout << "--- Estás en medio de un bosque y no recuerdas nada ---" << endl;
                    cout << "-- Menú de juego --" << endl;
                    cout << "1. Seguir adelante" << endl;
                    cout << "2. Mirar a la luna" << endl;
                    cout << "3. Agarrar la pala que está tirada" << endl;
                    cout << "4. Ponerte a pensar, ¿por qué estás aquí?" << endl;
                    cout << "-- Estado actual --" << endl;
                    cout << "Vida: " << vida << endl;
                    cout << "5. Regresar al Menú Principal" << endl;
                    cout << "Selecciona una opción: ";

                    // Limpiar el buffer del cin antes de leer la opción
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cin >> decisionJuego;  // Utilizamos una nueva variable

                    switch (decisionJuego)
                    {
                        // Código de acciones
                        case 1:
                            // Código para la opción 1
                            // ...
                            break;
                            
                        case 2:
                            // Código para la opción 2
                            // ...
                            break;
                        case 3:
                            // Código para la opción 3
                            // ...
                            break;
                        case 4:
                            // Código para la opción 4
                            // ...
                            break;
                        case 5:
                            cout << "Regresando al menú principal." << endl;
                            regresarAlMenuPrincipal = true;  // Actualizar la variable para salir del bucle interno
                            break;
                        default:
                            cout << "Opción no válida. Inténtalo de nuevo." << endl;
                             break;
                    }

                    if (vida <= 0) 
                    {
                        cout << "Te has quedado sin vidas. Gracias por jugar." << endl;
                        break;
                    } 
                    else if (vida >= 6)
                    {
                        cout << "Perdiste el juego de una manera deshonrosa." << endl;
                        cout << "NO HAGAS TRAMPAS PARA TENER MAS VIDAS, SELECCIONA MÁS OPCIONES NO SIEMPRE LA MISMA" << endl;
                        break;
                    }

                } while (!regresarAlMenuPrincipal);  // Modificar la condición del bucle interno
                break;

            case 2:
                cout << "¡Gracias por jugar! Tu aventura ha terminado." << endl;
                break;

            case 3:
                // Código para la opción 3 (Opción adicional 1)
                cout << "Has seleccionado la Opción Adicional 1. ¡Aventura emocionante te espera!" << endl;
                break;

            case 4:
                // Código para la opción 4 (Opción adicional 2)
                cout << "Has seleccionado la Opción Adicional 2. ¡Prepárate para lo inesperado!" << endl;
                break;

            default:
                cout << "Opción no válida. Inténtalo de nuevo." << endl;
                break;
        }

    } while (decision != 2);

    return 0;
}

