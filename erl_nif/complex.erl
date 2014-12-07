

-module(complex).

-export([init/0, foo/1, min/2]).

init() ->
	erlang:load_nif("./complex", 1).

foo(A) ->
	"Nif not loaded!".

min(_, _) ->
	"nif not loaded!".

test() ->
    "hello".
