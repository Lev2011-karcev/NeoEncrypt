#ifndef AES_H
#define AES_H

#include <vector>
void SubBytes(uint8_t state[4][4]);
void ShiftRows(uint8_t state[4][4]);
void MixColumns(uint8_t state[4][4]);
void AddRoundKey(uint8_t state[4][4], const std::vector<uint8_t>& roundKey);
std::vector<uint8_t> aes_encrypt(const uint8_t input[16], const uint8_t key[16]);
#endif
