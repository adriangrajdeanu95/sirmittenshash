#include <fstream>
#include "mainstruct.h"
#include "readit.h"

#define MAXREQ 1000000

using namespace std;

int main()
{
    req_description current_requests[MAXREQ];
    cache current_cache[1000];

    int v, e, r, c, cache_size;
    int videos[10000];

    endpoint current_endpoints[1000];

    citire(&v, &e, &r, &c, &cache_size, videos, current_endpoints, current_requests);

    return 0;
}
