//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "CaseAttribute.h"

/**
 * Discrete attribute for a given word. If the last inflectional group of the word contains case information, the
 * attribute will have that case value. Otherwise the attribute will have the value null.
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_case_attribute(const Morphological_parse *parse) {
    return create_binary_attribute(last_ig_contains_case(parse));
}
