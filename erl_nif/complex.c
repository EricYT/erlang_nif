//
//  complex.c
//  erl_nif
//
//  Created by eric on 14/12/7.
//  Copyright (c) 2014年 eric. All rights reserved.
//

//#include <stdio.h>

#include "erl_nif.h"

extern int foo(int x);
extern int bar(int y);

extern int min(int, int);

static ERL_NIF_TERM foo_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]){
    int x, ret;
    if (!enif_get_int(env, argv[0], &x)) {
        return enif_make_badarg(env);
    }
    ret = foo(x);
    return enif_make_int(env, ret);
}

static ERL_NIF_TERM min_nif(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]){
    int x, y, ret;
    if (!enif_get_int(env, argv[0], &x) || !enif_get_int(env, argv[1], &y)) {
        return enif_make_badarg(env);
    }
    ret = min(x, y);
    return enif_make_int(env, ret);
}

static ErlNifFunc nif_funcs[] = {
    {"foo", 1, foo_nif},
    {"min", 2, min_nif}
};

ERL_NIF_INIT(complex, nif_funcs, NULL, NULL, NULL, NULL)