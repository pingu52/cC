#include <math.h>
#include <stdio.h>

int chk_score(double x, double y) {
    double dist = sqrt(x * x + y * y);

    if (dist <= 3.0) {
        return 100;
    } else if (dist <= 6.0) {
        return 80;
    } else if (dist <= 9.0) {
        return 60;
    } else if (dist <= 12.0) {
        return 40;
    } else if (dist <= 15.0) {
        return 20;
    } else {
        return 0;
    }
}

int main() {
    int tcase;
    scanf("%d", &tcase);

    for (int i = 0; i < tcase; i++) {
        int score1 = 0;
        int score2 = 0;

        double x, y;

        for (int i = 0; i < 3; i++) {
            scanf("%lf %lf", &x, &y);
            score1 += chk_score(x, y);
        }

        for (int i = 0; i < 3; i++) {
            scanf("%lf %lf", &x, &y);
            score2 += chk_score(x, y);
        }

        if (score1 > score2) {
            printf("SCORE: %d to %d, PLAYER 1 WINS.\n", score1, score2);
        } else if (score1 < score2) {
            printf("SCORE: %d to %d, PLAYER 2 WINS.\n", score1, score2);
        } else {
            printf("SCORE: %d to %d, TIE.\n", score1, score2);
        }
    }

    return 0;
}
