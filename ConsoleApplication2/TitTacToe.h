#ifndef TICTACTOE_H_INCLUDED
#define TICTACTOE_H_INCLUDED
#include <string.h>

class TicTacToe
{
public:
	TicTacToe();
	~TicTacToe();
	void welcome();
	const  void getInput();
	const char* blockEntries[9];
private:
	int checkStatus() const;
	int turns;
	void printBoard() const;
	const void resetBoard();
};

#endif // TICTACTOE_H_INCLUDED