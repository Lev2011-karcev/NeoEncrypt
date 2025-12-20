
🌐 NeoEncrypt – NeoTerra Messenger Crypto Module 🔐

<img width="640" height="94" alt="image" src="https://github.com/user-attachments/assets/35d70a0b-b3a6-494b-89d4-dbbddfb9b551" />




Secure key exchange and cryptography module for the NeoTerra Internet State Messenger.
Enables end-to-end encrypted communication using Diffie-Hellman key exchange.

✨ Features
- ⚡ Fast modular exponentiation (modpow) for large numbers
- 🔑 Public/private key generation for users
- 🤝 Shared secret computation between parties
- 🛠 Fully compatible with the NeoTerra messaging protocol
- 💡 Lightweight, educational, and easy to integrate

🛠 Functions Overview
- real_pow: Performs fast modular exponentiation (base^exp % mod) using binary exponentiation.
- secret_key: Generates your public key from a private secret.
- diffie_hellman: Computes the shared secret using the other party’s public key and your private secret.

⚡ Usage Overview
1. Include the NeoEncrypt module in your project.
2. Generate your public key using your private secret.
3. Exchange public keys with another user.
4. Compute the shared secret using the other user's public key and your private secret.
5. Use the shared secret for encryption in NeoTerra messenger.

💡 Notes
- Currently implemented using long long integers for demonstration.
- For real production-level security, use BigInteger libraries or cryptographic libraries (e.g., libsodium, OpenSSL).
- Designed to integrate seamlessly into NeoTerra messenger for secure end-to-end communication.

📝 License
Open-source for development within the NeoTerra project.
Free to adapt and extend for internal use.

<<<<<<< HEAD
=======

<img width="640" height="94" alt="image" src="https://github.com/user-attachments/assets/35d70a0b-b3a6-494b-89d4-dbbddfb9b551" />
>>>>>>> d9caddc82e5336082ff1ed8e1b9a23f045058a74

<img width="640" height="94" alt="image" src="https://github.com/user-attachments/assets/35d70a0b-b3a6-494b-89d4-dbbddfb9b551" />
