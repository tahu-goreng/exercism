#include "rna_transcription.h"

namespace rna_transcription {
    std::string to_rna(const std::string& dna){
        std::string rna{};
        for (const char& d:dna){
            if (d=='G'){rna+='C';}
            if (d=='C'){rna+='G';}
            if (d=='T'){rna+='A';}
            if (d=='A'){rna+='U';}
        }
        return rna;
    }

    char to_rna(const char& dna){
        if (dna=='G'){return'C';}
        if (dna=='C'){return'G';}
        if (dna=='T'){return'A';}
        if (dna=='A'){return'U';}
        return{};
    }
}  // namespace rna_transcription
