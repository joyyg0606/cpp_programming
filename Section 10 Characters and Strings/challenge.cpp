// section 10 challenge

#include <iostream>

using namespace std;

int main()
{
    string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"|XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    string secret_message;
    string encoded_message;

    cout << "Enter a secret message: ";
    getline(cin, secret_message);

    for (char c : secret_message) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_char {key.at(position)};
            encoded_message += new_char;
        } else {
            encoded_message += c;
        }
    }

    cout << "\nEncrypted message: " << encoded_message << endl;

    string decrypted_message {};
    cout << "\nDecrypting message..." << endl;

    for (char c : encoded_message) {
        size_t position = key.find(c);
        if (position != string::npos) {
            char new_char {alphabet.at(position)};
            decrypted_message += new_char;
        } else {
            decrypted_message += c;
        }
    }

    cout << "\nDecrypted message: " << decrypted_message << endl;

    return 0;
}