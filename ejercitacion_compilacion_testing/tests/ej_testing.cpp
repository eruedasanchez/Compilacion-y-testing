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
TEST(Aritmetica, potencia_general){
    for (int i = -5; i <= 5; i++) {
        if (i != 0) {
            EXPECT_EQ(pow(i, 2), i * i);
        }
    }
}

/* Ejercicio 7 */
TEST(Diccionario, obtener){
    map<int, int> dicc = map<int, int>({{1, 7}, {2, 5}, {3, 8}});
    EXPECT_EQ(dicc[2], 5);

}

/* Ejercicio 8 */
TEST(Diccionario, definir){
    map<int, int> dicc = map<int, int>({{1, 7}, {2, 5}, {3, 8}});
    int definidaClaveOcho = dicc.count(8);
    EXPECT_EQ(definidaClaveOcho, 0);
    /* Ahora defino la clave 8 con su valor asociado */
    dicc[8] = 4;
    definidaClaveOcho = dicc.count(8);
    EXPECT_EQ(definidaClaveOcho, 1);
}

/* Ejercicio 9 */
TEST(Truco, inicio){
    Truco t;
    EXPECT_EQ(t.puntaje_j1(), 0);
    EXPECT_EQ(t.puntaje_j2(), 0);
}

/* Ejercicio 10 */
TEST(Truco, buenas){
    Truco t;
    EXPECT_EQ(t.puntaje_j1(), 0);
    EXPECT_FALSE(t.buenas(1));

    for(int i = 0; i < 15; i++){
        t.sumar_punto(1);
    }
    EXPECT_EQ(t.puntaje_j1(), 15);
    EXPECT_FALSE(t.buenas(1));

    t.sumar_punto(1);
    EXPECT_TRUE(t.buenas(1));

    t.sumar_punto(1);
    t.sumar_punto(1);
    EXPECT_TRUE(t.buenas(1));
}


