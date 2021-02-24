#include <stdio.h>

void simplecalc();

int main (void) {
    int funcnum = 0;

    printf("このプログラムでは、資格試験の問題でよく見られる計算ができます。\n");
    printf("（現在作成中、今後機能追加予定）\n\n");
    printf("次のうち、呼び出したい機能の番号を選んでください\n");
    printf("1:シンプル電卓, 2:簿記検定関連, 3:情報処理技術者試験関連\n");
    printf("注意:現在1の機能のみ実装されています\n");
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

    int a;
    int b;
    int c;
    int calcfunc=0;

    printf("\nシンプル電卓を選択しました。\n");
    printf("計算に用いる2数を入力してください。\n");
    printf("数A : ");
    scanf("%d", &a);
    printf("数B : ");
    scanf("%d", &b);        
    
    printf("\n次に行いたい操作を選んでください\n");
    printf("1:加算, 2:減算, 3:乗算, 4:除算\n");
    scanf("%d", &calcfunc);
    switch (calcfunc) {
        case 1:
            c=a+b;
            break;
        case 2:
            c=a-b;
            break;
        case 3:
            c=a*b;
            break;
        case 4:
            c=a/b;
            break;
        default:
            printf("不正な操作番号が入力されました。\n");
            break;
    }
    printf("操作の結果は%dです。\n", c);
}
