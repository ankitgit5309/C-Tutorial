int fibo(int num);

int main(int argc, char const *argv[]) {
    int n;

    printf("Enter the desired term number: ");
    scanf("%d", &n);
    printf("The %dth term of the Fibonacci series is %d\n", n, fibo(n));
    return 0;
}

int fibo(int num) {
    if (num <= 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return fibo(num - 1) + fibo(num - 2);
    }
}