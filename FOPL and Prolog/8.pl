% Predicate to solve the 8-Queen problem
solve_queens(Board) :-
    length(Board, 8),        % The board has 8 rows
    Board ins 1..8,          % The values in the board are between 1 and 8
    safe_queens(Board),      % Check if the queens are safe
    labeling([], Board).     % Label the board to find a solution

% Predicate to check if the queens are safe
safe_queens([]).
safe_queens([Q|Queens]) :-
    safe_queens(Queens, Q, 1),
    safe_queens(Queens).

% Helper predicate to check if the current queen is safe
safe_queens([], _, _).
safe_queens([Q|Queens], Q0, D0) :-
    Q0 #\= Q,                     % Queens are not in the same column
    Q0 + D0 #\= Q,                % Queens are not in the same diagonal (down-right)
    Q0 - D0 #\= Q,                % Queens are not in the same diagonal (up-right)
    D1 is D0 + 1,
    safe_queens(Queens, Q0, D1).

% Predicate to display the board
display_board([]).
display_board([Q|Queens]) :-
    display_row(Q, 1),
    display_board(Queens).

% Helper predicate to display a row
display_row(_, 9) :- nl.
display_row(Q, Col) :-
    (Q =:= Col -> write('Q '); write('. ')),
    Col1 is Col + 1,
    display_row(Q, Col1).
