//
// Created by Olcay Taner YILDIZ on 27.12.2023.
//

#include "RootFormAttribute.h"

/**
 * Discrete attribute for a given word. Returns the the root word
 * @param parse Morphological parse of the word.
 */
Attribute_ptr create_root_form_attribute(const Morphological_parse *parse) {
    return create_discrete_attribute(parse->root);
}
