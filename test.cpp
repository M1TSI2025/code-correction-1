#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "main.cpp" // Inclut le code de l'étudiant

TEST_CASE("Test de la fonction sommeTableau", "[somme]") {
    // Test 1: Tableau normal
    std::vector<int> tableau1 = {1, 2, 3};
    REQUIRE(sommeTableau(tableau1) == 6);

    // Test 2: Tableau vide
    std::vector<int> tableau2 = {};
    REQUIRE(sommeTableau(tableau2) == 0);

    // Test 3: Tableau avec des négatifs
    std::vector<int> tableau3 = {-1, 0, 1};
    REQUIRE(sommeTableau(tableau3) == 0);
}
