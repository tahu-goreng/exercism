#include "rna_transcription.h"

namespace rna_transcription {
    std::string to_rna(const std::string& dna){
        std::string rna{};
        for (const char& d:dna){
            rna += to_rna(d);
        }
        return rna;
    }

    char to_rna(const char& dna){
        switch (dna){
        case ('G'):
            return 'C';
        case ('C'):
            return 'G';
        case ('T'):
            return 'A';
        case ('A'):
            return 'U';
        }
        return{};
    }
}  // namespace rna_transcription
