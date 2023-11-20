codigo
#include <iostream>
#include <limits> // Para limpiar el buffer del cin despu�s de leer un tipo incorrecto

using namespace std;

int main() 
{
    int vida = 1;  // Elemento recolectable: vida
    int decision;
    int decisionJuego;  // Nueva variable para manejar las elecciones dentro del bucle interno

    cout << "****** �Bienvenido a la historia interactiva! ******" << endl;

    do 
    {
        // Mostrar estado actual
        cout << "-- Men� Principal ;) --" << endl;
        cout << "1. Iniciar juego" << endl;
        cout << "2. Salir" << endl;
        cout << "Selecciona una opci�n: ";

        // Limpiar el buffer del cin antes de leer la opci�n
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cin >> decision;

        switch (decision)
        {
            case 1:
                do 
                {
                    // Mostrar estado actual
                    cout << "--- Est�s en medio de un bosque y no recuerdas nada ---" << endl;
                    cout << "-- Men� de juego --" << endl;
                    cout << "1. Seguir adelante" << endl;
                    cout << "2. Mirar a la luna" << endl;
                    cout << "3. Agarrar la pala que est� tirada" << endl;
                    cout << "4. Ponerte a pensar, �por qu� est�s aqu�?" << endl;
                    cout << "-- Estado actual --" << endl;
                    cout << "Vida: " << vida << endl;
                    cout << "5. Regresar al Men� Principal" << endl;
                    cout << "Selecciona una opci�n: ";

                    // Limpiar el buffer del cin antes de leer la opci�n
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cin >> decisionJuego;  // Utilizamos una nueva variable

                    switch (decisionJuego)
                    {
                        // C�digo de acciones
                        case 1:
                            // C�digo para la opci�n 1
                            cout << "--- Estado actual ---" << endl;
                            cout << "     Vida: " << vida << endl;
                            cout << "-- Te aventuras en el bosque. �Qu� decides hacer? --" << endl;
                            cout << "1. Seguir caminando derecho." << endl;
                            cout << "2. Seguir a la derecha." << endl;
                            cout << "3. Seguir la luz misteriosa." << endl;
                            cout << "Selecciona una opci�n: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1)
                            {
                                cout << "Encuentras un hombre misterioso de espaldas, Te golpean en la cabeza." << endl;
                                vida--;
                            }
                            else if (decisionJuego == 2)
                            {
                                cout << "Sigues caminando un rato pero no ves un hoyo, tropiezas y te golpeas la cabeza." << endl;
                                vida--;
                            }
                            else
                            {
                                cout << "La luz misteriosa se transforma en algo inexplicable, te toca la cara y todo reinicia." << endl;
                                vida++;
                            }
                            break;
                            
                        case 2:
                            // C�digo para la opci�n 2
                            cout << "--- Estado actual ---" << endl;
                            cout << "Vida: " << vida << endl;
                            cout << "-- Decidiste mirar a la luna. �Sera buena idea? --" << endl;
                            cout << "1. Seguir mirando" << endl;
                            cout << "2. Dejar de mirar " << endl;
                            cout << "3. HUIR" << endl;
                            cout << "Selecciona una opci�n: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1) {
                                cout << "Esa no es la luna" << endl;
                                vida--;
                            } 
                            else if (decisionJuego == 2)
                            {
                                cout << "Buena elecci�n, esa cosa no era la luna." << endl;
                                vida++;
                            } 
                            else
                            { 
                                cout << "Esa cosa que se hace pasar por la luna te alcanz�." << endl;
                                vida--;
                            }
                            break;
                        case 3:
                            // C�digo para la opci�n 3
                            cout << "\nEncuentras a un aldeano herido. �C�mo decides ayudar?\n";
                            cout << "1. Utilizar una poci�n para curarlo\n";
                            cout << "2. Buscar ayuda en la aldea\n";
                            cout << "3. Ignorar y seguir explorando\n";
                            cout << "Selecciona una opci�n: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1)
                            {
                                cout << "Utilizas una poci�n para curar al aldeano. Ganas su gratitud y 1 punto de vida.\n";
                                vida++;
                            } 
                            else if (decisionJuego == 2) 
                            {
                                cout << "Buscas ayuda en la aldea y recibes 2 puntos de vida como agradecimiento.\n";
                                vida += 2;
                            } 
                            else 
                            {
                                cout << "Ignoras al aldeano y contin�as tu exploraci�n.\n";
                            }
                            break;
                        case 4:
                            // C�digo para la opci�n 4
                            cout << "\nDecides descansar en la posada. �Qu� actividad eliges?\n";
                            cout << "1. Comprar pociones\n";
                            cout << "2. Participar en un torneo de habilidades\n";
                            cout << "3. Descansar y recuperar energ�as\n";
                            cout << "Selecciona una opci�n: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1) 
                            {
                                cout << "Compras pociones adicionales. Gastas 2 puntos de vida.\n";
                                vida -= 2;
                            } 
                            else if (decisionJuego == 2)
                            {
                                cout << "Participas en un torneo y ganas un premio. Recibes 3 puntos de vida.\n";
                                vida += 3;
                            }  
                            else
                            {
                                cout << "Descansas y recuperas 1 punto de vida que hab�as gastado en la posada.\n";
                                vida++;
                            }
                            break;
                        case 5:
                            cout << "Regresando al men� principal." << endl;
                            break;
                        default:
                            cout << "Opci�n no v�lida. Int�ntalo de nuevo." << endl;
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
                        cout << "NO HAGAS TRAMPAS PARA TENER MAS VIDAS, SELECCIONA M�S OPCIONES NO SIEMPRE LA MISMA" << endl;
                        break;
                    }

                } while (decision != 5);
                break;

            case 2:
                cout << "�Gracias por jugar! Tu aventura ha terminado." << endl;
                break;

            default:
                cout << "Opci�n no v�lida. Int�ntalo de nuevo." << endl;
                break;
        }

    } while (decision != 2 );

    return 0;
}

