//
//  niftest.c
//  erl_nif
//
//  Created by eric on 14/12/7.
//  Copyright (c) 2014年 eric. All rights reserved.
//

//#include <stdio.h>

#include "erl_nif.h"

static ERL_NIF_TERM
hello(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]){
    return enif_make_string(env, "hello world!", ERL_NIF_LATIN1);
}

static ERL_NIF_TERM
foo(ErlNifEnv *env, int argc, const ERL_NIF_TERM argv[]){
    return enif_make_string(env, "what the fuck is this", ERL_NIF_LATIN1);
}

static ErlNifFunc nif_funcs[] = {
    {"hello", 0, hello},
    {"foo", 0, foo}
};

ERL_NIF_INIT(niftest, nif_funcs, NULL, NULL, NULL, NULL)

