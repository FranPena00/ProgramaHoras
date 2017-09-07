
/*Se debe calcular el tiempo trabajado de una persona, mostrando en horas, minutos y segundos, considerando lo siguiente.
 Se sabe la hora, minutos y segundos de entrada y las horas, minutos y segundos de salida del trabajo de esa persona,
 Todo ocurre el mismo día, por lo que la hora de salida es igual o mayor a la hora de entrada, considerar el horario a 24 horas.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, const char * argv[])
{
    int hora, minuto, segundo, horaF, minutoF, segundoF,var;
    int horaTrabajada, minutosTrabajados, segundosTrabajados = 0;

    cout<<"****Sistema de horario 24 horas****\n";
    cout << "Ingrese hora, minutos y segundos de entrada: \n";
    cin>>hora;
    while (hora < 0 || hora > 23){

        cout << "Error. Ingrese una hora correcta: " << endl;

        cin >> hora;

    }
    system("cls");
    cout<<"****Sistema de horario 24 horas****\n";
    cout << "Ingrese hora, minutos y segundos de entrada: \n";
    cout << hora << endl;

    cin >> minuto;

    while (minuto < 0 || minuto > 59){

        cout << "Error. Ingrese minutos correctos: " << endl;

        cin >> minuto;

    }
    system("cls");
    cout<<"****Sistema de horario 24 horas****\n";
    cout << "Ingrese hora, minutos y segundos de entrada: \n";
    cout << hora << endl;
    cout << minuto << endl;
    cin >> segundo;

    while (segundo < 0 || segundo > 59){

        cout << "Error. Ingrese segundos correctos: " << endl;

        cin >> segundo;

    }
    system("cls");
    cout<<"****Sistema de horario 24 horas****\n";
    cout << "Ingrese hora, minutos y segundos de entrada: \n";
    cout << hora << endl;
    cout << minuto << endl;
    cout << segundo << endl;

    system("cls");

    hora *= 3600;
    minuto *=60;

    int horaInicial = hora + minuto + segundo;
     cout<<"****Sistema de horario 24 horas****\n";
    cout << "Ingrese hora, minutos y segundos de salida: \n";
    cin>>horaF;
    while (horaF < 0 || horaF > 23){

        cout << "Error. Ingrese una hora correcta: " << endl;

        cin >> horaF;

    }
    system("cls");
    cout<<"****Sistema de horario 24 horas****\n";
    cout << "Ingrese hora, minutos y segundos de salida: \n";
    cout << horaF << endl;

    cin >> minutoF;

    while (minutoF < 0 || minutoF > 59){

        cout << "Error. Ingrese minutos correctos: " << endl;

        cin >> minutoF;

    }
    system("cls");
    cout<<"****Sistema de horario 24 horas****\n";
    cout << "Ingrese hora, minutos y segundos de salida: \n";
    cout << horaF << endl;
    cout << minutoF << endl;
    cin >> segundoF;

    while (segundoF < 0 || segundoF > 59){

        cout << "Error. Ingrese segundos correctos: " << endl;

        cin >> segundoF;

    }
    system("cls");
    cout<<"****Sistema de horario 24 horas****\n";
    cout << "Ingrese hora, minutos y segundos de salida: \n";
    cout << horaF << endl;
    cout << minutoF << endl;
    cout << segundoF << endl;
    horaF *=3600;
    minutoF *=60;


    int horaFinal = horaF + minutoF + segundoF;

    if (horaFinal < horaInicial){

        var = 86400 - horaInicial;

        var = var + horaFinal;

        horaTrabajada = var;


    }else{


    horaTrabajada = horaFinal - horaInicial;

    }

    int horas = horaTrabajada/3600;
    horaTrabajada %= 3600;
    minutosTrabajados = horaTrabajada / 60;
    segundosTrabajados = horaTrabajada % 60;

    cout<<"tu trabajaste: "<<horas<<":"<<minutosTrabajados<<":"<<segundosTrabajados<<"\n";



    return 0;
}
