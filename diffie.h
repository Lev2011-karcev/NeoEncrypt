// Защита от повторного включения
#ifndef DIFFIE_H
#define DIFFIE_H

// Объявление функции
long long diffie_hellman(long long p, long long g, long long a, long long b);
long long real_pow(long long base, long long exp, long long mod);
long long secret_key(long long p, long long g, long long h);
#endif // DIFFIE_H

//
