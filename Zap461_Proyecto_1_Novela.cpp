// zap461_Proyecto1_novela.cpp
// Rodrigo Tapia Robles
// Novela de amerike inspirada en la uni y un poco mas.
// Proyecto numero 1 para la materia de fundamentos de programacion.

#include <iostream>
using namespace std;
bool respuesta;

int main()
{
    // Titulo de la novela
    cout << "oyy+    oy:   `/syhhyo-  .sy:     :ys .yyyssss` :ys        .sys-            :yys`    `syyo`     /syy-  +yyssss/  syysss+-   +yo  -ys`  -ss: -yyyssss" << endl;
    cout << "MMNMy`  mM+  +NMy/::oNMh` hMN`   .NM+ /MMo////  sMM       `dMdMN.          -NNmMy    :MMdMh    /MmMMo  dMm////-  MMh:/oMMo  hMm  +MM.`oNN+  +MM+///:" << endl;
    cout << "MM+mMd. mM+ -MMs     :MMo `mMy   hMh  /MM+---`  sMM       sMh`dMh         `mM+-NM+   :MM:mMo  -NN-NMo  dMm----   MMy..:MMo  hMm  +MM/dMy.   +MM:---`" << endl;
    cout << "MM/.hMm.mM+ /MM/     `MMs  :MM/ +Mm.  /MMhyyy:  sMM      /MN-`:MMo        yMd``oMN-  :MM.-NM:`mM/ NMo  dMNyyyy   MMmhmMm/   hMm  +MMyMM/    +MMhyyy-" << endl;
    cout << "MM/ `yMmNM+ .NMh`    oMM:   sMN:NM:   /MM-      sMM     .NMmhhhmMM:      /MMdhhdNMm` :MM. oMNhMs  NMo  dMd       MMs`.dMd.  hMm  +MM./NMy`  +MM`" << endl;
    cout << "MM/   sMMM+  :dMmysydMd/    `dMNMs    /MMhyyyy` sMMhyyy:dMh`````hMN.    .NM+````-NMy :MM.  hMMd`  NMo  dMNyyyy+  MMs  `mMd` hMm  +MM. .hMm: +MMhyyyy" << endl;
    cout << ":/`    -::`    .:/+/:.       `//:     `:::::::  .::::::.//`     `//.    ./:      -/: `/:`  `:/`   :/.  -::::::-  :/.   .//` -/-  `/:    :/- `:::::::" << endl;





    cout << endl;
    //Bienvenida al usuario
    cout << "Bienvenidos a esta gran historia en la cual dependiendo de tus desiciones, habra distintos caminos." << endl;
    cout << endl;
    //Instrucciones de como jugar
    cout << "  -------------------------------------------------------" << endl;
    cout << " | Para responder a cada situacion deberas escribir :    |" << endl;
    cout << " | Un 1 para responder un SI y un 0 para responder un NO |" << endl;
    cout << "  -------------------------------------------------------" << endl;

    

    //comienza la historia
    cout << endl;
    cout << "Este era un dia cualquiera en la hermosa unviversidad de Amerike." << endl;
    cout << "Tu eres un alumno de esta universidad el cual comienza su historia entrando a la primera clase..." << endl;
    cout << endl;
    cout << "La primera clase es la de psicologia." << endl;
    cout << endl;
    cout << "Que quieres hacer en la clase de psicologia?" << endl;
    cout << endl;
    cout << "Quieres poner atencion a la clase de psicologia?" << endl;
    cin >> respuesta;

    //Dependiendo de las desiciones contaras con diferentes finales
    if (respuesta == 1)
    {
        cout << "Has puesto atencion a la clase de psicologia."
            << endl;
        cout << endl;
        cout << "Ya terminada la clase de psicologia, decides ir para donde es tu siguiente clase; historia de los videojuegos." << endl;
        cout << "Ya estando en la puerta del salon te comienza a dar un dolor muy fuerte en el estomago." << endl;
        cout << "Quieres entrar a la clase?" << endl;
        cin >> respuesta;

        if (respuesta == 1)
        {
            cout << "Entrataste a la clase de historia de los videojuegos y has aprendido bastante." << endl;
            cout << "Despues de que termino la clase vas camino con el coordinador para informarle que te duele el estomago." << endl;
            cout << "Camino a la oficina del coordinador escuchas unos sonidos raros que provienen de un salon." << endl;
            cout << "Quieres ir a investigar los sonidos que provienen del salon?" << endl;
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "Te acercas poco a poco al salon donde provienen los sonidos raros." << endl;
                cout << "Al entrar viste una clase de criatura extraña, pero al darse cuenta de tu presencia escapo por la ventana." << endl;
                cout << "Sin saber que hacer y preocupado por la criatura, te pones a pensar si la sigues o avisas a los demas sobre ella." << endl;
                cout << "Quieres seguir a la criatura?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Con mucho sigilo y cautela seguiste a la criatura hasta las canchas de la escuela." << endl;
                    cout << "Ya en las canchas te diste cuenta que la criatura se habia metido a alguna clase de sotano oculto." << endl;
                    cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                    cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                        cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                        cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                        return 0;
                    }
                    else
                    {
                        cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                        cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                        cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                        cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                        cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                        return 0;
                    }

                }
                else
                {
                    cout << "No seguiste a la criatura por miedo a lo que pasaria." << endl;
                    cout << "Decides ir en busca de ayuda para contarles sobre la criatura." << endl;
                    cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma, asi que decides volver al salon para ver si encontrabas algo util." << endl;
                    cout << "Al entrar ves que la criatura dejo un rastro por el cual escapo." << endl;
                    cout << "Quieres seguir el rastro de la criatura?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Seguiste el rastro de la criatura hasta las canchas donde el rastro terminaba en una especie de sotano." << endl;
                        cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                        cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;

                        if (respuesta == 1)
                        {
                            cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                            cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                        else
                        {
                            cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                            cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                            cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                            cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                    }
                    else
                    {
                        cout << "Al no seguir el rastro de la criatura decides ir a buscar ayuda nuevamente para mostrarles el rastro." << endl;
                        cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma otra vez, pero los guias hasta el salon donde esta el rastro." << endl;
                        cout << "Al entrar se percatan de que no hay ningun rastro y dicen que solo hiciste que perdieran su tiempo." << endl;
                        cout << "Confundido por la situacion decides ignorar todo lo ocurrido y te diriges a la oficina del coordinador por el dolor de estomago." << endl;
                        cout << "Ya hablando con el coordinador, te recomienda ir a tu casa para que descanses y te sientas mejor." << endl;
                        cout << "Pero aun seguias preocupado por la criatura y no sabias si de verdad irte a tu casa." << endl;
                        cout << "Quieres irte a tu casa?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Decides ir a tu casa sin tener que preocuparte por las criaturas." << endl;
                            cout << "Todo siguio normal y nada a ocurrido." << endl;
                            cout << "Por ahora estas a salvo..." << endl;

                            return 0;
                        }
                        else
                        {
                            cout << "Aun por la preocupacion decides quedarte a investigar un poco." << endl;
                            cout << "No encontraste nada por mas que buscaste." << endl;
                            cout << "Asi que decides olvidar lo sucedido y seguir con tu vida." << endl;
                            cout << "Por ahora estas a salvo..." << endl;

                            return 0;

                        }

                    }

                }

            }
            else
            {

                cout << "Decides no ir a investigar por miedo a lo que podria ser." << endl;
                cout << "Asi que tu solo sigues a buscar al coordinador para comentarle sobre tu dolor de estomago." << endl;
                cout << "Llegando con el coordinador le comentas sobre tu dolor." << endl;
                cout << "En tu mente aun seguias pensando sobre aquellos sonidos pero no sabias si comentarle al coordinador." << endl;
                cout << "Quieres comentarles al coordinador sobre los sonidos que escuchaste?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Decides contarle sobre los sonidos al coordinador." << endl;
                    cout << "Confundido por tu historia, el coordinador y tu van a investigar el salon de donde provenian los sonidos raros." << endl;
                    cout << "Llegando al salon se percatan de una criatura muy rara que al verlos escapa por la ventana" << endl;
                    cout << "Quieres ir a buscar ayuda junto con el coordinador?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Juntos van en busca de la polica para contar lo sucedido y evitar que las criaturas hagan algo malo." << endl;
                        cout << "La policia intrigada sobre el asunto se dirige a la escuela." << endl;
                        cout << "Ya en la escuela la poicia y tu procede a investigar todas partes." << endl;
                        cout << "Tu encontraste una especie de sotano oculto en las canchas" << endl;
                        cout << "Quieres investigar por tu cuenta?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Entraste al sotano y encotrate una colonia entera de las criaturas." << endl;
                            cout << "Por el miedo te quedas paralizado y las criaturas te comienza a comer poco a poco." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                        else
                        {
                            cout << "Por miedo y sospecha decides no ir solo y decides llamar a la policia para que vengan." << endl;
                            cout << "La policia entra y ve una colonia completa de las criaturas." << endl;
                            cout << "La policia mato y acabo con todas las criaturas del sotano." << endl;
                            cout << "Felicidades has conseguido acabar con las criaturas y salvar al mundo." << endl;

                            return 0;
                        }
                    }
                    else
                    {
                        cout << "Deciden no buscar ayuda y se dedican a seguir sigiosamente a la criatura." << endl;
                        cout << "Al seguirla llegaron hasta las canchas" << endl;
                        cout << "Ya en las canchas se dan cuenta que la criatura se habia metido a alguna clase de sotano oculto." << endl;
                        cout << "Se acercan a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                        cout << "Quieres entrar al sotano aun asi sin saber lo que les espera?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Entraron al sotano y econtraron una colonia entera de las criauturas." << endl;
                            cout << "Debido al miedo tu y el coordinador quedaron inmoviles y las criaturas se los comieron poco a poco." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                        else
                        {
                            cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                            cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                            cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                            cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                    }

                }
                else
                {
                    cout << "Decides mejor no contarle al coordinador sobre los sonidos ya que crees que no es importante." << endl;
                    cout << "Asi que decides olvidar todo lo sucedido pero camino a tu salon vuelves a escuchar los sonidos proveniedo del salon." << endl;
                    cout << "Quieres ir a investigar los sonidos por tu cuenta?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Te acercas poco a poco al salon donde provienen los sonidos raros." << endl;
                        cout << "Al entrar viste una clase de criatura extraña, pero al darse cuenta de tu presencia escapo por la ventana." << endl;
                        cout << "Sin saber que hacer y preocupado por la criatura, te pones a pensar si la sigues o avisas a los demas sobre ella." << endl;
                        cout << "Quieres seguir a la criatura?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Con mucho sigilo y cautela seguiste a la criatura hasta las canchas de la escuela." << endl;
                            cout << "Ya en las canchas te diste cuenta que la criatura se habia metido a alguna clase de sotano oculto." << endl;
                            cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                            cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                                cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                                cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                                return 0;
                            }
                            else
                            {
                                cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                                cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                                cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                                cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                                cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                                return 0;
                            }

                        }
                        else
                        {
                            cout << "No seguiste a la criatura por miedo a lo que pasaria." << endl;
                            cout << "Decides ir en busca de ayuda para contarles sobre la criatura." << endl;
                            cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma, asi que decides volver al salon para ver si encontrabas algo util." << endl;
                            cout << "Al entrar ves que la criatura dejo un rastro por el cual escapo." << endl;
                            cout << "Quieres seguir el rastro de la criatura?" << endl;
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Seguiste el rastro de la criatura hasta las canchas donde el rastro terminaba en una especie de sotano." << endl;
                                cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                                cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                                cin >> respuesta;

                                if (respuesta)
                                {
                                    cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                                    cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                                    cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                                    return 0;
                                }
                                else
                                {
                                    cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                                    cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                                    cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                                    cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                                    cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                                    return 0;
                                }
                            }
                            else
                            {
                                cout << "Al no seguir el rastro de la criatura decides ir a buscar ayuda nuevamente para mostrarles el rastro." << endl;
                                cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma otra vez, pero los guias hasta el salon donde esta el rastro." << endl;
                                cout << "Al entrar se percatan de que no hay ningun rastro y dicen que solo hiciste que perdieran su tiempo." << endl;
                                cout << "Confundido por la situacion decides ignorar todo lo ocurrido y te diriges a la oficina del coordinador por el dolor de estomago." << endl;
                                cout << "Ya hablando con el coordinador, te recomienda ir a tu casa para que descanses y te sientas mejor." << endl;
                                cout << "Pero aun seguias preocupado por la criatura y no sabias si de verdad irte a tu casa." << endl;
                                cout << "Quieres irte a tu casa?" << endl;
                                cin >> respuesta;

                                if (respuesta == 1)
                                {
                                    cout << "Decides ir a tu casa sin tener que preocuparte por las criaturas." << endl;
                                    cout << "Todo siguio normal y nada a ocurrido." << endl;
                                    cout << "Por ahora estas a salvo..." << endl;

                                    return 0;
                                }
                                else
                                {
                                    cout << "Aun por la preocupacion decides quedarte a investigar un poco." << endl;
                                    cout << "No encontraste nada por mas que buscaste." << endl;
                                    cout << "Asi que decides olvidar lo sucedido y seguir con tu vida." << endl;
                                    cout << "Por ahora estas a salvo..." << endl;

                                    return 0;
                                }
                            }
                        }
                    }
                    else
                    {
                        cout << "Decides ya no investigar los sonidos y continuas con tu vida tratando de olvidar los sonidos." << endl;
                        cout << "Debido a eso todo sigue normal hasta ahora..." << endl;
                        cout << "Por el momento hay paz y tranquilidad." << endl;

                        return 0;
                    }


                }





            }


        }
        else
        {
            cout << "Decides no entrar a la clase de heriberto ya que te duele el estomago." << endl;
            cout << "Camino a la oficina del coordinador escuchas unos sonidos raros que provienen de un salon." << endl;
            cout << "Quieres ir a investigar los sonidos que provienen del salon?" << endl;
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "Te acercas poco a poco al salon donde provienen los sonidos raros." << endl;
                cout << "Al entrar viste una clase de criatura extraña, pero al darse cuenta de tu presencia escapo por la ventana." << endl;
                cout << "Sin saber que hacer y preocupado por la criatura, te pones a pensar si la sigues o avisas a los demas sobre ella." << endl;
                cout << "Quieres seguir a la criatura?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Con mucho sigilo y cautela seguiste a la criatura hasta las canchas de la escuela." << endl;
                    cout << "Ya en las canchas te diste cuenta que la criatura se habia metido a alguna clase de sotano oculto." << endl;
                    cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                    cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                        cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                        cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                        return 0;
                    }
                    else
                    {
                        cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                        cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                        cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                        cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                        cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                        return 0;
                    }
                }
                else
                {
                    cout << "No seguiste a la criatura por miedo a lo que pasaria." << endl;
                    cout << "Decides ir en busca de ayuda para contarles sobre la criatura." << endl;
                    cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma, asi que decides volver al salon para ver si encontrabas algo util." << endl;
                    cout << "Al entrar ves que la criatura dejo un rastro por el cual escapo." << endl;
                    cout << "Quieres seguir el rastro de la criatura?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Seguiste el rastro de la criatura hasta las canchas donde el rastro terminaba en una especie de sotano." << endl;
                        cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                        cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                        cin >> respuesta;

                        if (respuesta)
                        {
                            cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                            cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                        else
                        {
                            cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                            cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                            cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                            cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                    }
                    else
                    {
                        cout << "Al no seguir el rastro de la criatura decides ir a buscar ayuda nuevamente para mostrarles el rastro." << endl;
                        cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma otra vez, pero los guias hasta el salon donde esta el rastro." << endl;
                        cout << "Al entrar se percatan de que no hay ningun rastro y dicen que solo hiciste que perdieran su tiempo." << endl;
                        cout << "Confundido por la situacion decides ignorar todo lo ocurrido y te diriges a la oficina del coordinador por el dolor de estomago." << endl;
                        cout << "Ya hablando con el coordinador, te recomienda ir a tu casa para que descanses y te sientas mejor." << endl;
                        cout << "Pero aun seguias preocupado por la criatura y no sabias si de verdad irte a tu casa." << endl;
                        cout << "Quieres irte a tu casa?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Decides ir a tu casa sin tener que preocuparte por las criaturas." << endl;
                            cout << "Todo siguio normal y nada a ocurrido." << endl;
                            cout << "Por ahora estas a salvo..." << endl;

                            return 0;
                        }
                        else
                        {
                            cout << "Aun por la preocupacion decides quedarte a investigar un poco." << endl;
                            cout << "No encontraste nada por mas que buscaste." << endl;
                            cout << "Asi que decides olvidar lo sucedido y seguir con tu vida." << endl;
                            cout << "Por ahora estas a salvo..." << endl;

                            return 0;
                        }

                    }

                }
            }
            else
            {
                cout << "Decides no ir a investigar por miedo a lo que podria ser." << endl;
                cout << "Asi que tu solo sigues a buscar al coordinador para comentarle sobre tu dolor de estomago." << endl;
                cout << "Llegando con el coordinador le comentas sobre tu dolor." << endl;
                cout << "En tu mente aun seguias pensando sobre aquellos sonidos pero no sabias si comentarle al coordinador." << endl;
                cout << "Quieres comentarles al coordinador sobre los sonidos que escuchaste?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Decides contarle sobre los sonidos al coordinador." << endl;
                    cout << "Confundido por tu historia, el coordinador y tu van a investigar el salon de donde provenian los sonidos raros." << endl;
                    cout << "Llegando al salon se percatan de una criatura muy rara que al verlos escapa por la ventana" << endl;
                    cout << "Quieres ir a buscar ayuda junto con el coordinador?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Juntos van en busca de la polica para contar lo sucedido y evitar que las criaturas hagan algo malo." << endl;
                        cout << "La policia intrigada sobre el asunto se dirige a la escuela." << endl;
                        cout << "Ya en la escuela la poicia y tu procede a investigar todas partes." << endl;
                        cout << "Tu encontraste una especie de sotano oculto en las canchas" << endl;
                        cout << "Quieres investigar por tu cuenta?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Entraste al sotano y encotrate una colonia entera de las criaturas." << endl;
                            cout << "Por el miedo te quedas paralizado y las criaturas te comienza a comer poco a poco." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                        else
                        {
                            cout << "Por miedo y sospecha decides no ir solo y decides llamar a la policia para que vengan." << endl;
                            cout << "La policia entra y ve una colonia completa de las criaturas." << endl;
                            cout << "La policia mato y acabo con todas las criaturas del sotano." << endl;
                            cout << "Felicidades has conseguido acabar con las criaturas y salvar al mundo." << endl;

                            return 0;
                        }
                    }
                    else
                    {
                        cout << "Deciden no buscar ayuda y se dedican a seguir sigiosamente a la criatura." << endl;
                        cout << "Al seguirla llegaron hasta las canchas" << endl;
                        cout << "Ya en las canchas se dan cuenta que la criatura se habia metido a alguna clase de sotano oculto." << endl;
                        cout << "Se acercan a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                        cout << "Quieres entrar al sotano aun asi sin saber lo que les espera?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Entraron al sotano y econtraron una colonia entera de las criauturas." << endl;
                            cout << "Debido al miedo tu y el coordinador quedaron inmoviles y las criaturas se los comieron poco a poco." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                        else
                        {
                            cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                            cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                            cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                            cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }

                    }
                }
                else
                {
                    cout << "Decides mejor no contarle al coordinador sobre los sonidos ya que crees que no es importante." << endl;
                    cout << "Asi que decides olvidar todo lo sucedido pero camino a tu salon vuelves a escuchar los sonidos proveniedo del salon." << endl;
                    cout << "Quieres ir a investigar los sonidos por tu cuenta?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Te acercas poco a poco al salon donde provienen los sonidos raros." << endl;
                        cout << "Al entrar viste una clase de criatura extraña, pero al darse cuenta de tu presencia escapo por la ventana." << endl;
                        cout << "Sin saber que hacer y preocupado por la criatura, te pones a pensar si la sigues o avisas a los demas sobre ella." << endl;
                        cout << "Quieres seguir a la criatura?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Con mucho sigilo y cautela seguiste a la criatura hasta las canchas de la escuela." << endl;
                            cout << "Ya en las canchas te diste cuenta que la criatura se habia metido a alguna clase de sotano oculto." << endl;
                            cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                            cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                                cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                                cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                                return 0;
                            }
                            else
                            {
                                cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                                cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                                cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                                cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                                cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                                return 0;
                            }
                        }
                        else
                        {

                            cout << "No seguiste a la criatura por miedo a lo que pasaria." << endl;
                            cout << "Decides ir en busca de ayuda para contarles sobre la criatura." << endl;
                            cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma, asi que decides volver al salon para ver si encontrabas algo util." << endl;
                            cout << "Al entrar ves que la criatura dejo un rastro por el cual escapo." << endl;
                            cout << "Quieres seguir el rastro de la criatura?" << endl;
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Seguiste el rastro de la criatura hasta las canchas donde el rastro terminaba en una especie de sotano." << endl;
                                cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                                cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                                cin >> respuesta;

                                if (respuesta)
                                {
                                    cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                                    cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                                    cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                                    return 0;
                                }
                                else
                                {
                                    cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                                    cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                                    cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                                    cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                                    cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                                    return 0;
                                }



                            }
                            else
                            {
                                cout << "Al no seguir el rastro de la criatura decides ir a buscar ayuda nuevamente para mostrarles el rastro." << endl;
                                cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma otra vez, pero los guias hasta el salon donde esta el rastro." << endl;
                                cout << "Al entrar se percatan de que no hay ningun rastro y dicen que solo hiciste que perdieran su tiempo." << endl;
                                cout << "Confundido por la situacion decides ignorar todo lo ocurrido y te diriges a la oficina del coordinador por el dolor de estomago." << endl;
                                cout << "Ya hablando con el coordinador, te recomienda ir a tu casa para que descanses y te sientas mejor." << endl;
                                cout << "Pero aun seguias preocupado por la criatura y no sabias si de verdad irte a tu casa." << endl;
                                cout << "Quieres irte a tu casa?" << endl;
                                cin >> respuesta;

                                if (respuesta == 1)
                                {
                                    cout << "Decides ir a tu casa sin tener que preocuparte por las criaturas." << endl;
                                    cout << "Todo siguio normal y nada a ocurrido." << endl;
                                    cout << "Por ahora estas a salvo..." << endl;

                                    return 0;
                                }
                                else
                                {
                                    cout << "Aun por la preocupacion decides quedarte a investigar un poco." << endl;
                                    cout << "No encontraste nada por mas que buscaste." << endl;
                                    cout << "Asi que decides olvidar lo sucedido y seguir con tu vida." << endl;
                                    cout << "Por ahora estas a salvo..." << endl;

                                    return 0;

                                }
                            }
                        }

                    }
                    else
                    {
                        cout << "Decides ya no investigar los sonidos y continuas con tu vida tratando de olvidar los sonidos." << endl;
                        cout << "Debido a eso todo sigue normal hasta ahora..." << endl;
                        cout << "Por el momento hay paz y tranquilidad." << endl;

                        return 0;
                    }

                }
            }
        }


    }
    else
    {

        cout << "No has puesto atencion a la clase de psicologia, por lo tanto te has quedado dormido y el profesor se ha enojado contigo." << endl;
        cout << "El maestro de tan enojado que estaba te mando la direccion de la escuela." << endl;
        cout << "Camino a la direccion te empieza a dar un dolor de estomago y escuchas sonidos muy sospechos provenientes de un salon." << endl;
        cout << "Quieres ir a investigar los sonidos sospechosos?" << endl;
        cin >> respuesta;

        if (respuesta == 1)
        {
            cout << "Has entrado al salon de donde venian los sonidos sospechosos. " << endl;
            cout << "Al entrar viste una clase de criatura extraña, pero al darse cuenta de tu presencia escapo por la ventana." << endl;
            cout << "Sin saber que hacer y preocupado por la criatura, te pones a pensar si la sigues o avisas a los demas sobre ella." << endl;
            cout << "Quieres seguir a la criatura?" << endl;
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "Con mucho sigilo y cautela seguiste a la criatura hasta las canchas de la escuela." << endl;
                cout << "Ya en las canchas te diste cuenta que la criatura se habia metido a alguna clase de sotano oculto." << endl;
                cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                    cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                    cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                    return 0;
                }
                else
                {
                    cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                    cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                    cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                    cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                    cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                    return 0;

                }

            }
            else
            {
                cout << "No seguiste a la criatura por miedo a lo que pasaria." << endl;
                cout << "Decides ir en busca de ayuda para contarles sobre la criatura." << endl;
                cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma, asi que decides volver al salon para ver si encontrabas algo util." << endl;
                cout << "Al entrar ves que la criatura dejo un rastro por el cual escapo." << endl;
                cout << "Quieres seguir el rastro de la criatura?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Seguiste el rastro de la criatura hasta las canchas donde el rastro terminaba en una especie de sotano." << endl;
                    cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                    cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                        cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                        cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                        return 0;
                    }
                    else
                    {
                        cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                        cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                        cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                        cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                        cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                        return 0;
                    }
                }
                else
                {
                    cout << "Al no seguir el rastro de la criatura decides ir a buscar ayuda nuevamente para mostrarles el rastro." << endl;
                    cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma otra vez, pero los guias hasta el salon donde esta el rastro." << endl;
                    cout << "Al entrar se percatan de que no hay ningun rastro y dicen que solo hiciste que perdieran su tiempo." << endl;
                    cout << "Confundido por la situacion decides ignorar todo lo ocurrido y te diriges a la oficina del coordinador por el dolor de estomago." << endl;
                    cout << "Ya hablando con el coordinador, te recomienda ir a tu casa para que descanses y te sientas mejor." << endl;
                    cout << "Pero aun seguias preocupado por la criatura y no sabias si de verdad irte a tu casa." << endl;
                    cout << "Quieres irte a tu casa?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Decides ir a tu casa sin tener que preocuparte por las criaturas." << endl;
                        cout << "Todo siguio normal y nada a ocurrido." << endl;
                        cout << "Por ahora estas a salvo..." << endl;

                        return 0;
                    }
                    else
                    {
                        cout << "Aun por la preocupacion decides quedarte a investigar un poco." << endl;
                        cout << "No encontraste nada por mas que buscaste." << endl;
                        cout << "Asi que decides olvidar lo sucedido y seguir con tu vida." << endl;
                        cout << "Por ahora estas a salvo..." << endl;

                        return 0;
                    }
                }
            }
        }
        else
        {
            cout << "Decides no ir a investigar por miedo a lo que podria ser." << endl;
            cout << "Asi que tu solo sigues a buscar al coordinador para comentarle sobre tu dolor de estomago." << endl;
            cout << "Llegando con el coordinador le comentas sobre tu dolor." << endl;
            cout << "En tu mente aun seguias pensando sobre aquellos sonidos pero no sabias si comentarle al coordinador." << endl;
            cout << "Quieres comentarles al coordinador sobre los sonidos que escuchaste?" << endl;
            cin >> respuesta;

            if (respuesta == 1)
            {
                cout << "Decides contarle sobre los sonidos al coordinador." << endl;
                cout << "Confundido por tu historia, el coordinador y tu van a investigar el salon de donde provenian los sonidos raros." << endl;
                cout << "Llegando al salon se percatan de una criatura muy rara que al verlos escapa por la ventana" << endl;
                cout << "Quieres ir a buscar ayuda junto con el coordinador?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Juntos van en busca de la polica para contar lo sucedido y evitar que las criaturas hagan algo malo." << endl;
                    cout << "La policia intrigada sobre el asunto se dirige a la escuela." << endl;
                    cout << "Ya en la escuela la poicia y tu procede a investigar todas partes." << endl;
                    cout << "Tu encontraste una especie de sotano oculto en las canchas" << endl;
                    cout << "Quieres investigar por tu cuenta?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Entraste al sotano y encotrate una colonia entera de las criaturas." << endl;
                        cout << "Por el miedo te quedas paralizado y las criaturas te comienza a comer poco a poco." << endl;
                        cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                        return 0;
                    }
                    else
                    {
                        cout << "Por miedo y sospecha decides no ir solo y decides llamar a la policia para que vengan." << endl;
                        cout << "La policia entra y ve una colonia completa de las criaturas." << endl;
                        cout << "La policia mato y acabo con todas las criaturas del sotano." << endl;
                        cout << "Felicidades has conseguido acabar con las criaturas y salvar al mundo." << endl;

                        return 0;
                    }


                }
                else
                {
                    cout << "Deciden no buscar ayuda y se dedican a seguir sigiosamente a la criatura." << endl;
                    cout << "Al seguirla llegaron hasta las canchas" << endl;
                    cout << "Ya en las canchas se dan cuenta que la criatura se habia metido a alguna clase de sotano oculto." << endl;
                    cout << "Se acercan a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                    cout << "Quieres entrar al sotano aun asi sin saber lo que les espera?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Entraron al sotano y econtraron una colonia entera de las criauturas." << endl;
                        cout << "Debido al miedo tu y el coordinador quedaron inmoviles y las criaturas se los comieron poco a poco." << endl;
                        cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                        return 0;
                    }
                    else
                    {
                        cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                        cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                        cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                        cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                        cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                        return 0;
                    }
                }
            }
            else
            {
                cout << "Decides mejor no contarle al coordinador sobre los sonidos ya que crees que no es importante." << endl;
                cout << "Asi que decides olvidar todo lo sucedido pero camino a tu salon vuelves a escuchar los sonidos proveniedo del salon." << endl;
                cout << "Quieres ir a investigar los sonidos por tu cuenta?" << endl;
                cin >> respuesta;

                if (respuesta == 1)
                {
                    cout << "Te acercas poco a poco al salon donde provienen los sonidos raros." << endl;
                    cout << "Al entrar viste una clase de criatura extraña, pero al darse cuenta de tu presencia escapo por la ventana." << endl;
                    cout << "Sin saber que hacer y preocupado por la criatura, te pones a pensar si la sigues o avisas a los demas sobre ella." << endl;
                    cout << "Quieres seguir a la criatura?" << endl;
                    cin >> respuesta;

                    if (respuesta == 1)
                    {
                        cout << "Con mucho sigilo y cautela seguiste a la criatura hasta las canchas de la escuela." << endl;
                        cout << "Ya en las canchas te diste cuenta que la criatura se habia metido a alguna clase de sotano oculto." << endl;
                        cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                        cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                            cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                        else
                        {
                            cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                            cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                            cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                            cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                            cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                            return 0;
                        }
                    }
                    else
                    {
                        cout << "No seguiste a la criatura por miedo a lo que pasaria." << endl;
                        cout << "Decides ir en busca de ayuda para contarles sobre la criatura." << endl;
                        cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma, asi que decides volver al salon para ver si encontrabas algo util." << endl;
                        cout << "Al entrar ves que la criatura dejo un rastro por el cual escapo." << endl;
                        cout << "Quieres seguir el rastro de la criatura?" << endl;
                        cin >> respuesta;

                        if (respuesta == 1)
                        {
                            cout << "Seguiste el rastro de la criatura hasta las canchas donde el rastro terminaba en una especie de sotano." << endl;
                            cout << "Te acercas a la puerta del sotano oculto y se ve bastante tenebroso." << endl;
                            cout << "Quieres entrar al sotano aun sabiendo que te duele el estomago?" << endl;
                            cin >> respuesta;

                            if (respuesta)
                            {
                                cout << "Entraste al sotano y econtraste una colonia entera de las criauturas." << endl;
                                cout << "Debido al dolor de estomago que tenias quedaste inmovil y las criaturas te comieron poco a poco." << endl;
                                cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                                return 0;
                            }
                            else
                            {
                                cout << "Impactado por la situacion, no decides entrar y decides ir a buscar ayuda." << endl;
                                cout << "Primero acudes con los maestros y alumnos de la escuela pero ellos no te creyeron." << endl;
                                cout << "Vas en busca de la policia para contarles lo sucedido pero en el camino ya es muy tarde..." << endl;
                                cout << "Las criaturas se han reproducido y han invadido toda la ciudad." << endl;
                                cout << "Tu historia a terminado aqui, debiste tomar mejor tus desiciones." << endl;

                                return 0;
                            }
                        }
                        else
                        {

                            cout << "Al no seguir el rastro de la criatura decides ir a buscar ayuda nuevamente para mostrarles el rastro." << endl;
                            cout << "Al hablarles a las personas sobre lo sucedido piensan que es una simple broma otra vez, pero los guias hasta el salon donde esta el rastro." << endl;
                            cout << "Al entrar se percatan de que no hay ningun rastro y dicen que solo hiciste que perdieran su tiempo." << endl;
                            cout << "Confundido por la situacion decides ignorar todo lo ocurrido y te diriges a la oficina del coordinador por el dolor de estomago." << endl;
                            cout << "Ya hablando con el coordinador, te recomienda ir a tu casa para que descanses y te sientas mejor." << endl;
                            cout << "Pero aun seguias preocupado por la criatura y no sabias si de verdad irte a tu casa." << endl;
                            cout << "Quieres irte a tu casa?" << endl;
                            cin >> respuesta;

                            if (respuesta == 1)
                            {
                                cout << "Decides ir a tu casa sin tener que preocuparte por las criaturas." << endl;
                                cout << "Todo siguio normal y nada a ocurrido." << endl;
                                cout << "Por ahora estas a salvo..." << endl;

                                return 0;
                            }
                            else
                            {
                                cout << "Aun por la preocupacion decides quedarte a investigar un poco." << endl;
                                cout << "No encontraste nada por mas que buscaste." << endl;
                                cout << "Asi que decides olvidar lo sucedido y seguir con tu vida." << endl;
                                cout << "Por ahora estas a salvo..." << endl;

                                return 0;
                            }




                        }
                    }
                }
                else
                {
                    cout << "Decides ya no investigar los sonidos y continuas con tu vida tratando de olvidar los sonidos." << endl;
                    cout << "Debido a eso todo sigue normal hasta ahora..." << endl;
                    cout << "Por el momento hay paz y tranquilidad." << endl;

                    return 0;
    
                }
            }
        }



    }



}


