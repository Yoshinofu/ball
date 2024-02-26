#ifndef _INCLUDE_BALL_
#define _INCLUDE_BALL_
//
enum {
    OPENING,
    MAIN,
    ENDING,
};

typedef struct {
    int x, y;       // 座標格納用変数
    char name[128]; // 項目名格納用変数
} menuElement_t;

int phase = 0;

int Key[256];

menuElement_t menuElement[5] = {
        {  80, 100, "ゲームスタート" }, // タグの中身の順番で格納される。xに80が、yに100が、nameに"ゲームスタート"が
        { 100, 150, "おまけ" },
        { 100, 200, "ヘルプ" },
        { 100, 250, "コンフィグ" },
        { 100, 300, "ゲーム終了" },
};

int selectNum = 0;

int gpUpdateKey();
void opIni();
void opEnd();
int opCal();
void opDraw();

#endif