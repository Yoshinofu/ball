#ifndef _INCLUDE_BALL_
#define _INCLUDE_BALL_

static const int fieldWidth = 640;
static const int fieldHeight = 340;

typedef struct {
    int x, y;       // À•WŠi”[—p•Ï”
    int dx, dy;
    int v; // €–Ú–¼Ši”[—p•Ï”
} BallStatus;

BallStatus ballStatus = { fieldWidth / 2, fieldHeight / 2, 3, 3, 1 };

void ballCal();
void ballMove();
void ballDraw();

#endif