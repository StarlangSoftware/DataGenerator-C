//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "IsAuxiliaryVerbAttribute.h"

/**
 * Binary attribute for a given word. If the word is an auxiliary verb, the attribute will have
 * the value "true", otherwise "false".
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_auxiliary_verb_attribute(const Morphological_parse *parse) {
    return create_binary_attribute(is_auxiliary(parse) && is_parse_verb(parse));
}
