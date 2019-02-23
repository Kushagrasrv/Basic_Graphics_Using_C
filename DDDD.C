#include<graphics.h>
#include<math.h>

int abs (int n)
{
    return ( (n>0) ? n : ( n * (-1)));
}
void DDA(int X0, int Y0, int X1, int Y1)
{
    int i;
    int dx = X1 - X0;
    int dy = Y1 - Y0;

    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;

    float X = X0;
    float Y = Y0;
    for (i = 0; i <= steps; i++)
    {
	putpixel (X,Y,RED);
	X += Xinc;
	Y += Yinc;
	delay(100);

    }
}

int main()
{
    int gd = DETECT,gm;
    int X0 = 10, Y0 = 10, X1 = 45, Y1 = 45;
    initgraph (&gd, &gm, "");
    DDA(X0, Y0, X1, Y1);
    return 0;
}
