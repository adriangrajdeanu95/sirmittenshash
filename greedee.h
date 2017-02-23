#include "mainstruct.h"

req_description current_requests[MAXREQ];
    cache current_cache[1000];

    int v, e, r, c, cache_size;
    int videos[10000];

    endpoint current_endpoints[1000];

void GREEDEE(int *v, int *e, int *r, int *c, int *cache_size, endpoint current_endpoints[], cache current_cache[], req_description current_requests[])
{
    int i,j,h,k,l,vs,cs,w;

    for (i=0; i<(*r); i++)
    {
        w = current_requests[i].video;
        j = current_requests[i].endpoint;
        vs = videos[current_requests[i].video];
        for (k=0; k<(current_endpoints[j].cache_nr); k++)
        {
            h = current_endpoints[j].cache[k];
            if (vs < current_cache[h].size_left)
            {
                if (current_cache[h].videos[w] == 0)
                {
                    current_cache[h].videos[w] = 1;
                    current_cache[h].size_left -= videos[w];
                    k=1000;
                }
            }
        }
    }

}

int caches_used(int *c, int *cache_size, cache current_cache[])
{
    int nr=0,i;
    for (i=0; i<(*c); i++)
    {
        if (current_cache[i].size_left < *cache_size)
            nr ++;
    }
    return nr;
}