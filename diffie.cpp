#include "diffie.h"
#include <complex>
#include <openssl/sha.h>


long long mod_pow(long long base, long long exp, long long mod){
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
    return mod_pow(g, h, p);// создаем ключ который получает юзер от другого
}

long long session_key(long long p, long long a, long long b){//a - это ключ котрый получает юзер от другого, b - показатель степени это то secret key который мы  отправляли другому
    return mod_pow(a, b, p); // общий секретный ключ
}

std::vector<unsigned char> shared_key(long long ses_key){
    std::vector<unsigned char> aes_key(32);
    std::vector<unsigned char> buf(8);
    for (int i = 0 ; i < 8 ;i++) buf[i] = (ses_key >> (i * 8)) & 0xFF; // ses_key >> (i * 8) двигает число чтобы получить i-ый байт а & 0xFF - это маска чтобы получить только 8 битов
    SHA256(buf.data(), buf.size(), aes_key.data());
    return aes_key;
}
