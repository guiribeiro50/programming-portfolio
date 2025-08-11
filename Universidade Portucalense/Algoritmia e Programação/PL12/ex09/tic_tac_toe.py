def winner(board):
    for i in range(len(board)):
        for j in range(len(board[0])):
            if (all(board[i][k] == "X" for k in range(len(board[0])))):
                return "X"
            elif (all(board[i][k] == "O" for k in range(len(board[0])))):
                return "O"

    for i in range(len(board)):
        for j in range(len(board[0])):
            if (all(board[k][i] == "X" for k in range(len(board)))):
                return "X"
            elif (all(board[k][i] == "O" for k in range(len(board)))):
                return "O"

    if all(board[i][i] == "X" for i in range(len(board))):
        return "X"
    if all(board[i][i] == "O" for i in range(len(board))):
        return "O"

    if all(board[i][len(board) - 1 - i] == "X" for i in range(len(board))):
        return "X"
    if all(board[i][len(board) - 1 - i] == "O" for i in range(len(board))):
        return "O"

    return "No winner yet"

board = [
['X', 'O', 'O'],
['O', 'O', 'X'],
['O', '',  'X']
]

print(winner(board))
