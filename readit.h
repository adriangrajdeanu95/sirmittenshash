#include "mainstruct.h"

void citire(int &v,int &e,int &r,int &c,int &cache_size,int videos,endpoint current_endpoints,req_description current_requests)
{
    ifstream f("input.in");
    int i,j;

    f >> v >> e >> r >> c >> cache_size;
    for (i=0; i<v; i++)
        f >> videos[i];

    for (i=0; i<e; i++)
    {
        f >> current_endpoints[i].latency >> current_endpoints[i].cache_nr;
        for (j=0; j<current_endpoints[i].cache_nr)
        {
            f >> current_endpoints[i].cache[j];
            f >> current_endpoints[i].chace_latency[j];
        }
    }

    for (i=0; i<r; i++)
    {
        f >> current_requests[i].video >> current_requests[i].endpoint >> current_requests[i].requests;
        current_requests[i].total_lat = videos[current_requests[i].video] * current_endpoints[current_requests[i].endpoint].latency;
        if (videos[current_requests[i].video] > cache_size)
        {
            i--;
        }
    }

    f.close();
}