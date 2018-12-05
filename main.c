#include <stdio.h>

#define LAUFZEIT 10
#define GRUNDKAPITAL 1000
#define ZINS 5


int main() {
    int jahr;
    double kapital = GRUNDKAPITAL;
    printf("Zinstabelle fuer Grundkapital %7.2f EUR \n",kapital);
    printf("Kapitalstand zum Jahresende:\n");
    for (jahr =1; jahr <=LAUFZEIT; jahr ++) {
        printf("\nJahr: %2d\t", jahr);
        kapital = kapital + ( kapital /100 * ZINS );
        printf("Kapital: %7.2fEUR",kapital);
    }
    printf("\n\nAus %7.2f EUR Grundkapital\n",GRUNDKAPITAL);
    printf("wurden in %d Jahren %7.2f EUR\n",LAUFZEIT ,kapital);
    return 0;
}
