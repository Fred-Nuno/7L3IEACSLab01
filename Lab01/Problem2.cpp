#include<Problem2.h>
#include<math.h>

void Funct_Maths(float * Ans) {
    for (int i = 0; i < 10; i++) {
        Ans[i+1] = sin (i+1) + log (i+1);
    }
}
