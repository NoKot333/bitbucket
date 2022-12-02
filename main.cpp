double my_pow (double num, unsigned int deg) {
    double rez = 1;
    for (int i =0; i < deg; i++) {
        rez*=num;
    }
    return rez;
}