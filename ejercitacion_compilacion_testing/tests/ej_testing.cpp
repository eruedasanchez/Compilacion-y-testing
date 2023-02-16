#include "gtest-1.8.1/gtest.h"
#include "../src/Libreta.h"
#include "../src/Truco.h"
#include <map>
#include <cmath>

using namespace std;

/* Ejercicio 4 */
TEST(Aritmetica, suma) {
    int calculado = 15 + 7;
    int esperado = 22;
    EXPECT_EQ(calculado, esperado);
}

/* Ejercicio 5 */
TEST(Aritmetica, potencia){
    float potencia = pow(10,2);
    int esperado = 100;
    EXPECT_EQ(potencia, esperado);
}

/* Ejercicio 6 */
TEST(Diccionario, obtener){
    map<int, int> dicc = map<int, int>({{1, 7}, {2, 5}, {3, 8}});
    EXPECT_EQ(dicc[2], 5);

}

/* Ejercicio 7 */
TEST(Diccionario, definir){
    map<int, int> dicc = map<int, int>({{1, 7}, {2, 5}, {3, 8}});
    int definidaClaveOcho = dicc.count(8);
    EXPECT_EQ(definidaClaveOcho, 0);
    /* Ahora defino la clave 8 con su valor asociado */
    dicc[8] = 4;
    definidaClaveOcho = dicc.count(8);
    EXPECT_EQ(definidaClaveOcho, 1);
}




/* Ejercicio 8 */

/* Ejercicios 9 */