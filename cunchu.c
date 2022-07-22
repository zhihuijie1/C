#define _CRT_SECURE_NO_WARNINGS
//暑假代码

///1：设计一个小程序来判断当前机器的字节序。
/*
1：00000000 00000000 00000000 00000001
0x: 00  00  00 01（大）
低              高
    01 00 00 00  （小）

*/
//#include <stdio.h>;
//
//void  func()
//{
//	int a = 1;
//	if (*((char*)&a) == 1)
//	{
//		printf("小端字节序存储");
//	}
//	else if (*((char*)&a) == 0)
//	{
//		printf("大端字节序存储");
//	}
//	
//}
//int main()
//{
//	func();
//	return 0;
//}
///下面程序输出什么？
//#include <stdio.h>
//int main()
//{
//    char a = -128;
//    printf("%u\n", a);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char a = 128;
//    printf("%u\n", a);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    unsigned int i ;
//    for (i = 9; i >= 0; i--)
//    {
//        printf("%u\n", i);
//        Sleep(1000);
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char a = -1;
//    signed char b = -1;
//    unsigned char c = -1;
//    printf("a=%d,b=%d,c=%d",a,b,c);
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    char a[1000];
//    int i;
//    for (i=0;i<1000;i++)
//    {
//        a[i] = -1 - i;
//        //-1 -2 -3 -4 -5    -1000
//        //char:-128--+127
//        //unsigened char :0-255
//    }
//    printf("%d",strlen(a));
//    return 0;
//}

//#include<stdio.h>
//unsigned char i = 0;
//
//int main()
//{
//    for (i=0;i<=255;i++)
//    {
//        printf("hello world \n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main()
//{
//    unsigned int i = 3;
//    unsigned int j = 6;
//    printf("%u",i-j);
//    //  00000000 00000000 00000000 00000011    3（补码=原）
//    // 
//    //  10000000 00000000 00000000 00000110    -6
//    //  11111111 11111111 11111111 11111001
//    //  11111111 11111111 11111111 11111010（补码）
//    // 
//    // 00000000 00000000 00000000 00000011（补码）3
//    // 11111111 11111111 11111111 11111010（补码）-6
//    // 11111111 11111111 11111111 11111101（补码）
//
//    //11111111 11111111 11111111 11111101
//    return 0;
//}


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    if (strlen ("abc")-strlen ("abcdef")>=0)
//    {
//        printf(">\n");
//    }
//    else
//    {
//        printf("<\n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    float f = 5.5f;
//    /*
//    5.5
//    101.1
//    (-1)^0 * 1.011 * 2^2
//    G:0 M:1.011 E:2  ->2+127=129
//    内存中：0 1000 0001 01100000000000000000000
//            0100 0000 1011 0000 0000 0000 0000 0000
//            ox:40  b0 00 00
//    */
//
//    return 0;
//}

#include<stdio.h>
int main()
{
    int n = 9;
    float* pFloat = (float*)&n;
    printf("n的值为：%d\n", n);
    printf("*pFloat的值为：%f\n", *pFloat);
    *pFloat = 9.0;
    printf("num的值为：%d\n", n);
    printf("*pFloat的值为：%f\n", *pFloat);
    return 0;
}


    