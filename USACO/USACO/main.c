/*
 ID: g7733pf1
 LANG: C
 TASK: ride
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    FILE *fin = fopen ("ride.in", "r");
    FILE *fout = fopen ("ride.out", "w");
    char a[7];
    char b[7];
    fscanf (fin, "%s %s", a,b);	/* the two input integers */
    printf("a:%s, b:%s\n",a,b);
    long result1 = 1;
    long result2 = 1;
    int j = 0;
    short aDidEnd = 0;
    short bDidEnd = 0;
    while (j<7) {
        if (a[j] == '\0' || aDidEnd == 1) {
            aDidEnd = 1;
            printf("aEnded");
        }
        else{
            result1 *= (a[j]-64);
            printf("a[j]-64 = %d\n",a[j]-64);

        }
        if (b[j] == '\0' || bDidEnd == 1) {
            bDidEnd = 1;
            printf("bEnded");
        }
        else{
            result2 *= (b[j]-64);
            printf("b[j]-64 = %d\n",b[j]-64);
        }
        j++;
    }
    
    if ((result1%47)==(result2%47)) {
        printf("GO\n");
        fprintf (fout, "%s\n", "GO");
    }
    else
    {
        printf("STAY\n");
        fprintf (fout, "%s\n", "STAY");
    }

    return 0;
}
