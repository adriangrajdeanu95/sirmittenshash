#include <fstream>
#include "mainstruct.h"
#include "readit.h"

#define MAXREQ 1000000

using namespace std;

void init_cache(endpoint myep[], cache mycache[], int c, int cs, int e)
{
    for (int i=0; i<c; i++)
    {
        mycache[i].size_left = cs;
        for (int j=0; i<10000; i++)
        {
            mycache[i].videos[j]=0;
        }
        int j=0;
        for (int k1=0; k1<e; k1++)
        {
            for (int k2 = 0; k2 < myep[k1].cache_nr; k2++)
            {
                if(myep[k1].cache[k2]==i)
                {
                    mycache[i].endpoints[j] = k1;
                    j++;
                }
            }
        }
    }

}

int main()
{
    req_description current_requests[MAXREQ];
    cache current_cache[1000];

    int v, e, r, c, cache_size;
    int videos[10000];

    endpoint current_endpoints[1000];

    citire(&v, &e, &r, &c, &cache_size, videos, current_endpoints, current_requests);
    init_cache(current_endpoints, current_cache, c, cache_size, e);
    return 0;
}
