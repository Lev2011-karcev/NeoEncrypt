## NeoEncrypt

⸻

🌐 NeoEncrypt – NeoTerra Messenger Crypto Module 🔐

 _   _                _____                     _             
| \ | |              |  ___|                   | |            
|  \| |_         
⸻

🌐 NeoE
⸻

🌐 Neo_⸻

🌐 NeoEncrypt _ __  
| .ncrypt – NeoTerra Messenger Crypto Module 🔐

|/ _ \| '_ \ 
| |\  | oTerra M\__ \| |  |  __/  __/ | | | (_| | (_) | | | |
\_| \_/\___||___/___/\_|   \___|\___|_| |_|\__,_|\___/|_| |_|

Secure key exchange and cryptography module for the NeoTerra Internet State Messenger.
Enables end-to-end encrypted communication using Diffie-Hellman key exchange.

⸻

✨ Features
 • ⚡ Fast modular exponentiation (modpow) for large numbers
 • 🔑 Public/private key generation for users
 • 🤝 Shared secret computation between parties
 • 🛠 Fully compatible with the NeoTerra messaging protocol
 • 💡 Lightweight, educational, and easy to integrate

⸻

🛠 Functions Overview

real_pow

Performs fast modular exponentiation (base^exp) % mod using binary exponentiation, safe for large exponents.

secret_key

Generates your public key from a private secret.
Takes a prime modulus, generator, and your secret to produce the public key for exchange.

diffie_hellman

Computes the shared secret using the other party’s public key and your private secret.
Both users obtain the same secret key without transmitting it.

⸻

⚡ Usage Overview
 1. Include the NeoEncrypt module in your project.
 2. Generate your public key using your private secret.
 3. Exchange public keys with another user.
 4. Compute the shared secret using the other user’s public key and your private secret.
 5. Use the shared secret for encryption in NeoTerra messenger.

⸻

💡 Notes
 • Currently implemented using long long integers for demonstration.
 • For real production-level security, use BigInteger libraries or cryptographic libraries (e.g., libsodium, OpenSSL).
 • Designed to integrate seamlessly into NeoTerra messenger for secure end-to-end communication.

⸻

📝 License

Open-source for development within the NeoTerra project.
Free to adapt and extend for internal use.

⸻


 _   _                ity, us                              _     
| \ | |               |  ___|                             | |    
|  \| |         

⸻

🌐 NeoEn
⸻

🌐 Neo_⸻

🌐 Ne ⸻

🌐 NeoE| |__  
| .ncrypt – NeoTerra Messenger Crypto Module _ \ / _ \ '_ \| '_ \ 
| |\  | essenger\__ \ | |  |  __/  __/ | | | | |  __/ | | | | | |
\_| \_/\___||___/___/ \_|   \___|\___|_| |_| |_|\___|_| |_|_| |_|
