#define CATCH_CONFIG_MAIN
#include "unit_test_framework.hpp"
#include "exercice.hpp" // Inclut le code de l'étudiant

TEST(test_sommeTableau) {
    // Test 1: Tableau normal
    std::vector<int> tableau1 = {1, 2, 3};
    ASSERT_TRUE(sommeTableau(tableau1) == 6);

    // Test 2: Tableau vide
    std::vector<int> tableau2 = {};
    ASSERT_TRUE(sommeTableau(tableau2) == 0);

    // Test 3: Tableau avec des négatifs
    std::vector<int> tableau3 = {-1, 0, 1};
    ASSERT_TRUE(sommeTableau(tableau3) == 0);
}

TEST_MAIN()
