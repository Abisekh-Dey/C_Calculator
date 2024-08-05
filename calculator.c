#include <stdio.h>
#include <math.h>

void calculator();
void recurssive_function(float result, float c);
void sum(float a, float b);
void subtract(float a, float b);
void multiplication(float a, float b);
void division(float a, float b);
void square(float a);
void cube(float a);
void multiplication_with_10_power(float a, float x);
void cube_root(float a);
void square_root(float a);
void percentage(float a);
void factorial(float a);
void circle_area(float a);
void circle_volume(float a);
void circle_circumference(float a);
void square_area(float a);
void square_volume(float a);
void square_perimeter(float a);
void rectangle_area(float a, float b);
void rectangle_volume(float a, float b, float h);
void rectangle_perimeter(float a, float b);
void logarithm(float a);
void exponential(float a);
void sine(float a);
void cosine(float a);
void tangent(float a);
void sphere_surface_area(float r);
void cylinder_surface_area(float r, float h);
void cone_volume(float r, float h);

int main() {
    int n;
    printf("Enter Password: ");
    scanf("%d", &n);
    if (n == 2000) {
        calculator();
    } else {
        printf("You have entered Wrong Password\n");
        for (int i = 1; i <= 2; i++) {
            printf("Re-enter Password: ");
            scanf("%d", &n);
            if (n == 2000) {
                calculator();
                return 0;
            } else {
                printf("You have entered Wrong Password\n");
            }
        }
    }
    return 0;
}

void calculator() {
    printf("~~~~~~~~~~~~~~~~~~~~~~#*#:WELCOME TO CALCULATOR:#*#~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("|-----------------------------------------------------------------------|\n");
    float a, b, h, x, c, result;
    int operation;
    float pi = 3.14;
    printf("|_______________________________________________________________________|\n");
    printf("|~~~~~~~~~~~~~~~~~~~~~~~~#*#:OPERATION PANEL:#*#~~~~~~~~~~~~~~~~~~~~~~~~|\n");
    printf("|_______________________________________________________________________| \n");
    printf("|1. |Addition                                 [ press 1] > |    (+)     |\n");
    printf("|2. |Subtraction                              [ press 2] > |    (-)     |\n");
    printf("|3. |Multiplication                           [ press 3] > |    (*)     |\n");
    printf("|4. |Division                                 [ press 4] > |    (/)     |\n");
    printf("|5. |Square                                   [ press 5] > |   (x^2)    |\n");
    printf("|6. |Square root                              [ press 6] > |  (x^1/2)   |\n");
    printf("|7. |Percentage                               [ press 7] > |    (%%)     |\n");
    printf("|8. |Factorial                                [ press 8] > |    (!)     |\n");
    printf("|9. |Cube                                     [ press 9] > |   (x^3)    |\n");
    printf("|10.|Number multiplied with 10^x              [press 10] > |  (a*10^x)  |\n");
    printf("|11.|Cube root                                [press 11] > |  (x^1/3)   |\n");
    printf("|12.|Logarithm                                [press 12] > |   log(x)   |\n");
    printf("|13.|Exponential                              [press 13] > |   exp(x)   |\n");
    printf("|14.|Sine                                     [press 14] > |   sin(x)   |\n");
    printf("|15.|Cosine                                   [press 15] > |   cos(x)   |\n");
    printf("|16.|Tangent                                  [press 16] > |   tan(x)   |\n");
    printf("|___|______________________________________________________|____________|\n");
    printf("|20.|Circle area                              [press 20] > |  (pi*r^2)  |\n");
    printf("|21.|Circle volume                            [press 21] > |(4/3*pi*r^3)|\n");
    printf("|22.|Circle circumference                     [press 22] > |  (2*pi*r)  |\n");
    printf("|23.|Square area                              [press 23] > |    (x^2)   |\n");
    printf("|24.|Square volume                            [press 24] > |    (a^3)   |\n");
    printf("|25.|Square perimeter                         [press 25] > |    (4*x)   |\n");
    printf("|26.|Rectangle area                           [press 26] > |    (x*y)   |\n");
    printf("|27.|Rectangle volume                         [press 27] > |   (a*b*h)  |\n");
    printf("|28.|Rectangle perimeter                      [press 28] > |  (2*(x+y)) |\n");
    printf("|29.|Sphere Surface Area                      [press 33] > |  4*pi*r^2  |\n");
    printf("|30.|Cylinder Surface Area                    [press 34] > |2pirh+2pir^2|\n");
    printf("|31.|Cone Volume                              [press 35] > |(1/3)pi*r^2h|\n");
    printf("|50.|Exit                                     [press 50]   |            |\n");
    printf("|___|______________________________________________________|____________|\n");
    printf("|Enter The First Value: ");
    scanf("%f", &a);
    printf("|Enter Your Operation: ");
    scanf("%d", &operation);
    if (operation > 50) {
        printf("|You Have Entered Wrong Number\n");
        return;
    }
    printf("|_______________________________________________________________________|\n");
    if (operation == 1) {
        printf("|Enter The Second Value:  ");
        scanf("%f", &b);
        sum(a, b);
    } else if (operation == 2) {
        printf("|Enter The Second Value: ");
        scanf("%f", &b);
        subtract(a, b);
    } else if (operation == 3) {
        printf("|Enter The Second Value: ");
        scanf("%f", &b);
        multiplication(a, b);
    } else if (operation == 4) {
        printf("|Enter The Second Value: ");
        scanf("%f", &b);
        if (b == 0) {
            printf("|Cannot Divide by 0\n");
            return;
        }
        division(a, b);
    } else if (operation == 5) {
        square(a);
    } else if (operation == 6) {
        square_root(a);
    } else if (operation == 7) {
        percentage(a);
    } else if (operation == 8) {
        factorial(a);
    } else if (operation == 9) {
        cube(a);
    } else if (operation == 10) {
        printf("Enter the Value of x: ");
        scanf("%f", &x);
        multiplication_with_10_power(a, x);
    } else if (operation == 11) {
        cube_root(a);
    } else if (operation == 12) {
        logarithm(a);
    } else if (operation == 13) {
        exponential(a);
    } else if (operation == 14) {
        sine(a);
    } else if (operation == 15) {
        cosine(a);
    } else if (operation == 16) {
        tangent(a);
    } else if (operation == 20) {
        circle_area(a);
    } else if (operation == 21) {
        circle_volume(a);
    } else if (operation == 22) {
        circle_circumference(a);
    } else if (operation == 23) {
        square_area(a);
    } else if (operation == 24) {
        square_volume(a);
    } else if (operation == 25) {
        square_perimeter(a);
    } else if (operation == 26) {
        printf("Enter the Second Value: ");
        scanf("%f", &b);
        rectangle_area(a, b);
    } else if (operation == 27) {
        printf("Enter The Value of b: ");
        scanf("%f", &b);
        printf("Enter The Value of h: ");
        scanf("%f", &h);
        rectangle_volume(a, b, h);
    } else if (operation == 28) {
        printf("Enter The Second Value: ");
        scanf("%f", &b);
        rectangle_perimeter(a, b);
    } else if (operation == 29) {
        sphere_surface_area(a);
    } else if (operation == 30) {
        printf("Enter The Value of h: ");
        scanf("%f", &h);
        cylinder_surface_area(a, h);
    } else if (operation == 31) {
        printf("Enter The Value of h: ");
        scanf("%f", &h);
        cone_volume(a, h);
    } else if (operation == 50) {
        return;
    }
}

void recurssive_function(float result, float c) {
    int operation;
    for (int i = 1; i <= 100; i++) {
        printf("|Enter The Value: ");
        scanf("%f", &c);
        printf("|Enter Your Operation [PRESS THE KEYS AS MENTIONED IN THE OPERATION PANEL]: ");
        scanf("%d", &operation);
        if (c == 0 && operation == 0) {
            return;
        } else {
            if (operation == 1) {
                result = result + c;
                printf("|Result: %f\n", result);
            } else if (operation == 2) {
                result = result - c;
                printf("|Result: %f\n", result);
            } else if (operation == 3) {
                result = result * c;
                printf("|Result: %f\n", result);
            } else if (operation == 4) {
                if (c == 0) {
                    return;
                } else {
                    result = result / c;
                    printf("|Result: %f\n", result);
                }
            } else if (operation == 5) {
                result = pow(c, 2);
                printf("|Result: %f\n", result);
            } else if (operation == 6) {
                result = sqrt(c);
                printf("|Result: %f\n", result);
            } else if (operation == 7) {
                result = c / 100;
                printf("|Result: %f\n", result);
            } else if (operation == 8) {
                result = 1;
                for (int i = 1; i <= c; i++) {
                    result = result * i;
                }
                printf("|Result: %f\n", result);
            } else if (operation == 9) {
                result = pow(c, 3);
                printf("|Result: %f\n", result);
            } else if (operation == 10) {
                float x;
                printf("|Enter the Value of x: ");
                scanf("%f", &x);
                result = c * pow(10, x);
                printf("|Result: %f\n", result);
            } else if (operation == 11) {
                result = cbrt(c);
                printf("|Result: %f\n", result);
            } else if (operation == 12) {
                result = log(result);
                printf("|Result: %f\n", result);
            } else if (operation == 13) {
                result = exp(result);
                printf("|Result: %f\n", result);
            } else if (operation == 14) {
                result = sin(result);
                printf("|Result: %f\n", result);
            } else if (operation == 15) {
                result = cos(result);
                printf("|Result: %f\n", result);
            } else if (operation == 16) {
                result = tan(result);
                printf("|Result: %f\n", result);
            }
        }
    }
}

void sum(float a, float b) {
    float result;
    result = a + b;
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void subtract(float a, float b) {
    float result;
    result = a - b;
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void multiplication(float a, float b) {
    float result;
    result = a * b;
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void division(float a, float b) {
    float result;
    result = a / b;
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void square(float a) {
    float result;
    result = pow(a, 2);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void square_root(float a) {
    float result;
    result = sqrt(a);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void percentage(float a) {
    float result;
    result = a / 100;
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void factorial(float a) {
    float result = 1;
    for (float i = 1; i <= a; i++) {
        result = result * i;
    }
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void cube(float a) {
    float result;
    result = pow(a, 3);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void multiplication_with_10_power(float a, float x) {
    float result;
    result = a * pow(10, x);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void cube_root(float a) {
    float result;
    result = cbrt(a);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void logarithm(float a) {
    float result;
    result = log(a);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void exponential(float a) {
    float result;
    result = exp(a);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void sine(float a) {
    float result;
    result = sin(a);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void cosine(float a) {
    float result;
    result = cos(a);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void tangent(float a) {
    float result;
    result = tan(a);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void circle_area(float a) {
    float result;
    float pi = 3.14;
    result = pi * pow(a, 2);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void circle_volume(float a) {
    float result;
    float pi = 3.14;
    result = (4.0 / 3.0) * pi * pow(a, 3);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void circle_circumference(float a) {
    float result;
    float pi = 3.14;
    result = 2 * pi * a;
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void square_area(float a) {
    float result;
    result = pow(a, 2);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void square_volume(float a) {
    float result;
    result = pow(a, 3);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void square_perimeter(float a) {
    float result;
    result = 4 * a;
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void rectangle_area(float a, float b) {
    float result;
    result = a * b;
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void rectangle_volume(float a, float b, float h) {
    float result;
    result = a * b * h;
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}

void rectangle_perimeter(float a, float b) {
    float result;
    result = 2 * (a + b);
    printf("|Result: %f\n", result);
    recurssive_function(result, a);
}
void sphere_surface_area(float r) {
    float result;
    float pi = 3.14;
    result = 4 * pi * pow(r, 2);
    printf("|Result: %f\n", result);
    recurssive_function(result, r);
}
void cylinder_surface_area(float r, float h) {
    float result;
    float pi = 3.14;
    result = 2 * pi * r * h + 2 * pi * pow(r, 2);
    printf("|Result: %f\n", result);
    recurssive_function(result, r);
}
void cone_volume(float r, float h) {
    float result;
    float pi = 3.14;
    result = (1.0 / 3.0) * pi * pow(r, 2) * h;
    printf("|Result: %f\n", result);
    recurssive_function(result, r);
}
