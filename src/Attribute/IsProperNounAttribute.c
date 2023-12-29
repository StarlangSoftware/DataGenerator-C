//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "IsProperNounAttribute.h"

/**
 * Binary attribute for a given word. If the word represents a date (if the morphological parse contains
 * tag PROPERNOUN), the attribute will have the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_proper_noun_attribute(const Morphological_parse *parse) {
    return create_binary_attribute(is_parse_proper_noun(parse));
}
