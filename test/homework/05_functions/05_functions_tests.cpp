#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


int main() {
    // Test get_gc_content
    TEST_CASE(get_gc_content("AGCTATAG") == 0.375);
    TEST_CASE(get_gc_content("CGCTATAG") == 0.50);

    // Test get_reverse_string
   TEST_CASE(get_reverse_string("AGCTATAG") == "GATATCGA");
    TEST_CASE(get_reverse_string("CGCTATAG") == "GATATCGC");

    // Test get_dna_complement
    TEST_CASE(get_dna_complement("AAAACCCGGT") == "ACCGGGTTTT");
    TEST_CASE(get_dna_complement("CCCGGAAAAT") == "ATTTTCCGGG");

    return 0; // Success
}