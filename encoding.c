/* Matthew Blanchard
 * ECE 331
 * 2/18/2017
 * Title: encoding.c
 * Description: Morse encodings of all 256 ASCII characters. Each bit represents
 *         one time unit, where '1' is high and '0' is low
 * Generated by encoding.pl
 */

#include "encoding.h"

const unsigned int morse[256] = {
        0b1011101110111,                // 0
        0b11101011101,                  // 1
        0b11101110101,                  // 2
        0b111011101110111,              // 3
        0b10101110101,                  // 4
        0b1010111010111,                // 5
        0b1010111011101,                // 6
        0b10111010101,                  // 7
        0b101110101110111,              // 8
        0b1011101110101,                // 9
        0b101110111011101,              // 10
        0b1110101011101,                // 11
        0b111010101110111,              // 12
        0b1110101110101,                // 13
        0b111010111010111,              // 14
        0b111010111011101,              // 15
        0b11101011101110111,            // 16
        0b111011101010111,              // 17
        0b111011101011101,              // 18
        0b11101110101110111,            // 19
        0b11101110111010111,            // 20
        0b10101010101,                  // 21
        0b1010101010111,                // 22
        0b1010101011101,                // 23
        0b101010101110111,              // 24
        0b1010101110101,                // 25
        0b101010111010111,              // 26
        0b101010111011101,              // 27
        0b1010111010101,                // 28
        0b101011101010111,              // 29
        0b101011101011101,              // 30
        0b10101110101110111,            // 31
        0b10101110111010111,            // 32
        0b1110111010111010111,          // 33
        0b101110101011101,              // 34
        0b10101110111011101,            // 35
        0b11101010111010101,            // 36
        0b1010111011101110111,          // 37
        0b10101011101,                  // 38
        0b1011101110111011101,          // 39
        0b101110111010111,              // 40
        0b1110101110111010111,          // 41
        0b1011101010101,                // 42
        0b1011101011101,                // 43
        0b1110111010101110111,          // 44
        0b111010101010111,              // 45
        0b11101011101011101,            // 46
        0b1011101010111,                // 47
        0b1110111011101110111,          // 48
        0b11101110111011101,            // 49
        0b111011101110101,              // 50
        0b1110111010101,                // 51
        0b11101010101,                  // 52
        0b101010101,                    // 53
        0b10101010111,                  // 54
        0b1010101110111,                // 55
        0b101011101110111,              // 56
        0b10111011101110111,            // 57
        0b10101011101110111,            // 58
        0b10111010111010111,            // 59
        0b101110101010111,              // 60
        0b1110101010111,                // 61
        0b10111010101110111,            // 62
        0b101011101110101,              // 63
        0b10111010111011101,            // 64
        0b11101,                        // 65
        0b101010111,                    // 66
        0b10111010111,                  // 67
        0b1010111,                      // 68
        0b1,                            // 69
        0b101110101,                    // 70
        0b101110111,                    // 71
        0b1010101,                      // 72
        0b101,                          // 73
        0b1110111011101,                // 74
        0b111010111,                    // 75
        0b101011101,                    // 76
        0b1110111,                      // 77
        0b10111,                        // 78
        0b11101110111,                  // 79
        0b10111011101,                  // 80
        0b1110101110111,                // 81
        0b1011101,                      // 82
        0b10101,                        // 83
        0b111,                          // 84
        0b1110101,                      // 85
        0b111010101,                    // 86
        0b111011101,                    // 87
        0b11101010111,                  // 88
        0b1110111010111,                // 89
        0b10101110111,                  // 90
        0b101110101110101,              // 91
        0b1011101011101110111,          // 92
        0b101110111010101,              // 93
        0b10111011101010111,            // 94
        0b11101011101110101,            // 95
        0b10111011101011101,            // 96
        0b1011101110101110111,          // 97
        0b10111011101110101,            // 98
        0b1011101110111010111,          // 99
        0b101110111011101110111,        // 100
        0b1110101010101,                // 101
        0b111010101011101,              // 102
        0b11101010101110111,            // 103
        0b111010101110101,              // 104
        0b11101010111010111,            // 105
        0b11101010111011101,            // 106
        0b1110101011101110111,          // 107
        0b111010111010101,              // 108
        0b11101011101010111,            // 109
        0b1110101110101110111,          // 110
        0b1110101110111011101,          // 111
        0b111010111011101110111,        // 112
        0b111011101010101,              // 113
        0b11101110101010111,            // 114
        0b11101110101011101,            // 115
        0b11101110101110101,            // 116
        0b1110111010111011101,          // 117
        0b111011101011101110111,        // 118
        0b11101110111010101,            // 119
        0b1110111011101010111,          // 120
        0b1110111011101011101,          // 121
        0b111011101110101110111,        // 122
        0b1110111011101110101,          // 123
        0b111011101110111010111,        // 124
        0b111011101110111011101,        // 125
        0b11101110111011101110111,      // 126
        0b1010101010101,                // 127
        0b101010101010111,              // 128
        0b101010101011101,              // 129
        0b10101010101110111,            // 130
        0b101010101110101,              // 131
        0b10101010111010111,            // 132
        0b10101010111011101,            // 133
        0b1010101011101110111,          // 134
        0b101010111010101,              // 135
        0b10101011101010111,            // 136
        0b10101011101011101,            // 137
        0b1010101110101110111,          // 138
        0b10101011101110101,            // 139
        0b1010101110111010111,          // 140
        0b1010101110111011101,          // 141
        0b101010111011101110111,        // 142
        0b101011101010101,              // 143
        0b10101110101010111,            // 144
        0b10101110101011101,            // 145
        0b1010111010101110111,          // 146
        0b10101110101110101,            // 147
        0b1010111010111010111,          // 148
        0b1010111010111011101,          // 149
        0b101011101011101110111,        // 150
        0b10101110111010101,            // 151
        0b1010111011101010111,          // 152
        0b1010111011101011101,          // 153
        0b101011101110101110111,        // 154
        0b1010111011101110101,          // 155
        0b101011101110111010111,        // 156
        0b101011101110111011101,        // 157
        0b10101110111011101110111,      // 158
        0b101110101010101,              // 159
        0b10111010101010111,            // 160
        0b10111010101011101,            // 161
        0b1011101010101110111,          // 162
        0b10111010101110101,            // 163
        0b1011101010111010111,          // 164
        0b1011101010111011101,          // 165
        0b101110101011101110111,        // 166
        0b10111010111010101,            // 167
        0b1011101011101010111,          // 168
        0b1011101011101011101,          // 169
        0b101110101110101110111,        // 170
        0b1011101011101110101,          // 171
        0b101110101110111010111,        // 172
        0b101110101110111011101,        // 173
        0b10111010111011101110111,      // 174
        0b10111011101010101,            // 175
        0b1011101110101010111,          // 176
        0b1011101110101011101,          // 177
        0b101110111010101110111,        // 178
        0b1011101110101110101,          // 179
        0b101110111010111010111,        // 180
        0b101110111010111011101,        // 181
        0b10111011101011101110111,      // 182
        0b1011101110111010101,          // 183
        0b101110111011101010111,        // 184
        0b101110111011101011101,        // 185
        0b10111011101110101110111,      // 186
        0b101110111011101110101,        // 187
        0b10111011101110111010111,      // 188
        0b10111011101110111011101,      // 189
        0b1011101110111011101110111,    // 190
        0b111010101010101,              // 191
        0b11101010101010111,            // 192
        0b11101010101011101,            // 193
        0b1110101010101110111,          // 194
        0b11101010101110101,            // 195
        0b1110101010111010111,          // 196
        0b1110101010111011101,          // 197
        0b111010101011101110111,        // 198
        0b1110101011101010111,          // 199
        0b1110101011101011101,          // 200
        0b111010101110101110111,        // 201
        0b1110101011101110101,          // 202
        0b111010101110111010111,        // 203
        0b111010101110111011101,        // 204
        0b11101010111011101110111,      // 205
        0b11101011101010101,            // 206
        0b1110101110101010111,          // 207
        0b1110101110101011101,          // 208
        0b111010111010101110111,        // 209
        0b1110101110101110101,          // 210
        0b111010111010111010111,        // 211
        0b111010111010111011101,        // 212
        0b11101011101011101110111,      // 213
        0b1110101110111010101,          // 214
        0b111010111011101010111,        // 215
        0b111010111011101011101,        // 216
        0b11101011101110101110111,      // 217
        0b111010111011101110101,        // 218
        0b11101011101110111010111,      // 219
        0b11101011101110111011101,      // 220
        0b1110101110111011101110111,    // 221
        0b11101110101010101,            // 222
        0b1110111010101010111,          // 223
        0b1110111010101011101,          // 224
        0b111011101010101110111,        // 225
        0b1110111010101110101,          // 226
        0b111011101010111010111,        // 227
        0b111011101010111011101,        // 228
        0b11101110101011101110111,      // 229
        0b1110111010111010101,          // 230
        0b111011101011101010111,        // 231
        0b111011101011101011101,        // 232
        0b11101110101110101110111,      // 233
        0b111011101011101110101,        // 234
        0b11101110101110111010111,      // 235
        0b11101110101110111011101,      // 236
        0b1110111010111011101110111,    // 237
        0b1110111011101010101,          // 238
        0b111011101110101010111,        // 239
        0b111011101110101011101,        // 240
        0b11101110111010101110111,      // 241
        0b111011101110101110101,        // 242
        0b11101110111010111010111,      // 243
        0b11101110111010111011101,      // 244
        0b1110111011101011101110111,    // 245
        0b111011101110111010101,        // 246
        0b11101110111011101010111,      // 247
        0b11101110111011101011101,      // 248
        0b1110111011101110101110111,    // 249
        0b11101110111011101110101,      // 250
        0b1110111011101110111010111,    // 251
        0b1110111011101110111011101,    // 252
        0b111011101110111011101110111,  // 253
        0b101010101010101,              // 254
        0b10101010101010111};           // 255