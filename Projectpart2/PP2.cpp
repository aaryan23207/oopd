#include "ProjectQ6.h"
int main() {
    CSVCombiner csvCombiner("spectrumRequest.csv", "MVNOSpectrum.csv", "combined_sorted.csv");
    csvCombiner.combineAndSortCSV();
    q4 a;
    a.read1("spectrumRange.csv","subscribers.csv","combined_sorted.csv");
    return 0;

}
