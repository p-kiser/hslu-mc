#include <stdio.h>

#define MIN(x,y) ((x) < (y) ? (x) : (y))
#define MAX(x,y) ((x) > (y) ? (x) : (y))
#define SWAP(t, x, y) { t tmp = x; x = y; y = tmp; }

#define DEBUG 1

#ifdef DEBUG
    #define DEBUGPRINT(_fmt, ...) \
            fprintf(stderr, "[file %s, line %d]: " \
            _fmt, __FILE__, __LINE__, __VA_ARGS__)
#else
    #define DEBUGPRINT(_fmt, ...)
#endif

int main() {
    int a = 5;
    int b = 8;
    printf("a=%d, b=%d\n",a,b);
    SWAP(int,a,b);
    printf("a=%d, b=%d\n",a,b);
    int x = 0;
    DEBUGPRINT("fehler hier, x=%d\n", x);

}