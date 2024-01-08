#include <iostream>
#include <string>

using namespace std;

string encrypt(const string& plaintext, int shift) {
    string result = "";
    for (char ch : plaintext) {
        if (isalpha(ch)) {
            char base = islower(ch) ? 'a' : 'A';
            char encrypted_char = ((ch - base + shift) % 26 + 26) % 26 + base;
            result += encrypted_char;
        } else {
            result += ch;
        }
    }

    return result;
}

string decrypt(const string& ciphertext, int shift) {
    return encrypt(ciphertext, -shift);
}

int main() {
    string plaintext = "Hello, World!";
    int shift = 3;

    // Encryption
    string ciphertext = encrypt(plaintext, shift);
    cout << "Encrypted: " << ciphertext << endl;

    // Decryption
    string decrypted_text = decrypt(ciphertext, shift);
    cout << "Decrypted: " << decrypted_text << endl;

    return 0;
}
