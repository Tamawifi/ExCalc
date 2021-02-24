#include <stdio.h>

void simplecalc();

int main (void) {
    int funcnum = 0;

    printf("このプログラムでは、資格試験の問題でよく見られる計算ができます。\n");
    printf("（現在作成中、今後昨日追加予定）\n");
    printf("次のうち、呼び出したい機能の番号を選んでください\n");
    printf("1:シンプル電卓, 2:簿記検定関連, 3:情報処理技術者試験関連\n");
    printf("注意:現在1の機能のみ実装されています");
    printf("番号を入力 : ");
    scanf("%d", &funcnum);
    switch (funcnum) {
        case 1:
            simplecalc ();
            break;
        default:
            printf("他の機能は現在実装待ちです");
            break;
    }
    return 0;
}

void simplecalc () {
    printf("ここにシンプル電卓の機能を実装します。\n");
}