#ifndef PIECES_H_INCLUDED
#define PIECES_H_INCLUDED

class Pieces
{
public:

	int GetBlockType		(int pPiece, int pRotation, int pX, int pY);
	int GetXInitialPosition (int pPiece, int pRotation);
	int GetYInitialPosition (int pPiece, int pRotation);
};

#endif // PIECES_H_INCLUDED
