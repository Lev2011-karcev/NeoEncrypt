#include "diffie.h"
#include <complex>
#include <openssl/sha.h>


long long real_pow(long long base, long long exp, long long mod){
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
long long secret_key(long long p, long long g, long long h){
    return real_pow(g, h, p);
}

long long session_key(long long p, long long a, long long b){//a - это ключ котрый получает юзер от другого, b - показатель степени это то secret key который мы  отправляли другому
    return real_pow(a, b, p); // общий секретный ключ
}

std::vector<unsigned char> shared_key(long long ses_key){
    std::vector<unsigned char> aes_key(32);
    std::vector<unsigned char> buf(8);
    for (int i = 0 ; i < 8 ;i++) buf[i] = (ses_key >> (i * 8)) & 0xFF;
    SHA256(buf, 8, aes_key);
    return aes_key;
}
