#include <cstdint>
#include <vector>

void SubBytes(uint8_t state[4][4]){} // заменяем каждый байт по S-box
void ShiftRows(uint8_t state[4][4]){}// циклическитй сдвиг строк
void MixColumns(uint8_t state[4][4]){}// перемешивание колонок через матрицу GF(2^8)
void AddRoundKey(uint8_t state[4][4], const std::vector<uint8_t>& roundKey){}// делаем XOR

std::vector<uint8_t> aes_encrypt(const uint8_t input[16], const uint8_t key[16]){

}
