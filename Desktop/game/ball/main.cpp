#include "DxLib.h"
#include "game.h"
#include "ball.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK);//ウィンドウモード変更と初期化と裏画面設定

    opIni();

    while (ScreenFlip() == 0 && ProcessMessage() == 0 && gpUpdateKey() == 0) {

        ClearDrawScreen();

        switch (phase){

        case OPENING:
            if (opCal() == 1) {
                phase = 1;
                break;
            }
            opDraw();
            break;

        case MAIN:
            ballMove();
            ballDraw();
            break;
        case ENDING:
            break;
        default:
            break;
        }


    }
    DxLib_End(); // DXライブラリ終了処理
    return 0;
}
