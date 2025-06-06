#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../DeltaC/DeltaC_files.h"

void bl(char *dados, char *mestre)
{
    char novo_dados[51], erros[51];
    strcpy(novo_dados, "novo-");
    strcat(novo_dados, dados);
    strcpy(erros, "erros-");
    strcat(erros, dados);
    FILE *fm = DeltaC_openfile(mestre, "r"), *fd = DeltaC_openfile(dados, "r"), *fe = DeltaC_openfile(erros, "w"), *ft = DeltaC_openfile(novo_dados, "w");

    int cm, cd, rm, rd;
    char opm;
    double sm, sd;
    rm = fscanf(fm, "%d %c%lf", &cm, &opm, &sm);
    rd = fscanf(fd, "%d%lf", &cd, &sd);
    while ((rm == 3) && (rd == 2))
    { // nem dados, nem mestre esta vazio...
        if (cd == cm)
        {
            if (opm == 'D')
                fprintf(ft, "%d %.2f\n", cd, (sd + sm));
            else if ((opm == 'R') && (sm <= sd))
                fprintf(ft, "%d %.2f\n", cd, (sd - sm));
            else
            {
                fprintf(ft, "%d %.2f\n", cd, sd);
                fprintf(fe, "%d %c %.2f\n", cm, opm, sm);
            }
            rm = fscanf(fm, "%d %c%lf", &cm, &opm, &sm);
            rd = fscanf(fd, "%d%lf", &cd, &sd);
        }
        else if (cd < cm)
        { // conta sem transacao
            fprintf(ft, "%d %.2f\n", cd, sd);
            rd = fscanf(fd, "%d%lf", &cd, &sd);
        }
        else
        { //(cm < cd)
            if (opm == 'C')
                fprintf(ft, "%d %.2f\n", cm, sm);
            else
                fprintf(fe, "%d %c %.2f\n", cm, opm, sm);
            rm = fscanf(fm, "%d %c%lf", &cm, &opm, &sm);
        }
    }

    while (rm == 3)
    { // arquivo de dados ja acabou...
        if (opm == 'C')
            fprintf(ft, "%d %.2f\n", cm, sm);
        else
            fprintf(fe, "%d %c %.2f\n", cm, opm, sm);
        rm = fscanf(fm, "%d %c%lf", &cm, &opm, &sm);
    }

    while (rd == 2)
    { // arquivo mestre ja terminou...
        fprintf(ft, "%d %.2f\n", cd, sd);
        rd = fscanf(fd, "%d%lf", &cd, &sd);
    }
    fclose(fm);
    fclose(fd);
    fclose(fe);
    fclose(ft);
}