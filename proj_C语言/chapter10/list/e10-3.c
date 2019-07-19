//通过指针间接地操纵身高

#include <stdio.h>

int main(void)
{
    int sato = 178;/*佐藤的身高*/
    int sanaka = 175;/*佐中的身高*/
    int masaki = 179;/*真崎的身高*/

    int *isako, *hiroko;

    isako = &sato;/*isako指向sato（喜欢佐藤）*/
    hiroko = &masaki;/*hiroko指向masaki（喜欢真崎）*/

    printf("伊沙子喜欢的人的身高%d\n", *isako);
    printf("洋子喜欢的人的身高%d\n", *hiroko);

    isako = &sanaka;/*isako指向sanaka（移情别恋）*/

    *hiroko = 180;/*将hiroko指向的对象赋值为180*/

    putchar('\n');
    printf("佐藤的身高%d\n", sato);
    printf("佐中的身高%d\n", sanaka);
    printf("真崎的身高%d\n", masaki);
    printf("伊沙子喜欢的人的身高%d\n", *isako);
    printf("洋子喜欢的人的身高%d\n", *hiroko);

    return 0;
}