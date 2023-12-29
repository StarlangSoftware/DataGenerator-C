//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "LastIGContainsPossessiveAttribute.h"

/**
 * Binary attribute for a given word. If the last inflectional group of the word contains possessive information,
 * the attribute will be "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_possessive_attribute(const Morphological_parse *parse) {
    return create_binary_attribute(last_ig_contains_possessive(parse));
}
