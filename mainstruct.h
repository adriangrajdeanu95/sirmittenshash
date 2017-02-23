    struct req_description{
        int video;
        int endpoint;
        int requests;
        int total_lat; //va fi calculat la citire
        };

    struct cache{
        int videos[10000];
        int size_left;
        int endpoints[1000];
        };

