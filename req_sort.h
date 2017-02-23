#include "mainstruct.h"

void sort_req_initial(int *r,req_description current_requests[])
{
    int i,j;
    req_description aux;
    for (i=0; i<(*r)-1; i++)
    {
        for (j=i+1; j<(*r); j++)
        {
            if (current_requests[i].total_lat < current_requests[j].total_lat)
            aux = current_requests[i];
            current_requests[i] = current_requests[j];
            current_requests[j] = aux;
        }
    }
}