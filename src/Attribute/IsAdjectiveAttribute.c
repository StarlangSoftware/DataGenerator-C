//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "IsAdjectiveAttribute.h"

/**
 * Binary attribute for a given word. If the word is an adjective, the attribute will have
 * the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_adjective_attribute(const Morphological_parse *parse) {
    return create_binary_attribute(is_parse_adjective(parse));
}
