class Solution:
    def tictactoe(self, moves: List[List[int]]) -> str:
        wins = [
            [(0, 0), (0, 1), (0, 2)], 
            [(1, 0), (1, 1), (1, 2)], 
            [(2, 0), (2, 1), (2, 2)],
            [(0, 0), (1, 0), (2, 0)], 
            [(0, 1), (1, 1), (2, 1)],
            [(0, 2), (1, 2), (2, 2)],
            [(0, 0), (1, 1), (2, 2)],
            [(2, 0), (1, 1), (0, 2)],
        ]
        dictionaty = {}
        for move in moves:
            if moves.index(move)%2 == 0:
                dictionaty["A"+str(moves.index(move))] = [move]
            else:
                dictionaty["B"+str(moves.index(move))] = [move]
        A_A = []
        B_B = []
        for key in dictionaty.keys():
            if str(key[:1]) == "A":
                A_A.append(dictionaty[key])
        for key in dictionaty.keys():
            if str(key[:1]) == "B":
                B_B.append(dictionaty[key])
        for i in range (len(wins)):
            count = 0
            for j in range(3):
                for k in range(len(A_A)):
                    if list(wins[i][j]) == A_A[k][0]:
                        print(count)
                        count += 1
            if count == 3:
                return "A"

        for i in range (len(wins)):
            count = 0
            for j in range(3):
                for k in range(len(B_B)):
                    if list(wins[i][j]) == B_B[k][0]:
                        print(count)
                        count += 1
            if count == 3:
                return "B"
        if len(moves) == 9:
            return "Draw"
        return "Pending"