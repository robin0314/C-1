#include <stdio.h>



/*int main()

{
	int num;

	num = 20;

	printf("%d", num);
}*/



/*int main()

{

	int num1, num2;

	int num3 = 30, num4 = 40;

	printf("num1 = %d, num 2 = %d \n", num1, num2);

	num1 = 10, num2 = 20;



	printf("num1 = %d, num2 = %d \n", num1, num2);

	printf("num3 = %d, num4 = %d \n", num3, num4);

	return 0;

}*/



/*int main()

{

	int num1 = 3;

	int num2 = 4;

	int result = num1 + num2;



	printf("���� ���: %d \n", result);

	printf("%d+%d+%d \n", num1, num2, result);

	printf("%d��(��) %d�� ���� %d�Դϴ�. \n", num1, num2, result);

	return 0;

}*/



/*int main()

{

	int num1 = 9, num2 = 2;

	printf("%d+%d=%d \n", num1, num2, num1 + num2);

	printf("%d-%d=%d \n", num1, num2, num1 - num2);

	printf("%d*%d=%d \n", num1, num2, num1 * num2);

	printf("%d/%d�� ��=%d \n", num1, num2, num1 / num2);

	printf("%d/%d�� ������=%d \n", num1, num2, num1 % num2);

	return 0;

}*/



/*int main()

{

	int num1 = 2, num2 = 4, num3 = 6;

	num1 += 3; //num1 = num1 + 3;

	num2 *= 4; //num2 = num2 * 4;

	num3 %= 5; //num3 = num3 % 5;

	printf("Result : %d, %d, %d \n", num1, num2, num3);

	return 0;

}*/



/*int main()

{

	int num1 = +2;

	int num2 = -4;



	num1 = -num1;

	printf("num1: %d \n", num1);

	num2 = -num2;

	printf("num2: %d \n", num2);

	return 0;

}*/



/*int main()

{

	int num1 = 12;

	int num2 = 12;

	printf("num1: %d \n", num1);

	printf("num1++: %d \n", num1++);

	printf("num1: %d \n\n", num1);

	printf("num2: %d \n", num2);

	printf("++num2: %d \n", ++num2);

	printf("num2: %d \n", num2);

	return 0;

}*/



/*int main()

{

	int num1 = 10;

	int num2 = (num1--) + 2;



	printf("num1: %d \n", num1);

	printf("num2: %d \n", num2);

	return 0;

}*/



/*int main()

{

	int num1 = 10;

	int num2 = 12;

	int result1, result2, result3;

	result1 = (num1 == num2);

	result2 = (num1 <= num2);

	result3 = (num1 > num2);



	printf("result1: %d\n", result1);

	printf("result2: %d\n", result2);

	printf("result3: %d\n", result3);

	return 0;

}*/



/*int main()

{

	int num1 = 1, num2 = 2;

	printf("Hello "), printf("world! \n");

	num1++;

	num2++;

	printf("%d ", num1), printf("%d ", num2), printf("\n");

	return 0;

}*/



/*int main()

{

	int result;

	int num1, num2;

	printf("���� one: ");

	scanf("%d", &num1);

	printf("���� two: ");

	scanf("%d", &num2);

	result = num1 + num2;

	printf("%d + %d = %d \n", num1, num2, result);

	return 0;

}*/



/*int main()

{

	int result;

	int num1, num2, num3;

	printf("�� ���� ���� �Է�: ");

	scanf("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;

	printf("%d + %d + %d = %d \n", num1, num2, num3, result);

	return 0;

}*/



/*int main()

{

	int num1 = 0xA7, num2 = 0x43;

	int num3 = 032, num4 = 024;

	printf("0xA7�� 10���� ���� ��: %d \n", num1);

	printf("0x43�� 10���� ���� ��: %d \n", num2);

	printf(" 032�� 10���� ���� ��: %d \n", num3);

	printf(" 024�� 10���� ���� ��: %d \n", num4);



	printf("%d-%d=%d \n", num1, num2, num1 - num2);

	printf("%d+%d=%d \n", num3, num4, num3 + num4);

	return 0;

}*/



/*int main()

{

	int num1 = 15;

	int num2 = 20;

	int num3 = num1 & num2;

	printf("AND �������� ���: %d \n", num3);

	return 0;

}*/



/*int main()

{

	int num1 = 15;

	int num2 = 20;

	int num3 = num1 | num2;

	printf("OR������ ���: %d \n", num3);

	return 0;

}*/



/*int main()

{

	int num1 = 15;

	int num2 = 20;

	int num3 = num1 ^ num2;

	printf("XOR�� ������ ���: %d\n", num3);

	return 0;

}*/



/*int main()

{

	int num1 = 15;

	int num2 = ~num1;

	printf("NOT ������ ���: %d \n", num2);

	return 0;

}*/



/*int main()

{

	int num = 15;

	int result1 = num << 1;

	int result2 = num << 2;

	int result3 = num << 3;



	printf("1ĭ �̵� ���: %d \n", result1);

	printf("2ĭ �̵� ���: %d \n", result2);

	printf("3ĭ �̵� ���: %d \n", result3);

	return 0;

}*/



//�������� 3�� ����3

/*int main()

{

	int a;

	scanf("%d", &a);

	printf("%d", a * a);



	return 0;

}*/



//�������� 3�� ����4

/*int main()

{

	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d %d", a / b, a % b);



	return 0;

}*/



//�������� 3�� ����5

/*int main()

{

	int num1, num2, num3;

	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d", (num1 - num2) * (num2 + num3) * (num3 % num1));



	return 0;

}*/



//�������� 4�� ����1

/*int main()

{

	int a;

	scanf("%d", &a);

	printf("%d", ~a+1);

	return 0;

}*/


//�������� 4�� ����2

//int main()

//{

//

//}


//���� Ȯ�� ����

int main()

{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("Input two integers: %d %d\n", a, b);

	printf("%d & %d = %d\n", a, b, a & b);

	printf("%d | %d = %d\n", a, b, a | b);

	printf("%d ^ %d = %d\n", a, b, a ^ b);

	return 0;

}