#include <stdio.h>


struct place {
    long int lat;
    long int lon;
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    long int f;
};


long int distance(struct place p1, struct place p2) {
    return ((p1.lat - p2.lat) * (p1.lat - p2.lat));
}

int main() {
    struct place pl[3];

    pl[0].lat = 0;
    pl[0].lon = 0;
    pl[1].lat = 1;
    pl[1].lon = 1;
    pl[2].lat = 2;
    pl[2].lon = 2;
    
    (pl+1)->lat = 3;
    (pl+1)->lon = 3;

    printf("%ld", pl[1].lat);
    
    return distance(pl[0], pl[1]);
}