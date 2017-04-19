/* Matthew Blanchard
 * ECE 331
 * 2/16/2017
 * Title: encoding.h
 * Description: Declaration for encoding.c
 */

#include <linux/types.h>

struct encoding {
    int size;
    u32 code;
};

extern const struct encoding morse[256];