//add include statements
#include "func.h"
//add function code here


double get_gc_content(const std::string& dna) {
    int count = 0;
    for(char c : dna) {
        if(c == 'G' || c == 'C') {
            count++;
        }
    }
    return static_cast<double>(count) / dna.size();
}

std::string get_reverse_string(std::string dna) {
    int n = dna.size();
    for(int i = 0; i < n / 2; i++) {
        char temp = dna[i];
        dna[i] = dna[n - i - 1];
        dna[n - i - 1] = temp;
    }
    for(char& c : dna) {
        switch(c) {
            case 'A':
                c = 'T';
                break;
            case 'T':
                c = 'A';
                break;
            case 'C':
                c = 'G';
                break;
            case 'G':
                c = 'C';
                break;
        }
    }
    return dna;
}

std::string get_dna_complement(std::string dna) {
    for(char& c : dna) {
        switch(c) {
            case 'A':
                c = 'T';
                break;
            case 'T':
                c = 'A';
                break;
            case 'C':
                c = 'G';
                break;
            case 'G':
                c = 'C';
                break;
        }
    }
    return dna;

}