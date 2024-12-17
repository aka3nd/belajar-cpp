#include <iostream>
#include <string>
#include <text_encoding>

int main() {
    // Mendapatkan encoding default
    std::text_encoding defaultEncoding = std::locale("").encoding();

    // Membuat encoding UTF-8
    std::text_encoding utf8Encoding = std::text_encoding::by_name("utf-8");

    // Memeriksa apakah dua encoding sama
    if (defaultEncoding == utf8Encoding) {
        std::cout << "Encoding default adalah UTF-8" << std::endl;
    }

    // Mendapatkan semua alias dari UTF-8
    for (auto alias : utf8Encoding.aliases()) {
        std::cout << "Alias: " << alias << std::endl;
    }

    // Konversi string dari UTF-8 ke encoding lain (contoh: Latin1)
    // ... (perlu implementasi konversi yang lebih detail)

    return 0;
}
