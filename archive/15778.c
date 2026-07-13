#include <stdio.h>
#include <string.h>

// 맵 모퉁이 
#define NONE -1	// 아직 말이 판에 없음 
#define CORNER_1 100	// 날밭
#define CORNER_2 200	// 앞밭 
#define CORNER_3 300	// 뒷밭 
#define CORNER_4 400	// 쩔밭 
#define CORNER_5 500	// 방 

// 윷 이동 칸수 
#define DO 1
#define GAE 2
#define GEOL 3
#define YUT 4
#define MO 5

// 말
#define TEAM_1 10	// 대문자 
#define TEAM_2 11	// 소문자 

typedef struct _Piece
{
	int team;
	int pos;
	char ch;
} Piece;

// 윷놀이 게임 관련 함수 
int GetMoveCount(char* yut);
void Ride(Piece o, Piece other);
void Catch(Piece o, Piece other);

// 윷놀이 판 관련 함수 
void PrintBoard(); 
char GetA(int pos);
char GetB(int pos);
char GetC(int pos);
char GetD(int pos);

int main(void)
{
	int i;
	int n;
	char p, yut[5];
	int mvc;
	Piece piece;
	Piece group[8];
	
	for (i = 0; i < 8; i++)
	{
		group[i].pos = NONE;
	}
	
	scanf("%d", &n);
	
	while (n--)
	{
		scanf(" %c %s", &p, yut);
		
		mvc = GetMoveCount(yut);
		piece.team = p >= 'a' ? TEAM_2 : TEAM_1;
		piece.ch = p;
		piece.pos = CORNER_1 + mvc;
	}
	
	PrintBoard();
	
	return 0;
}

int GetMoveCount(char* yut)
{
	int i;
	int count;
	
	if (strcmp(yut, "BBBB") == 0)
	{
		return MO;
	}
	
	for (i = 0; i < 4; i++)
	{
		if (yut[i] == 'F')
		{
			count++;
		}
	}
	
	return count;
}

// 말 o가 다른 말 other에 업음 
void Ride(Piece o, Piece other)
{
	
}

// 말 o가 다른 말 other를 잡음 
void Catch(Piece o, Piece other)
{
	
}

void PrintBoard()
{
	printf("%c%c----%c%c----%c%c----%c%c----%c%c----%c%c\n", GetA(CORNER_3), GetB(CORNER_3), GetA(CORNER_1 + MO + YUT), GetB(CORNER_1 + MO + YUT), GetA(CORNER_1 + MO + GEOL), GetB(CORNER_1 + MO + GEOL), GetA(CORNER_1 + MO + GAE), GetB(CORNER_1 + MO + GAE), GetA(CORNER_1 + MO + DO), GetB(CORNER_1 + MO + DO), GetA(CORNER_2), GetB(CORNER_2));
	printf("%c%c    %c%c    %c%c    %c%c    %c%c    %c%c\n", GetC(CORNER_3), GetD(CORNER_3), GetC(CORNER_1 + MO + YUT), GetD(CORNER_1 + MO + YUT), GetC(CORNER_1 + MO + GEOL), GetD(CORNER_1 + MO + GEOL), GetC(CORNER_1 + MO + GAE), GetD(CORNER_1 + MO + GAE), GetC(CORNER_1 + MO + DO), GetD(CORNER_1 + MO + DO), GetC(CORNER_2), GetD(CORNER_2));
	printf("| \\                          / |\n");
	printf("|  \\                        /  |\n");
	printf("|   \\                      /   |\n");
	printf("|    %c%c                  %c%c    |\n", GetA(CORNER_3 + DO), GetB(CORNER_3 + DO), GetA(CORNER_2 + DO), GetB(CORNER_2 + DO));
	printf("%c%c   %c%c                  %c%c   %c%c\n", GetA(CORNER_1 + MO * 2 + DO), GetB(CORNER_1 + MO * 2 + DO), GetC(CORNER_3 + DO), GetD(CORNER_3 + DO), GetC(CORNER_2 + DO), GetD(CORNER_2 + DO), GetA(CORNER_1 + YUT), GetB(CORNER_1 + YUT));
	printf("%c%c     \\                /     %c%c\n", GetC(CORNER_1 + MO * 2 + DO), GetD(CORNER_1 + MO * 2 + DO), GetC(CORNER_1 + YUT), GetD(CORNER_1 + YUT));
	printf("|       \\              /       |\n");
	printf("|        \\            /        |\n");
	printf("|         %c%c        %c%c         |\n", GetA(CORNER_3 + GAE), GetB(CORNER_3 + GAE), GetA(CORNER_2 + GAE), GetB(CORNER_2 + GAE));
	printf("|         %c%c        %c%c         |\n", GetC(CORNER_3 + GAE), GetD(CORNER_3 + GAE), GetC(CORNER_2 + GAE), GetD(CORNER_2 + GAE));
	printf("%c%c          \\      /          %c%c\n", GetA(CORNER_1 + MO * 2 + GAE), GetB(CORNER_1 + MO * 2 + GAE), GetA(CORNER_1 + GEOL), GetB(CORNER_1 + GEOL));
	printf("%c%c           \\    /           %c%c\n", GetC(CORNER_1 + MO * 2 + GAE), GetD(CORNER_1 + MO * 2 + GAE), GetC(CORNER_1 + GEOL), GetD(CORNER_1 + GEOL));
	printf("|             \\  /             |\n");
	printf("|              %c%c              |\n", GetA(CORNER_5), GetB(CORNER_5));
	printf("|              %c%c              |\n", GetC(CORNER_5), GetD(CORNER_5));
	printf("|             /  \\             |\n");
	printf("%c%c           /    \\           %c%c\n", GetA(CORNER_1 + MO * 2 + GEOL), GetB(CORNER_1 + MO * 2 + GEOL), GetA(CORNER_1 + GAE), GetB(CORNER_1 + GAE));
	printf("%c%c          /      \\          %c%c\n", GetC(CORNER_1 + MO * 2 + GEOL), GetD(CORNER_1 + MO * 2 + GEOL), GetC(CORNER_1 + GAE), GetD(CORNER_1 + GAE));
	printf("|         %c%c        %c%c         |\n", GetA(CORNER_2 + YUT), GetB(CORNER_2 + YUT), GetA(CORNER_3 + YUT), GetB(CORNER_3 + YUT));
	printf("|         %c%c        %c%c         |\n", GetC(CORNER_2 + YUT), GetD(CORNER_2 + YUT), GetC(CORNER_3 + YUT), GetD(CORNER_3 + YUT));
	printf("|        /            \\        |\n");
	printf("|       /              \\       |\n");
	printf("%c%c     /                \\     %c%c\n", GetA(CORNER_1 + MO * 2 + YUT), GetB(CORNER_1 + MO * 2 + YUT), GetA(CORNER_1 + DO), GetB(CORNER_1 + DO));
	printf("%c%c   %c%c                  %c%c   %c%c\n", GetC(CORNER_1 + MO * 2 + YUT), GetD(CORNER_1 + MO * 2 + YUT), GetA(CORNER_2 + MO), GetB(CORNER_2 + MO), GetA(CORNER_3 + MO), GetB(CORNER_3 + MO), GetC(CORNER_1 + DO), GetD(CORNER_1 + DO));
	printf("|    %c%c                  %c%c    |\n", GetC(CORNER_2 + MO), GetD(CORNER_2 + MO), GetC(CORNER_3 + MO), GetD(CORNER_3 + MO));
	printf("|   /                      \\   |\n");
	printf("|  /                        \\  |\n");
	printf("| /                          \\ |\n");
	printf("%c%c    %c%c    %c%c    %c%c    %c%c    %c%c\n", GetA(CORNER_4), GetB(CORNER_4), GetA(CORNER_1 + MO * 3 + DO), GetB(CORNER_1 + MO * 3 + DO), GetA(CORNER_1 + MO * 3 + GAE), GetB(CORNER_1 + MO * 3 + GAE), GetA(CORNER_1 + MO * 3 + GEOL), GetB(CORNER_1 + MO * 3 + GEOL), GetA(CORNER_1 + MO * 3 + YUT), GetB(CORNER_1 + MO * 3 + YUT), GetA(CORNER_1), GetB(CORNER_1));
	printf("%c%c----%c%c----%c%c----%c%c----%c%c----%c%c\n", GetC(CORNER_4), GetD(CORNER_4), GetC(CORNER_1 + MO * 3 + DO), GetD(CORNER_1 + MO * 3 + DO), GetC(CORNER_1 + MO * 3 + GAE), GetD(CORNER_1 + MO * 3 + GAE), GetC(CORNER_1 + MO * 3 + GEOL), GetD(CORNER_1 + MO * 3 + GEOL), GetC(CORNER_1 + MO * 3 + YUT), GetD(CORNER_1 + MO * 3 + YUT), GetC(CORNER_1), GetD(CORNER_1));
}

char GetA(int pos)
{
	return '.';
}

char GetB(int pos)
{
	return '.';
}

char GetC(int pos)
{
	return '.';
}

char GetD(int pos)
{
	return '.';
}
