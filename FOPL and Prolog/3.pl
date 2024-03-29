gcd(X, Y, G) :- X = Y, G is X.
gcd(X, Y, G) :-
  X < Y,
  Y1 is Y - X,
  gcd(X, Y1, G).
gcd(X, Y, G) :- X > Y, gcd(Y, X, G).
lcm(X,Y,G) :- gcd(X,Y,L),G is X*Y/L.