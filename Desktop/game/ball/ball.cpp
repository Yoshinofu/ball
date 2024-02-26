#include "ball.h"
#include "DxLib.h"

int gpUpdateKey() {
    char tmpKey[256]; // 現在のキーの入力状態を格納する
    GetHitKeyStateAll(tmpKey); // 全てのキーの入力状態を得る
    for (int i = 0; i < 256; i++) {
        if (tmpKey[i] != 0) { // i番のキーコードに対応するキーが押されていたら
            Key[i]++;     // 加算
        }
        else {              // 押されていなければ
            Key[i] = 0;   // 0にする
        }
    }
    return 0;
}

void opIni() {
    selectNum = 0;
}

void opEnd() {

}
int opCal() {
    if (Key[KEY_INPUT_DOWN] == 1) selectNum = (selectNum + 1) % 5;
    if (Key[KEY_INPUT_UP] == 1)   selectNum = (selectNum + 4) % 5;

    if (Key[KEY_INPUT_DOWN] == 1 || Key[KEY_INPUT_UP] == 1) {
        for (int i = 0; i < 5; i++) {
            if (i == selectNum) {
                menuElement[i].x = 80;
            }
            else {
                menuElement[i].x = 100;
            }
        }
    }

    if (selectNum == 0 && Key[KEY_INPUT_SPACE] == 1) {
        phase = MAIN;
        return 1;
    }

    return 0;
}

void opDraw() {
    for (int i = 0; i < 5; i++) {
        DrawFormatString(menuElement[i].x, menuElement[i].y, GetColor(255, 255, 255), menuElement[i].name);
    }
}