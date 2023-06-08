#include <stdio.h>
#include <stdlib.h>
#include <chrono>

int main(){
    std::chrono::hign_resolution_clock::time_point t1 = std::chrono::high_resolution

    //use la herramienta "perf" para medir las fallas de cache durante la ejecucion
    str::string command = "perf stat -e cache-misses";
    command += "librooffice --write";

    str::system:(command.c_str());

    std::chrono::high_resolution_clock::time_point t2=std::chrono::high_resolution_clock::now();

    //Calcular la diferencia horaria y la latencia en milisegundos
    std::chrono::duration<double, std::milli> time_span = t2 - t1; 
    double latency =time_span.count();
    double cycles = latency * 1000000;

    std::count <<"Latencia: " << latency << "milisegundos" <<std::endl;
    std::coun <<"Ciclos de reloj tomados: " << cycles << std::endl;
    return 0;

}


