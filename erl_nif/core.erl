
-module(core).

-export([append/0, append1/1, append2/1]).

append() ->
    [a,b] ++ [1,2].

append1(L) ->
    [1,2] ++ L.

append2(L) ->
    L ++ [1,2].
