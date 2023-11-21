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
        cout << "--- Menu Principal ;) --" << endl;
        cout << " introduzca su opcion en valor numerico "<<endl;
        cout << " (aveces necesita doble confirmacion no pude arreglarlo perdon :c )"<<endl;
        cout << "1. Iniciar juego" << endl;
        cout << "2. ¿Historia?" << endl;
        cout << "3. Creditos " << endl;
        cout << "4. Salir" << endl;
        cout << "Selecciona una opcion: ";

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
                    cout << "--- Esta en medio de un bosque y no recuerdas nada ---" << endl;
                    cout << "-- Menu de juego --" << endl;
                    cout << "1. Seguir adelante" << endl;
                    cout << "2. Mirar a la luna" << endl;
                    cout << "3. Agarrar la pala que esta tirada" << endl;
                    cout << "4. Ponerte a pensar, ¿por que estas aqui?" << endl;
                    cout << "-- Estado actual --" << endl;
                    cout << "Vida: " << vida << endl;
                    cout << "5. Regresar al Menu Principal" << endl;
                    cout << "Selecciona una opcion: ";

                    // Limpiar el buffer del cin antes de leer la opción
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');

                    cin >> decisionJuego;  // Utilizamos una nueva variable

                    switch (decisionJuego)
                    {
                        // Código de acciones
                        case 1:
                            // Código para la opción 1
                            
                              // Código para la opción 1
                            cout << "--- Estado actual ---" << endl;
                            cout << "     Vida: " << vida << endl;
                            cout << "-- Te aventuras en el bosque. ¿Qué decides hacer? --" << endl;
                            cout << "1. Seguir caminando derecho." << endl;
                            cout << "2. Seguir a la derecha." << endl;
                            cout << "3. Seguir la luz misteriosa." << endl;
                            cout << "Selecciona una opcion: ";
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
                            // Código para la opción 2
                             cout << "--- Estado actual ---" << endl;
                            cout << "        Vida: " << vida << endl;
                            cout << "-- Decidiste mirar a la luna. ¿Sera buena idea? --" << endl;
                            cout << "1. Seguir mirando" << endl;
                            cout << "2. Dejar de mirar " << endl;
                            cout << "3. HUIR" << endl;
                            cout << "Selecciona una opcion: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1) {
                                cout << "Esa no es la luna" << endl;
                                vida--;
                            } 
                            else if (decisionJuego == 2)
                            {
                                cout << "Buena eleccion, esa cosa no era la luna." << endl;
                                
                            } 
                            else
                            { 
                                cout << "Esa cosa se hace pasar por la luna, te alcanzo." << endl;
                                vida--;
                            }

                            break;
                        case 3:
                            // Código para la opción 3
                           cout << "Agarras la pala ¿Que decides hacer?"<<endl;
                           cout << "        Vida: " << vida << endl;                           
                            cout << "1. Cabar ai mismo"<<endl;
                            cout << "2. Golperar al arbol misterioso"<<endl;
                            cout << "3. Ver la pala con detalle"<<endl;
                            cout << "Selecciona una opcion: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1)
                            {
                                cout << "   Cabaz ai mismo ¿Que es eso un cuerpo?  "<<endl;
                                cout << "   No puede ser ¿Es es mi madre?  "<<endl;
                                cout << "  personaje:  Si es ella "<<endl;
                                cout << "  personaje: nooo mi madre "<<endl;
                                cout<< " No aguantas la idea de perder a tu madre y te suicidas"<<endl;
                                vida -= 3;
                            } 
                            else if (decisionJuego == 2) 
                            {
                                 cout << "Golpeas al arbol"<<endl;
                                 cout << "persoaneje: esa cosa no es un arbol ¿Tiene ojos?"<<endl;   
								 cout << "El arbol abre esos ojos tan raros"<<endl; 
								 cout << "Arbol: Hola joven veo que has estado un tiempo aqui"<<endl;
								 cout << "Arbol: Te dire una cosa de la vida y la muerte, La muerte no encierra misterio alguno. No abre ninguna puerta."<<endl;
								 cout << "Es el final de un ser humano. Lo que sobrevive de él es lo que ha conseguido dar de si a los demas"<<endl;
								 cout << "lo que de el se guarda en la memoria de los otros."<<endl;
								 cout<< "Pero la gente que mata no merece nada ni si quiere ser considerado humano "<<endl;
								 cout <<"Pero parece que tu sabes de que hablo "<<endl;  
								 cout<<"pero te ayudare con una vida para que recuerdes"<<endl;
                                vida++;
                            } 
                            else 
                            {
                                cout << "La pala tiene mi nombre";
                            }

                            break;
                        case 4:
                            // Código para la opción 4
                            cout << "Entocnes decidiste pensar ¿Que seria mejor para pensar?"<<endl;
                            cout << "        Vida: " << vida << endl;
                            cout << "1. ¿Que es la muerte?"<<endl;
                            cout << "2. ¿Donde estoy?"<<endl;
                            cout << "3. ¿Soy una buena persona?"<<endl;
                            cout << "Selecciona una opción: "<<endl;
                            cin >> decisionJuego;

                            if (decisionJuego == 1) 
                            {
                                cout << "Al pensar eso empiesas a recordad la muerte de alguien "<<endl;
                                cout << "la mate yo? "<<endl;
                                cout << "Empiesas a llorar y solo te acuestas en el suelo"<<endl;
                                
                            } 
                            else if (decisionJuego == 2)
                            {
                                cout << "Al pensar eso una voz misteriosa habla";
                                cout << "Voz misteriosa: Lo sabes mataste a persona importantes y hasta la que te dio la vida "<<endl;
                                cout << "Mereces estar aqui este mundo lleno de adefecios como tu"<<endl;
                                vida -=3;
                            }  
                            else
                            {
                                cout << "Nunca fuiste buena persona y solo repudiabas a la gente pero no todo es tu culpa "<<endl;
                                cout << "Tambien fue la de tu madre "<<endl;
                                vida -= 3;
                            }

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
                        cout << " El juego a acabado. Gracias por jugar." << endl;
                        return 0;  // Terminar el programa cuando las vidas sean igual o menor a 0
                    } 
                    else if (vida >= 3)
                    {
                        cout << "Perdiste el juego ya que tu vidas llegaron a 3 o mas." << endl;
                        cout << "¿De verdad crees que podras tener tantas vidas? no mereces demasiado" << endl;
                        return 0;  // Terminar el programa si las vidas son mayores o iguales a 6
                    }

                } while (!regresarAlMenuPrincipal);  // Modificar la condición del bucle interno
                break;

            case 2:
                 
                            cout << " Estas en el infierno pos tus pecados" << endl;
                            cout << " Tu mision recordar y encotnrar una posible salida" << endl;
                            cout << "54,6f,64,6f,73,20,6d,6f,72,69,72,65,6d,6f,73,20,64,65,6a,61,20,64,65,20,62,75,73,63,61,72,20,73,61,6c,69,64,61,20,61,20,65,73,74,61,20,76,69,64,61,20,6c,6c,65,6e,61,20,64,65,20,6d,69,65,72,64,61,20,73,6f,6c,6f,20,76,69,76,65" << endl;
                            cout << "1. Salir." << endl;
                            cout << "Selecciona 1 para salir: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1)
                            {
                                
                            }
                break;

            case 3:
                // Código para la opción 3 (Opción adicional 1)
                cout << " Juego o inteto de este " << endl;
                            cout << " Creador: Ceballos Zamora Tadeo Aaron" << endl;
                            cout << "Gamertag: Tadenacho" << endl;
                            cout << "Este juego fue echo para mi materia COMPUTADORAS Y PROGRAMACION Grupo: 1158 (2024-I)" << endl;
                            cout << "1. Salir." << endl;
                            cout << "Selecciona 1 para salir: ";
                            cin >> decisionJuego;

                            if (decisionJuego == 1)
                            {
                                
                            }
                break;

            case 4:
                // Código para la opción 4 (Opción adicional 2)
                cout << "¡Gracias por jugar! Tu aventura ha terminado." << endl;
                break;

            default:
                cout << "Opcion no valida. Intentalo de nuevo." << endl;
                break;
        }

    } while (decision != 4);

    return 0;
}
