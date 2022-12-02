double my_pow(double num, double deg) {
    double result = 1;
    if(deg < 0) {
        deg = -deg;
        while(deg) {
            if (deg % 2 == 0) {
                deg /= 2;
                num *= num;
            }
            else {
                deg--;
                result *= num;
            }
        }

        return 1 / result;
    }
    else {
        while(deg) {
            if (deg % 2 == 0) {
                deg /= 2;
                num *= num;
            }
            else {
                deg--;
                result *= num;
            }
        }

        return result;
    }
}