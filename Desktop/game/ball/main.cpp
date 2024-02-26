#include "DxLib.h"
#include "game.h"
#include "ball.h"

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    ChangeWindowMode(TRUE), DxLib_Init(), SetDrawScreen(DX_SCREEN_BACK);//�E�B���h�E���[�h�ύX�Ə������Ɨ���ʐݒ�

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
    DxLib_End(); // DX���C�u�����I������
    return 0;
}
