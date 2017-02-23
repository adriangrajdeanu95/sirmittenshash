 #include<fstream>


    struct req_description
    {
        int video;
        int endpoint;
        int requests;
        int total_lat; //va fi calculat la citire
    };

    struct cache
    {
        int videos[10000];
        int size_left;
        int endpoints[1000];
    };

    struct endpoint
    {
        int latency;
        int cache[1000];
        int cache_latency[1000];
    };

    ifstream f("input.in");
    ofstream g("output.out");
