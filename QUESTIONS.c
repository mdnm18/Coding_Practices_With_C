//The Phoenix mall, located in the capital city of Washington, is rectangular in shape with dimensions n×m meters. In celebration of the jubilee anniversary, it was decided to pave the square in front of the mall with square marble stones. Each stone is of size n×n. Your task is to determine the minimum number of stones needed to pave the square.
//#include <stdio.h>
//int main() {
//    int n, m, a;
//    scanf("%d %d %d", &n, &m, &a);
//    if (n > 10000 || m > 10000 || a > 10000) {
//        printf("Invalid Input\n");
//    } else {
//        long long stones = ((n + a - 1LL) / a) * ((m + a - 1LL) / a);
//        printf("%lld\n", stones);
//    }
//    return 0;
//}

//On a bright Sunday, Selvan visited Aaron's house to prepare for their upcoming exams. They decided to focus on Mathematics as their exams were on the following Monday. Aaron, a master of Mathematics, wanted to help Selvan, who needed a bit of assistance in the subject. James also joined in to help Selvan score higher in the exam. After going through some problems, Aaron assigned a task to Selvan: to write a C program that reads two floating-point numbers, checks if they fall within a specific range, converts them to double, and prints the converted values with six decimal places. The valid range for each input value is −1.00≤x≤ 100.00. If any input value falls outside this range, the program should print "Invalid Input."
//#include <stdio.h>
//int main()
//{
//    float num1, num2;
//    scanf("%f %f",&num1,&num2);
//    double resnum1, resnum2;
//    resnum1=(double)num1;
//    resnum2=(double)num2;
//    if(num1>=101.00 || num2>=101.00)
//    {
//      printf("Invalid Input");
//    }
//    else
//    {
//    printf("%.6lf\n%.6lf",resnum1, resnum2);
//    }
//	return 0;
//}

//Write a C program that reads two integers, checks if either of them is zero, and performs basic arithmetic operations (addition, subtraction, multiplication, division, modulus) if both numbers are non-zero. The program should output the results of these operations. If either number is zero, the program should print "Invalid Input".
#include <stdio.h>
int main()
{
    int testnum1, testnum2;
    scanf("%d %d",&testnum1,&testnum2);
    if(testnum1==0 || testnum2==0)
    {
        printf("Invalid Input");
    }
    else
    {
        int sum,sub,mult,mod;
        float div;
        sum=testnum1+testnum2;
        sub=testnum1-testnum2;
        mult=testnum1*testnum2;
        mod=testnum1%testnum2;
        div=(float)testnum1/(float)testnum2;
        printf("Addition: %d\nSubtraction: %d\nMultiplication: %d\nDivision: %.3f\nModulus: %d",sum,sub,mult,div,mod);
    }
	return 0;
}