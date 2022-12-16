#ifndef TREEH
#define TREEH

enum Node_type {
    FICT = 0,
    NUM   = 1,
    VAR   = 2,
    IF    = 3;
    ELSE  = 4,
    WHILE = 5,
    OP    = 6,
    NEW   = 7,
    VAID  = 8,
    CALL  = 9,
    RET   = 10.
};

Struct Node {
    Node_type type;
    int       data;

    Node *left;
    Node *right;
};

#endif