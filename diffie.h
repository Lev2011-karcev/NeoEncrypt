// Защита от повторного включения
#ifndef DIFFIE_H
#define DIFFIE_H
#include <vector>

// Объявление функции
long long session_key(long long p, long long g, long long a, long long b);
long long real_pow(long long base, long long exp, long long mod);
long long secret_key(long long p, long long g, long long h);
std::vector<unsigned char> shared_key(long long ses_key);
#endif // DIFFIE_H

//
