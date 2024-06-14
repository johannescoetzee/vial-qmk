#pragma once
#include <stdlib.h>

#define GROUP_COUNT 4
#define GROUP_SIZE 7

enum layers {
    DVK = 0,
    GDV,
    SBB,
    SC2,
    GDM,
    GDN,
    NAV,
    NUM,
    LSM,
    RSM,
    FUN,
    DRS,
    LAST
};

typedef struct layer_group {
    char *name;
    int layers[GROUP_SIZE];
} LayerGroup;

typedef struct {
    int current;
    int size;
    LayerGroup groups[GROUP_COUNT];
} GroupRingBuffer;

