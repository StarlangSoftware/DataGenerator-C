//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "IsFractionAttribute.h"

/**
 * Binary attribute for a given word. If the word is represents a fraction (if the morphological parse contains
 * tag FRACTION), the attribute will have the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_fraction_attribute(const Morphological_parse *parse) {
    return create_binary_attribute(is_parse_fraction(parse));
}
