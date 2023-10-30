#include "Projectq1-5.h"
int main()
{
  Q5 a;
 bool read1Result = false;

    a.read1("subscribers.csv", read1Result);

    if (!read1Result) {
        a.read2("MVNOSpectrum.csv");
    }

}