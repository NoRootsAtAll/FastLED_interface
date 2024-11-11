//
// Created by Damian on 04.08.2024.
//

#ifndef NOROOTSATALL_LED_CONFIG_H
#define NOROOTSATALL_LED_CONFIG_H

#include "pixeltypes.h"

struct CRGBWTW {
    union {
        struct {
            union {
                uint8_t g;
                uint8_t green;
            };
            union {
                uint8_t r;
                uint8_t red;
            };
            union {
                uint8_t b;
                uint8_t blue;
            };
            union {
                uint8_t w;
                uint8_t white;
            };
            union {
                uint8_t cw;
                uint8_t coldwhite;
            };
            union {
                uint8_t a;
                uint8_t amber;
            };
            union {
                uint8_t ww;
                uint8_t warmwhite;
            };
        };
        uint8_t raw[7];
    };

    CRGBWTW() {}

    CRGBWTW(uint8_t rd, uint8_t grn, uint8_t blu, uint8_t wht) {
        r = rd;
        g = grn;
        b = blu;
        w = wht;
    }

    inline void operator=(const CRGB c) __attribute__((always_inline)) {
        this->r = c.r;
        this->g = c.g;
        this->b = c.b;
        this->w = 0;
        this->cw = 0;
        this->ww = 0;
        this->a = 0;
    }

};

struct CRGBW {
    union {
        struct {
            union {
                uint8_t g;
                uint8_t green;
            };
            union {
                uint8_t r;
                uint8_t red;
            };
            union {
                uint8_t b;
                uint8_t blue;
            };
            union {
                uint8_t w;
                uint8_t white;
            };
        };
        uint8_t raw[4];
    };

    CRGBW() {}

    CRGBW(uint8_t rd, uint8_t grn, uint8_t blu, uint8_t wht) {
        r = rd;
        g = grn;
        b = blu;
        w = wht;
    }

    inline void operator=(const CRGB c) __attribute__((always_inline)) {
        this->r = c.r;
        this->g = c.g;
        this->b = c.b;
        this->w = 0;
    }

};


#endif //NOROOTSATALL_LED_CONFIG_H
