#include <stdio.h>
#include <math.h>
#include <float.h>
#include "projeto1.h"

    unsigned int definePontoDeAcesso (int n_antenas){
        float dist_max, dist_min, dist;
        double dX, dY;
        int antena, antena_compara, antena_dist_min;
        dist_min = FLT_MAX;

        for (antena = 0; antena < n_antenas; antena++)
        {
            for (dist_max = 0, antena_compara = 0; antena_compara < n_antenas; antena_compara++)
            {
                dX = pegaX(antena) - pegaX(antena_compara);
                dY = pegaY(antena) - pegaY(antena_compara);

                dist = sqrt(dX * dX + dY * dY);

                if (dist_max < dist)
                    dist_max = dist;
            }

            if (dist_max < dist_min)
            {
                dist_min = dist_max;
                antena_dist_min = antena;
            }
        }

            return ((int)dist_max>>24)+(int)antena_dist_min;
    }