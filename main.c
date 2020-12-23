#include <stdio.h>
#include <string.h>

struct schedule {
    int year;        /* 年 */
    int month;       /* 月 */
    int day;         /* 日 */
    int hour;        /* 時 */
    char title[100]; /* 表題 */
};

int main() {
    struct schedule exam;

    /* 「2008/09/02 13:00 前期筆記試験」という情報を作成する */
    exam.year  = 2008;
    exam.month = 9;
    exam.day   = 2;
    exam.hour  = 13;
    strcpy(exam.title, "前期筆記試験");

    printf("%04d/%02d/%02d %02d:00 %s\n",
           exam.year, exam.month, exam.day, exam.hour, exam.title);

    return 0;
}