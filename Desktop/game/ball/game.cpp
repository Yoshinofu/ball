#include "game.h"
#include "DxLib.h"

void ballCal() {

}

void ballMove() {
	ballStatus.x += ballStatus.dx;
	ballStatus.y += ballStatus.dy;

	if (ballStatus.x >  fieldWidth || ballStatus.x < 0) ballStatus.dx *= (-1);
	if (ballStatus.y > fieldHeight || ballStatus.y < 0) ballStatus.dy *= (-1);

}

void ballDraw() {
	DrawCircle(ballStatus.x, ballStatus.y, 50, GetColor(255, 255, 255), TRUE);
}

