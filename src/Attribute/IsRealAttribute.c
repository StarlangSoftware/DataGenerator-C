//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "IsRealAttribute.h"

/**
 * Binary attribute for a given word. If the word is represents a real number (if the morphological parse contains
 * tag REAL), the attribute will have the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_real_attribute(const Morphological_parse *parse) {
    return create_binary_attribute(is_parse_real(parse));
}
