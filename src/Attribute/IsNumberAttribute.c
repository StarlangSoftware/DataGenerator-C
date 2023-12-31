//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "IsNumberAttribute.h"

/**
 * Binary attribute for a given word. If the word is represents a number (if the morphological parse contains
 * tag REAL or CARDINAL), the attribute will have the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_number_attribute(const Morphological_parse *parse) {
    return create_binary_attribute(is_number(parse));
}
