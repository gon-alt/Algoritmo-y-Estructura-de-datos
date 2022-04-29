#include <stdio.h>
#include <stdlib.h>


//procedimiento para sumar tiempo con dias
//aximoas: el formato de la hora tiene que ser hasta 23 en los dos primeros digitos, hasta 59 en los dos digitos siguientes
//y 59 en los dos ultimos digitos
// el parametro de horas a sumarle a un horario puede superar 24 por que indica la cantidad de dias a sumar
long sumarHora(long h, long t);

long retornarMinutos(long tiempo);

long retornarSegundos(long tiempo);

long retornarHoras(long tiempo);

long sumaHoras(long t);

long sumaMinuto(long t);

long sumaSegundo(long t);

long sumaMinExtra(long segundos);

long sumarHoraExtra(long minutos);

long sumardiasExtra(long horas);



int main()
{
    long total;

    printf("Hello world!\n");

    total = sumarHora(142030,85000);

    printf("suma de horas: %d ",total);

    return 0;
}

long sumarHora(long h, long t){

    long total = 0;

    long segundoH;
    long minutoH;
    long horaH;
    long segundoT;
    long minutoT;
    long horaT;

    long segundoTotal = 0;
    long minutoTotal = 0;
    long horaTotal = 0;


    long diaExtra = 0;
    long minutoExtra = 0;
    long horaExtra = 0;

    //descomponemos tiempo de h
    segundoH = retornarSegundos(h);
    minutoH = retornarMinutos(h);
    horaH = retornarHoras(h);


    //descomponemos tiempo de t
    segundoT = retornarSegundos(t);
    minutoT = retornarMinutos(t);
    horaT = retornarHoras(t);

    //sumamos por separado las unidades de tiempo
    segundoTotal = segundoH + segundoT;
    minutoTotal = minutoH + minutoT;
    horaTotal = horaH + horaT;

    //sumamos el extra de cada unidad de tiempo
    diaExtra = sumardiasExtra(horaTotal);
    horaExtra = sumarHoraExtra(minutoTotal);
    minutoExtra = sumaMinExtra(segundoTotal);

    //volvemos a dar valor a las unidades de tiempo
    segundoTotal = sumaSegundo(segundoTotal);
    minutoTotal = sumaMinuto(minutoTotal);
    horaTotal = sumaHoras(horaTotal);

    //sumamos el total
    total = segundoTotal + minutoTotal + horaTotal + minutoExtra + horaExtra;

return total;

};

long retornarMinutos(long tiempo){

    long minutos = tiempo % 10000;
    minutos = minutos - retornarSegundos(tiempo);

    return minutos;

};

long retornarSegundos(long tiempo){

    long segundos = tiempo % 100;

    return segundos;

};


long retornarHoras(long tiempo){

    long hora = tiempo % 1000000;

    hora = hora - retornarMinutos(tiempo) - retornarSegundos(tiempo);

    return hora;

};


long sumardiasExtra(long horas){

    long dias = 0;

    while(horas>=240000){

        horas = horas - 240000;
        dias = dias + 1;

    }

    return dias;

};

long sumarHoraExtra(long minutos){

    long horas = 0;

    while(minutos >= 6000){

        minutos = minutos - 6000;
        horas = horas + 10000;
    }

    return horas;

};

long sumaMinExtra(long segundos){
    long minutos = 0;

   while(segundos >= 60){

        segundos = segundos - 60;
        minutos = minutos + 100;

    }

    return minutos;

};

// mismas funciones pero para retoranar unidades de tiempo con extra descontado

long sumaHoras(long horas){

    while(horas>=240000){

        horas = horas - 240000;
        //dias = dias + 1;

    }

    return horas;

};

long sumaMinuto(long minutos){

    while(minutos >= 6000){

        minutos = minutos - 6000;
        //horas = horas + 10000;
    }

    return minutos;

};

long sumaSegundo(long segundos){

   while(segundos >= 60){

        segundos = segundos - 60;
        //minutos = minutos + 1000;

    }

    return segundos;

};
