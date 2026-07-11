int nextPrime(int n) {
    int num = n + 1;

    while (true) {
        bool isPrime = true;

        if (num < 2) {
            isPrime = false;
        }

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            return num;
        }

        num++;
    }
}