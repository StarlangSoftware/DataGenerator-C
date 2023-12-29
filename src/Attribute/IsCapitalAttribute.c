//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include <string.h>
#include "IsCapitalAttribute.h"

/**
 * Binary attribute for a given word. If the starting letter of the word is capital, the attribute will have
 * the value "true", otherwise "false".
 * @param surfaceForm Surface form of the word.
 */
Attribute_ptr create_capital_attribute(const char* surfaceForm) {
    return create_binary_attribute(is_upper_attribute(surfaceForm));
}

bool is_upper_attribute(const char *surface) {
    bool is_upper = false;
    String_ptr st = char_at(surface, 0);
    if (strcmp(st->s, "A") >= 0 && strcmp(st->s, "Z") <= 0){
        is_upper = true;
    }
    if (string_in_list(st->s, (char*[]) {"Ç", "Ö", "Ğ", "Ü", "Ş", "İ"}, 6)){
        is_upper = true;
    }
    free_string_ptr(st);
    return is_upper;
}
