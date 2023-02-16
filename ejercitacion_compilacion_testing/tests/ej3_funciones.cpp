#include "gtest-1.8.1/gtest.h"

// #include "../src/Periodo.h"
#include "../src/Funciones.h"

/* Para que puedan los casos de test de este ejercicio realizamos el siguiente cambio en el CMakeLists.txt
 * Reemplzamos add_executable(ej3 tests/ej3_funciones.cpp
               src/Funciones.cpp src/Periodo.cpp src/Fecha.cpp src/Periodo.h src/Meses.h src/Funciones.h)
 * Por add_executable(ej3 tests/ej3_funciones.cpp
               src/Funciones.cpp)
 *
*/

TEST(fecha, ej1_bisiesto) {
 EXPECT_FALSE(esBisiesto(1));
 EXPECT_TRUE(esBisiesto(4));
 EXPECT_FALSE(esBisiesto(123));
 EXPECT_FALSE(esBisiesto(100));
 EXPECT_TRUE(esBisiesto(400));
 EXPECT_FALSE(esBisiesto(401));
}

TEST(fecha, ej2_diasEnMes) {
  EXPECT_EQ(diasEnMes(1, 1), 31);
  EXPECT_EQ(diasEnMes(1, 2), 28);
  EXPECT_EQ(diasEnMes(4, 2), 29);
  EXPECT_EQ(diasEnMes(1, 5), 31);
  EXPECT_EQ(diasEnMes(1, 6), 30);
  EXPECT_EQ(diasEnMes(1, 7), 31);
  EXPECT_EQ(diasEnMes(1, 8), 31);
  EXPECT_EQ(diasEnMes(1, 9), 30);
  EXPECT_EQ(diasEnMes(1, 11), 30);
  EXPECT_EQ(diasEnMes(1, 12), 31);
}
