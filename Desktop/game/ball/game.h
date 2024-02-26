#ifndef _INCLUDE_BALL_
#define _INCLUDE_BALL_

static const int fieldWidth = 640;
static const int fieldHeight = 340;

typedef struct {
    int x, y;       // ���W�i�[�p�ϐ�
    int dx, dy;
    int v; // ���ږ��i�[�p�ϐ�
} BallStatus;

BallStatus ballStatus = { fieldWidth / 2, fieldHeight / 2, 3, 3, 1 };

void ballCal();
void ballMove();
void ballDraw();

#endif