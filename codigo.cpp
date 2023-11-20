codigo
#include <iostream>

using namespace std;

int main() 
{
    int vida = 1;  // Elemento recolectable: vida
    int decision;
    
    cout << "****** ¡Bienvenido a la historia interactiva! ******" << endl;

    do 
    {
        // Mostrar estado actual
        cout << "-- Menú Principal ;) --" << endl;
        cout << "1. Iniciar juego" << endl;
        cout << "2. Salir" << endl;
        cout << "Selecciona una opción: ";
        cin >> decision;

        switch (decision)
        {
            case 1:
                do 
                {
                    // Mostrar estado actual
                    cout << "--- Estas en medio de un bosque y no recuerdas nada ---" << endl;
                    cout << "-- Menú de juego --" << endl;
                    cout << "1. Seguir adelante" << endl;
                    cout << "2. Mirar a la luna" << endl;
                    cout << "3. Agarrar la pala que está tirada" << endl;
                    cout << "4. Ponerte a pensar, ¿el por qué estás aquí?" << endl;
                    cout << "-- Estado actual --" << endl;
                    cout << "Vida: " << vida << endl;
                    cout << "5. Salir del juego" << endl;
                    cout << "Selecciona una opción: ";
                    cin >> decision;

                    switch (decision)
                    {
                         case 1:
            cout << "--- Estado actual ---" << endl;
            cout << "Vida: " << vida << endl;
            cout << "-- Te aventuras en el bosque. ¿Qué decides hacer? --"<<endl;
            cout << "1. Seguir caminando derecho."<<endl;
            cout << "2. Seguir a la derecha."<<endl;
            cout << "3. Seguir la luz misteriosa."<<endl;
            cout << "Selecciona una opción: ";
            cin >> decision;

                if (decision == 1)
                        {
                             cout << "Encuentras un hombre misterioso de espaldas, Te golpean en la cabeza."<<endl;
                    vida--;
                        }
                         else if (decision == 2)
                           {
                    cout << "Sigues caminando un rato pero no ves un hoyo tropiezas y te golpeas la cabeza."<<endl;
                    vida--;
                       } 
                    else
                    {
                    cout << "_______ la luz misteriosa se trasforma en algo inesplicable, esta te toca la cara y todo reinicia?. _______"<<endl;
                    vida++;
                    }
                    break;
                    case 2:
                 cout << "--- Estado actual ---" << endl;
                 cout << "Vida: " << vida << endl;
                 cout << "-- Decidiste mirar a la luna. ¿Sera buena idea? --"<<endl;
                 cout << "1. Seguir mirando"<<endl;
                 cout << "2. Dejar de mirar "<<endl;
                 cout << "3. HUIR"<<endl;
                 cout << "Selecciona una opción: ";
                 cin >> decision;

                if (decision == 1) {
                    cout << "Esa no es la luna"<<endl;
                    vida--;
                } 
                else if (decision == 2)
                {
                    cout << "_____ Buena eleccion esa cosa no era la luna. _______"<<endl;
                    vida++;
                } 
                else
                { 
                    cout << "Esa cosa que se hace pasar por la luna te alcanzo."<<endl;
                    vida--;
                 
                  }
                break;

            case 3:
                cout << "\nEncuentras a un aldeano herido. ¿Cómo decides ayudar?\n";
                cout << "1. Utilizar una poción para curarlo\n";
                cout << "2. Buscar ayuda en la aldea\n";
                cout << "3. Ignorar y seguir explorando\n";
                cout << "Selecciona una opción: ";
                cin >> decision;

                if (decision == 1)
                {
                    cout << "Utilizas una poción para curar al aldeano. Ganas su gratitud y 1 punto de vida.\n";
                    vida++;
                } 
                else if (decision == 2) 
                {
                    cout << "Buscas ayuda en la aldea y recibes 2 puntos de vida como agradecimiento.\n";
                    vida += 2;
                } 
                else 
                {
                    cout << "Ignoras al aldeano y continúas tu exploración.\n";
                }
                break;

            case 4:
                cout << "\nDecides descansar en la posada. ¿Qué actividad eliges?\n";
                cout << "1. Comprar pociones\n";
                cout << "2. Participar en un torneo de habilidades\n";
                cout << "3. Descansar y recuperar energías\n";
                cout << "Selecciona una opción: ";
                cin >> decision;

                if (decision == 1) 
                {
                    cout << "Compras pociones adicionales. Gastas 2 puntos de vida.\n";
                    vida -= 2;
                } 
                else if (decision == 2)
                {
                    cout << "Participas en un torneo y ganas un premio. Recibes 3 puntos de vida.\n";
                    vida += 3;
                }  
                else
                {
                    cout << "Descansas y recuperas 1 punto de vida que habías gastado en la posada.\n";
                    vida++;
                    break;
                }
                
            case 5:
                cout << "¡Gracias por jugar! Tu aventura ha terminado.\n";
                break;
                
              default:
                cout << "Opción no válida. Inténtalo de nuevo.\n";
                     break;
        }
        
//}final 
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
                } while (decision != 10);
                break;

            case 2:
                cout << "¡Gracias por jugar! Tu aventura ha terminado." << endl;
                break;

            default:
                cout << "Opción no válida. Inténtalo de nuevo." << endl;
        }

    } while (decision != 10);

    return 0;
}
