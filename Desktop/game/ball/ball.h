#ifndef _INCLUDE_BALL_
#define _INCLUDE_BALL_
//
enum {
    OPENING,
    MAIN,
    ENDING,
};

typedef struct {
    int x, y;       // ���W�i�[�p�ϐ�
    char name[128]; // ���ږ��i�[�p�ϐ�
} menuElement_t;

int phase = 0;

int Key[256];

menuElement_t menuElement[5] = {
        {  80, 100, "�Q�[���X�^�[�g" }, // �^�O�̒��g�̏��ԂŊi�[�����Bx��80���Ay��100���Aname��"�Q�[���X�^�[�g"��
        { 100, 150, "���܂�" },
        { 100, 200, "�w���v" },
        { 100, 250, "�R���t�B�O" },
        { 100, 300, "�Q�[���I��" },
};

int selectNum = 0;

int gpUpdateKey();
void opIni();
void opEnd();
int opCal();
void opDraw();

#endif