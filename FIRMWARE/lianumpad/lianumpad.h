
#pragma once

#include "quantum.h"

#define LAYOUT_ortho_4x4( \
    k00, k01, k02, k03, \
    k10, k11, k12, k13, \
    k20, k21, k22, k23, \
    k30, k31, k32, k33, \
    k40, k41, k42, k43 \
) \
{ \
    { k00, k01, k02, k03 , KC_NO}, \
    { k10, k11, k12, k13 , KC_NO}, \
    { k20, k21, k22, k23 , KC_NO}, \
    { k30, k31, k32, k33 , KC_NO}, \
    { k40, k41, k42, k43 , KC_NO}, \
}
