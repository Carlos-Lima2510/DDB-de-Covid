#include <iostream>
#include <string>
using namespace std;

// Algoritmo de DDB de Esquema Covid - 19  -  Carlos Alvarado Lima

int main(){

     std::string respuesta;

    std::cout << "Hay una persona con sintomas de COVID 19? ";
    std::cin >> respuesta;

    if (respuesta == "si"){
        std::cout << "Mantenga la calma" << std::endl;
        std::cout << "Hay una condicion cronica preexistente documentada que explica los sintomas? ";
        std::cin >> respuesta;
        std::cout << std::endl; 
        if (respuesta == "si"){
            std::cout << "Fue la persona identificada como contacto cercano los ultimos 14 dias? ";
            std::cin >> respuesta;
            std::cout << std::endl; 
            if (respuesta == "si"){
                std::cout << "El resultado de la prueba de covid fue positivo? ";
                std::cin >> respuesta;
                std::cout << std::endl; 
                    if (respuesta == "si"){
                        std::cout << "La persona puede y esta dispuesta a usar mascarilla los dias entre 6 a 10 dias? ";
                        std::cin >> respuesta;
                        std::cout << std::endl; 
                            if (respuesta == "si"){
                                std::cout << "Puede la persona proporcionar evidencia de un diagnostico negativo, de una muestra recolectada en el dia 5 o mas tarde? ";
                                std::cin >> respuesta;
                                std::cout << std::endl;
                                if (respuesta == "si"){
                                        std::cout << "Regresar en o despues de 6 dias a partir del comienzo de sintomas, si los sintomas han mejorado y han pasado mas de 24 horas sin fiebre y sin el uso de medicamentos para reducir fiebre \n - Desde el dia 6 al 10 debe usar mascarilla que se ajuste perfectamente sobre boca y nariz mientras se está en interiores y cuando esta con otras personas en lugares abiertos. \n - Se debe tener cuidado y asegurarse de que en los dias 6 - 10, las personas que han regresado del aislamiento no se acerquen a menos de 6 pies de distancia de una persona inmunocomprometida." << std::endl;
                                } else {
                                    std::cout << "Regresar o en despues de 11 dias a partir del comienzo de sintomas, si los sintomas han mejorado y han pasado 24 horas sin fiebre o sin el uso de medicamentos para reducir fiebre." << std::endl;
                                }                                                                 
                            } else {
                                std::cout << "Regresar o en despues de 11 dias a partir del comienzo de sintomas, si los sintomas han mejorado y han pasado 24 horas sin fiebre o sin el uso de medicamentos para reducir fiebre." << std::endl;
                            }                            
                    } else {
                        std::cout << "que tipo de prueba se le administro? (molecular o antigenos) ";
                        std::cin >> respuesta;
                        std::cout << std::endl; 
                            if (respuesta == "molecular"){
                                std::cout << "Fue la persona identificada con contacto cercano los ultimos 14 dias? ";
                                std::cin >> respuesta;
                                std::cout << std::endl; 
                                    if (respuesta == "si"){
                                        std::cout << "1. quedese en casa.... 2. luego use el arbol de decision para contacto cercano y cuarentena para determinar cuando se le permite regresar al trabajo o cuidado infantil";
                                    } else {
                                        std::cout << "Quedese en casa hasta que mejoren los sintomas, usualmente despues de 24 horas sin fiebre y sin uso de medicamentos para reducir fiebre";
                                    }
                            } else if (respuesta == "antigenos"){
                                std::cout << "Salio negativa la prueba molecular de seguimiento? (tomada dentro de 48 horas) ";
                                std::cin >> respuesta;
                                std::cout << std::endl; 
                                    if (respuesta == "si"){
                                        std::cout << "Fue la persona identificada con contacto cercano los ultimos 14 dias? ";
                                        std::cin >> respuesta;
                                        std::cout << std::endl; 
                                    if (respuesta == "si"){
                                        std::cout << "1. Quedese en casa.... 2. luego use el arbol de decision para contacto cercano y cuarentena para determinar cuando se le permite regresar al trabajo o cuidado infantil";
                                    } else {
                                        std::cout << "Quedese en casa hasta que mejoren los sintomas, usualmente despues de 24 horas sin fiebre y sin uso de medicamentos para reducir fiebre";
                                    }
                                    } else {
                                std::cout << "Puede la persona proporcionar evidencia de un diagnostico negativo, de una muestra recolectada en el dia 5 o mas tarde?";
                                std::cin >> respuesta;
                                std::cout << std::endl;
                                    if (respuesta == "si"){
                                        std::cout << "Regresar en o despues de 6 dias a partir del comienzo de sintomas, si los sintomas han mejorado y han pasado mas de 24 horas sin fiebre y sin el uso de medicamentos para reducir fiebre \n - Desde el dia 6 al 10 debe usar mascarilla que se ajuste perfectamente sobre boca y nariz mientras se está en interiores y cuando esta con otras personas en lugares abiertos. \n - Se debe tener cuidado y asegurarse de que en los dias 6 - 10, las personas que han regresado del aislamiento no se acerquen a menos de 6 pies de distancia de una persona inmunocomprometida." << std::endl;
                                    } else {
                                        std::cout << "Regresar o en despues de 11 dias a partir del comienzo de sintomas, si los sintomas han mejorado y han pasado 24 horas sin fiebre o sin el uso de medicamentos para reducir fiebre." << std::endl;
                                    } 
                                }
                            } 
                    }
            } else {
                std::cout << "Permitir el regreso a la escuela o trabajo " << std::endl;
            }
        } else {
            std::cout << "El resultado de la prueba de covid fue positivo? ";
            std::cin >> respuesta;
            std::cout << std::endl; 
                        if (respuesta == "si"){
                        std::cout << "La persona puede y esta dispuesta a usar mascarilla los dias entre 6 a 10 dias? ";
                        std::cin >> respuesta;
                        std::cout << std::endl; 
                            if (respuesta == "si"){
                                std::cout << "Puede la persona proporcionar evidencia de un diagnostico negativo, de una muestra recolectada en el dia 5 o mas tarde? ";
                                std::cin >> respuesta;
                                std::cout << std::endl;
                                    if (respuesta == "si"){
                                        std::cout << "Regresar en o despues de 6 dias a partir del comienzo de sintomas, si los sintomas han mejorado y han pasado mas de 24 horas sin fiebre y sin el uso de medicamentos para reducir fiebre \n - Desde el dia 6 al 10 debe usar mascarilla que se ajuste perfectamente sobre boca y nariz mientras se está en interiores y cuando esta con otras personas en lugares abiertos. \n - Se debe tener cuidado y asegurarse de que en los dias 6 - 10, las personas que han regresado del aislamiento no se acerquen a menos de 6 pies de distancia de una persona inmunocomprometida." << std::endl;
                                    } else {
                                        std::cout << "Regresar o en despues de 11 dias a partir del comienzo de sintomas, si los sintomas han mejorado y han pasado 24 horas sin fiebre o sin el uso de medicamentos para reducir fiebre." << std::endl;
                                    }                                
                            } else {
                                std::cout << "Regresar o en despues de 11 dias a partir del comienzo de sintomas, si los sintomas han mejorado y han pasado 24 horas sin fiebre o sin el uso de medicamentos para reducir fiebre." << std::endl;
                            }                            
                    } else {
                        std::cout << "Que tipo de prueba se le administro? (molecular o antigenos) ";
                        std::cin >> respuesta;
                        std::cout << std::endl; 
                            if (respuesta == "molecular"){
                                std::cout << "Fue la persona identificada con contacto cercano los ultimos 14 dias? ";
                                std::cin >> respuesta;
                                std::cout << std::endl; 
                                    if (respuesta == "si"){
                                        std::cout << "1. quedese en casa.... 2. luego use el arbol de decision para contacto cercano y cuarentena para determinar cuando se le permite regresar al trabajo o cuidado infantil";
                                    } else {
                                        std::cout << "Quedese en casa hasta que mejoren los sintomas, usualmente despues de 24 horas sin fiebre y sin uso de medicamentos para reducir fiebre";
                                    }
                            } else if (respuesta == "antigenos"){
                                std::cout << "Salio negativa la prueba molecular de seguimiento? (tomada dentro de 48 horas) ";
                                std::cin >> respuesta;
                                std::cout << std::endl; 
                                    if (respuesta == "si"){
                                        std::cout << "Fue la persona identificada con contacto cercano los ultimos 14 dias? ";
                                        std::cin >> respuesta;
                                        std::cout << std::endl; 
                                    if (respuesta == "si"){
                                        std::cout << "1. Quedese en casa.... 2. luego use el arbol de decision para contacto cercano y cuarentena para determinar cuando se le permite regresar al trabajo o cuidado infantil";
                                    } else {
                                        std::cout << "Quedese en casa hasta que mejoren los sintomas, usualmente despues de 24 horas sin fiebre y sin uso de medicamentos para reducir fiebre";
                                    }
                                    } else {
                                std::cout << "Puede la persona proporcionar evidencia de un diagnostico negativo, de una muestra recolectada en el dia 5 o mas tarde?";
                                std::cin >> respuesta;
                                std::cout << std::endl;
                                    if (respuesta == "si"){
                                        std::cout << "Regresar en o despues de 6 dias a partir del comienzo de sintomas, si los sintomas han mejorado y han pasado mas de 24 horas sin fiebre y sin el uso de medicamentos para reducir fiebre \n - Desde el dia 6 al 10 debe usar mascarilla que se ajuste perfectamente sobre boca y nariz mientras se está en interiores y cuando esta con otras personas en lugares abiertos. \n - Se debe tener cuidado y asegurarse de que en los dias 6 - 10, las personas que han regresado del aislamiento no se acerquen a menos de 6 pies de distancia de una persona inmunocomprometida." << std::endl;
                                    } else {
                                        std::cout << "Regresar o en despues de 11 dias a partir del comienzo de sintomas, si los sintomas han mejorado y han pasado 24 horas sin fiebre o sin el uso de medicamentos para reducir fiebre." << std::endl;
                                    } 
                                }
                            } 
                    }
        }
    } else {
        std::cout << "Hasta la proxima!! " << std::endl;
    }


    return 0;
}