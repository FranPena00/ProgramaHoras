
/*Se debe calcular el tiempo trabajado de una persona, mostrando en horas, minutos y segundos, considerando lo siguiente.
 Se sabe la hora, minutos y segundos de entrada y las horas, minutos y segundos de salida del trabajo de esa persona,
 Todo ocurre el mismo día, por lo que la hora de salida es igual o mayor a la hora de entrada, considerar el horario a 24 horas.*/

#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    int hora, minuto, segundo, horaF, minutoF, segundoF;
    int horaTrabajada, minutosTrabajados, segundosTrabajados = 0;
    
    cout<<"****Sistema de horario 24 horas****\n";
    cout << "Ingrese hora, minutos y segundos de entrada: \n";
    cin>>hora>>minuto>>segundo;
    hora *= 3600;
    minuto *=60;
    
    int horaInicial = hora + minuto + segundo;
    
    cout << "Ingrese hora, minutos y segundos de salida: \n";
    cin>>horaF>>minutoF>>segundoF;
    horaF *=3600;
    minutoF *=60;
    int horaFinal = horaF + minutoF + segundoF;
    
    horaTrabajada = horaFinal - horaInicial;
   
    
    int horas = horaTrabajada/3600;
    horaTrabajada %= 3600;
    minutosTrabajados = horaTrabajada / 60;
    segundosTrabajados = horaTrabajada % 60;
    
    cout<<"tu trabajaste: "<<horas<<":"<<minutosTrabajados<<":"<<segundosTrabajados<<"\n";
    
    
    
    return 0;
}
